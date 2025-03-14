/* ###################################################################
**     Filename    : main.c
**     Project     : lab7
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2025-03-08, 09:58, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "TI1.h"
#include "TimerIntLdd1.h"
#include "TI2.h"
#include "TimerIntLdd2.h"
#include "PWM1.h"
#include "PwmLdd1.h"
#include "clk_cam.h"
#include "si_cam.h"
#include "TU2.h"
#include "TU3.h"
#include "TU1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "AD1.h"
#include "AdcLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */

uint16_t adc_val[128];
uint16_t adc_val_buf[128];
uint16_t cam_binary[128];

volatile bool measure_adc_flag;
volatile uint8_t adc_index;

uint8_t line_center = 64;

char msg[129];

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	// const uint16_t cam_threshold = 30000;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  uint8_t line_left  = 0;
  uint8_t line_right = 127;

  for(;;) {
	  if (measure_adc_flag){
		  AD1_Measure(TRUE);
		  AD1_GetValue16(&adc_val[adc_index]);
		  measure_adc_flag = 0;

		  if (adc_index == 127){
			  // copy to buffer that only updates every full read
			  for (uint8_t i=0; i<128; i++){
				  adc_val_buf[i] = adc_val[i];
				  if (adc_val[i] < 8000) {
					  cam_binary[i] = 1;
					  // msg[i] = '1';
					  AS1_SendChar('1');

				  }
				  else {
					  cam_binary[i] = 0;
					  // msg[i] = '0';
					  AS1_SendChar('0');
				  }
			  }
			  AS1_SendChar(10);
			  AS1_SendChar('\n');
			  AS1_SendChar('\r');
			  // AS1_SendChar('-');
			  // print to console
			  // AS1_SendChar();

			  // find left side of line
			  for (int i=0; i<128; i++) {
				  if (cam_binary[i] == 1) {
					  line_left = i;
					  break;
				  }
			  }
			  // find right side of line
			  for (int i=127; i>=0; i--) {
				  if (cam_binary[i] == 1) {
					  line_right = i;
					  break;
				  }
			  }
			  line_center = (line_left + line_right) / 2;
		  }
	  }
  }

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
