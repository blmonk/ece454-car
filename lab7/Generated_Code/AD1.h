/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : AD1.h
**     Project     : lab7
**     Processor   : MKL25Z128VLK4
**     Component   : ADC
**     Version     : Component 01.697, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2025-05-02, 13:43, # CodeGen: 120
**     Abstract    :
**         This device "ADC" implements an A/D converter,
**         its control methods and interrupt/event handling procedure.
**     Settings    :
**          Component name                                 : AD1
**          A/D converter                                  : ADC0
**          Sharing                                        : Disabled
**          ADC_LDD                                        : ADC_LDD
**          Interrupt service/event                        : Disabled
**          A/D channels                                   : 4
**            Channel0                                     : 
**              A/D channel (pin)                          : ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX
**              A/D channel (pin) signal                   : 
**              Mode select                                : Single Ended
**            Channel1                                     : 
**              A/D channel (pin)                          : ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1
**              A/D channel (pin) signal                   : 
**              Mode select                                : Single Ended
**            Channel2                                     : 
**              A/D channel (pin)                          : ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1
**              A/D channel (pin) signal                   : 
**              Mode select                                : Single Ended
**            Channel3                                     : 
**              A/D channel (pin)                          : ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0
**              A/D channel (pin) signal                   : 
**              Mode select                                : Single Ended
**          A/D resolution                                 : Autoselect
**          Conversion time                                : 4.768372 �s
**          Low-power mode                                 : Disabled
**          High-speed conversion mode                     : Disabled
**          Asynchro clock output                          : Disabled
**          Sample time                                    : 0 = short
**          Internal trigger                               : Disabled
**          Number of conversions                          : 1
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Events enabled in init.                      : yes
**          CPU clock/speed selection                      : 
**            High speed mode                              : This component enabled
**            Low speed mode                               : This component disabled
**            Slow speed mode                              : This component disabled
**     Contents    :
**         Measure        - byte AD1_Measure(bool WaitForResult);
**         GetValue16     - byte AD1_GetValue16(word *Values);
**         GetChanValue16 - byte AD1_GetChanValue16(byte Channel, word *Value);
**         Calibrate      - byte AD1_Calibrate(bool WaitForResult);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file AD1.h
** @version 01.00
** @brief
**         This device "ADC" implements an A/D converter,
**         its control methods and interrupt/event handling procedure.
*/         
/*!
**  @addtogroup AD1_module AD1 module documentation
**  @{
*/         

#ifndef __AD1_H
#define __AD1_H

/* MODULE AD1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "AdcLdd1.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 

/* This constant contains the number of channels in the "A/D channel list"
   group */
#define AD1_CHANNEL_COUNT               AdcLdd1_CHANNEL_COUNT



#define AD1_SAMPLE_GROUP_SIZE 4U
static void AD1_MainMeasure(void);
/*
** ===================================================================
**     Method      :  MainMeasure (component ADC)
**
**     Description :
**         The method performs the conversion of the input channels in 
**         the polling mode.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void AD1_HWEnDi(void);
/*
** ===================================================================
**     Method      :  AD1_HWEnDi (component ADC)
**
**     Description :
**         Enables or disables the peripheral(s) associated with the 
**         component. The method is called automatically as a part of the 
**         Enable and Disable methods and several internal methods.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

#define AD1_Measure(W) PE_AD1_Measure()
byte PE_AD1_Measure(void);
/*
** ===================================================================
**     Method      :  AD1_Measure (component ADC)
*/
/*!
**     @brief
**         This method performs one measurement on all channels that
**         are set in the component inspector. (Note: If the [number of
**         conversions] is more than one the conversion of A/D channels
**         is performed specified number of times.)
**     @param
**         WaitForResult   - Wait for a result of a
**                           conversion. If [interrupt service] is
**                           disabled, A/D peripheral doesn't support
**                           measuring all channels at once or Autoscan
**                           mode property isn't enabled and at the same
**                           time the [number of channels] is greater
**                           than 1, then the WaitForResult parameter is
**                           ignored and the method waits for each
**                           result every time. If the [interrupt
**                           service] is disabled and a [number of
**                           conversions] is greater than 1, the
**                           parameter is ignored and the method also
**                           waits for each result every time.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSY - A conversion is already running
*/
/* ===================================================================*/

byte AD1_GetValue16(word *Values);
/*
** ===================================================================
**     Method      :  AD1_GetValue16 (component ADC)
*/
/*!
**     @brief
**         This method returns the last measured values of all channels.
**         Compared with [GetValue] method this method returns more
**         accurate result if the [number of conversions] is greater
**         than 1 and [AD resolution] is less than 16 bits. In addition,
**         the user code dependency on [AD resolution] is eliminated.
**     @param
**         Values          - Pointer to the array that contains
**                           the measured data.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_NOTAVAIL - Requested value not
**                           available
**                           ERR_OVERRUN - External trigger overrun flag
**                           was detected after the last value(s) was
**                           obtained (for example by GetValue). This
**                           error may not be supported on some CPUs
**                           (see generated code).
*/
/* ===================================================================*/

byte AD1_GetChanValue16(byte Channel, word *Value);
/*
** ===================================================================
**     Method      :  AD1_GetChanValue16 (component ADC)
*/
/*!
**     @brief
**         This method returns the last measured value of the required
**         channel. Compared with [GetChanValue] method this method
**         returns more accurate result if the [number of conversions]
**         is greater than 1 and [AD resolution] is less than 16 bits.
**         In addition, the user code dependency on [AD resolution] is
**         eliminated.
**     @param
**         Channel         - Channel number. If only one
**                           channel in the component is set then this
**                           parameter is ignored.
**     @param
**         Value           - Pointer to the measured value.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_NOTAVAIL - Requested value not
**                           available
**                           ERR_RANGE - Parameter "Channel" out of
**                           range
**                           ERR_OVERRUN - External trigger overrun flag
**                           was detected after the last value(s) was
**                           obtained (for example by GetValue). This
**                           error may not be supported on some CPUs
**                           (see generated code).
*/
/* ===================================================================*/

#define AD1_Calibrate(W) PE_AD1_Calibrate()
byte PE_AD1_Calibrate(void);
/*
** ===================================================================
**     Method      :  AD1_Calibrate (component ADC)
**     Description :
**         This method starts self calibration process. Calibration is
**         typically used to remove the effects of the gain and offset
**         from a specific reading.
**     Parameters  :
**         NAME            - DESCRIPTION
**         WaitForResult   - Wait for a result of
**                           calibration. If the <interrupt service> is
**                           disabled, the WaitForResult parameter is
**                           ignored and the method waits for
**                           calibration result every time.
**     Returns     :
**         ---             - Error code
**                           ERR_OK - OK
**                           ERR_BUSY - A conversion is already running
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_DISABLED - Device is disabled
**                           ERR_FAILED - Calibration hasn't been
**                           finished correctly
** ===================================================================
*/

void AD1_Init(void);
/*
** ===================================================================
**     Method      :  AD1_Init (component ADC)
**
**     Description :
**         Initializes the associated peripheral(s) and the component 
**         internal variables. The method is called automatically as a 
**         part of the application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

/* END AD1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __AD1_H */
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
