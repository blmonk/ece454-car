/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : lab7
**     Processor   : MKL25Z128VLK4
**     Component   : MKL25Z128LK4
**     Version     : Component 01.025, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Datasheet   : KL25P80M48SF0RM, Rev.3, Sep 2012
**     Compiler    : GNU C Compiler
**     Date/Time   : 2025-04-11, 15:35, # CodeGen: 71
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MKL25Z128VLK4
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Clock settings                                 : 
**            Internal oscillator                          : 
**              Slow internal reference clock [kHz]        : 32.768
**              Initialize slow trim value                 : no
**              Fast internal reference clock [MHz]        : 4
**              Initialize fast trim value                 : no
**            RTC clock input                              : Disabled
**            System oscillator 0                          : Disabled
**            Clock source settings                        : 1
**              Clock source setting 0                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 0
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [MHz]                  : 0.001
**                MCG settings                             : 
**                  MCG mode                               : FEI
**                  MCG output clock                       : FLL clock
**                  MCG output [MHz]                       : 20.97152
**                  MCG external ref. clock [MHz]          : 0
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Enabled
**                    FLL output [MHz]                     : 20.97152
**                    MCGFFCLK clock [kHz]                 : 32.768
**                    Reference clock source               : Slow internal clock
**                    FLL reference clock [kHz]            : 32.768
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Disabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 0
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 1
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**          Initialization priority                        : interrupts enabled
**          Watchdog disable                               : yes
**          Internal peripherals                           : 
**            NMI pin                                      : Enabled
**              NMI Pin                                    : TSI0_CH5/PTA4/I2C1_SDA/TPM0_CH1/NMI_b
**              NMI Pin signal                             : 
**            Reset control                                : Enabled
**              Reset pin                                  : PTA20/RESET_b
**              Reset pin signal                           : 
**              Filter in STOP                             : Disabled
**              Filter in RUN/WAIT                         : Disabled
**              Filter width                               : 1
**            Flash memory organization                    : 
**              Flash blocks                               : 1
**                Flash block 0                            : PFlash
**                  Address                                : 0x0
**                  Size                                   : 131072
**                  Write unit size                        : 4
**                  Erase unit size                        : 1024
**                  Protection unit size                   : 4096
**            Flash configuration field                    : Enabled
**              Security settings                          : 
**                Flash security                           : Disabled
**                Freescale failure analysis access        : Enabled
**                Mass erase                               : Enabled
**                Backdoor key security                    : Disabled
**                Backdoor key 0                           : 255
**                Backdoor key 1                           : 255
**                Backdoor key 2                           : 255
**                Backdoor key 3                           : 255
**                Backdoor key 4                           : 255
**                Backdoor key 5                           : 255
**                Backdoor key 6                           : 255
**                Backdoor key 7                           : 255
**              Protection regions                         : 
**                P-Flash protection settings              : 
**                  Protection region size                 : 4096
**                  P-Flash protection                     : 0xFFFFFFFF
**                  Protection regions                     : 
**                    Protection region 0                  : Unprotected
**                    Protection region 1                  : Unprotected
**                    Protection region 2                  : Unprotected
**                    Protection region 3                  : Unprotected
**                    Protection region 4                  : Unprotected
**                    Protection region 5                  : Unprotected
**                    Protection region 6                  : Unprotected
**                    Protection region 7                  : Unprotected
**                    Protection region 8                  : Unprotected
**                    Protection region 9                  : Unprotected
**                    Protection region 10                 : Unprotected
**                    Protection region 11                 : Unprotected
**                    Protection region 12                 : Unprotected
**                    Protection region 13                 : Unprotected
**                    Protection region 14                 : Unprotected
**                    Protection region 15                 : Unprotected
**                    Protection region 16                 : Unprotected
**                    Protection region 17                 : Unprotected
**                    Protection region 18                 : Unprotected
**                    Protection region 19                 : Unprotected
**                    Protection region 20                 : Unprotected
**                    Protection region 21                 : Unprotected
**                    Protection region 22                 : Unprotected
**                    Protection region 23                 : Unprotected
**                    Protection region 24                 : Unprotected
**                    Protection region 25                 : Unprotected
**                    Protection region 26                 : Unprotected
**                    Protection region 27                 : Unprotected
**                    Protection region 28                 : Unprotected
**                    Protection region 29                 : Unprotected
**                    Protection region 30                 : Unprotected
**                    Protection region 31                 : Unprotected
**              Peripheral settings                        : 
**                Reset pin function                       : Enabled
**                NMI function                             : Enabled
**                FLASH initialization speed               : Fast
**                Clock dividers settings                  : Fast clock boot
**            MCM settings                                 : Disabled
**            Power management controller                  : 
**              LVD reset                                  : Enabled
**              LVD voltage treshold                       : Low
**              LVW voltage treshold                       : Low
**              Bandgap buffer                             : Disabled
**              Bandgap buffer in VLPx                     : Disabled
**              LVD interrupt                              : 
**                Interrupt                                : INT_LVD_LVW
**                Interrupt request                        : Disabled
**                Interrupt priority                       : 0 (Highest)
**                LVD interrupt                            : Disabled
**                LVW interrupt                            : Disabled
**            System Integration Module                    : 
**              CLKOUT pin control                         : Disabled
**              Clock gating control                       : Disabled
**          CPU interrupts/resets                          : 
**            NMI interrupt                                : Enabled
**              Interrupt                                  : INT_NMI
**            Hard Fault                                   : Disabled
**            Bus Fault                                    : Disabled
**            Usage Fault                                  : Disabled
**            Supervisor Call                              : Disabled
**            Pendable Service                             : Disabled
**            MCG                                          : Disabled
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              Very low power modes                       : Not allowed
**              Low leakage stop mode                      : Not allowed
**              Very low leakage stop mode                 : Not allowed
**            LLWU settings                                : Disabled
**            Operation mode settings                      : 
**              WAIT operation mode                        : 
**                Return to wait after ISR                 : no
**              SLEEP operation mode                       : 
**                Low Power mode                           : STOP
**                Return to stop after ISR                 : no
**              STOP operation mode                        : Disabled
**          Clock configurations                           : 1
**            Clock configuration 0                        : 
**              __IRC_32kHz                                : 0.032768
**              __IRC_4MHz                                 : 2
**              __SYSTEM_OSC                               : 8
**              __RTC_CLKIN                                : 0.032768
**              Very low power mode                        : Disabled
**              Clock source setting                       : configuration 0
**                MCG mode                                 : FEI
**                MCG output [MHz]                         : 20.97152
**                MCGIRCLK clock [MHz]                     : 0.032768
**                OSCERCLK clock [MHz]                     : 0
**                ERCLK32K. clock [MHz]                    : 0.001
**                MCGFFCLK [kHz]                           : 32.768
**              System clocks                              : 
**                Core clock prescaler                     : Auto select
**                Core clock                               : 20.97152
**                Bus clock prescaler                      : Auto select
**                Bus clock                                : 20.97152
**                PLL/FLL clock selection                  : Auto select
**                  Clock frequency [MHz]                  : 20.97152
**                TPM clock selection                      : Auto select
**                  Clock frequency [MHz]                  : 20.97152
**     Contents    :
**         No public methods
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
** @file Cpu.c
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

/* {Default RTOS Adapter} No RTOS includes */
#include "TU1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "AD1.h"
#include "AdcLdd1.h"
#include "TI1.h"
#include "TimerIntLdd1.h"
#include "TI2.h"
#include "TimerIntLdd2.h"
#include "clk_cam.h"
#include "si_cam.h"
#include "TU2.h"
#include "Cap1.h"
#include "CaptureLdd1.h"
#include "TU3.h"
#include "PWM1.h"
#include "PwmLdd1.h"
#include "PWM2.h"
#include "PwmLdd2.h"
#include "PWM3.h"
#include "PwmLdd3.h"
#include "TU4.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Events.h"
#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Global variables */
volatile uint8_t SR_reg;               /* Current value of the FAULTMASK register */
volatile uint8_t SR_lock = 0x00U;      /* Lock */


/*
** ===================================================================
**     Method      :  Cpu_Cpu_ivINT_PIT (component MKL25Z128LK4)
**
**     Description :
**         This ISR services the ivINT_PIT interrupt shared by several 
**         components.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_ivINT_PIT)
{
  TU1_Interrupt();                     /* Call the service routine */
  TU2_Interrupt();                     /* Call the service routine */
}

/*
** ===================================================================
**     Method      :  Cpu_INT_NMIInterrupt (component MKL25Z128LK4)
**
**     Description :
**         This ISR services the Non Maskable Interrupt interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_INT_NMIInterrupt)
{
  Cpu_OnNMIINT();
}

/*
** ===================================================================
**     Method      :  Cpu_Cpu_Interrupt (component MKL25Z128LK4)
**
**     Description :
**         This ISR services an unused interrupt/exception vector.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_Interrupt)
{
  /* This code can be changed using the CPU component property "Build Options / Unhandled int code" */
  PE_DEBUGHALT();
}


/*** !!! Here you can place your own code using property "User data declarations" on the build options tab. !!! ***/

/*lint -esym(765,__init_hardware) Disable MISRA rule (8.10) checking for symbols (__init_hardware). The function is linked to the EWL library */
/*lint -esym(765,Cpu_Interrupt) Disable MISRA rule (8.10) checking for symbols (Cpu_Interrupt). */
void __init_hardware(void)
{

  /*** !!! Here you can place your own code before PE initialization using property "User code before PE initialization" on the build options tab. !!! ***/

  /*** ### MKL25Z128VLK4 "Cpu" init code ... ***/
  /*** PE initialization code after reset ***/
  SCB_VTOR = (uint32_t)(&__vect_table); /* Set the interrupt vector table position */
  /* Disable the WDOG module */
  /* SIM_COPC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,COPT=0,COPCLKS=0,COPW=0 */
  SIM_COPC = SIM_COPC_COPT(0x00);

  /* System clock initialization */
  /* SIM_CLKDIV1: OUTDIV1=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,OUTDIV4=3,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SIM_CLKDIV1 = (SIM_CLKDIV1_OUTDIV1(0x00) | SIM_CLKDIV1_OUTDIV4(0x03)); /* Set the system prescalers to safe value */
  /* SIM_SCGC5: PORTE=1,PORTD=1,PORTB=1,PORTA=1 */
  SIM_SCGC5 |= SIM_SCGC5_PORTE_MASK |
               SIM_SCGC5_PORTD_MASK |
               SIM_SCGC5_PORTB_MASK |
               SIM_SCGC5_PORTA_MASK;   /* Enable clock gate for ports to enable pin routing */
  if ((PMC_REGSC & PMC_REGSC_ACKISO_MASK) != 0x0U) {
    /* PMC_REGSC: ACKISO=1 */
    PMC_REGSC |= PMC_REGSC_ACKISO_MASK; /* Release IO pads after wakeup from VLLS mode. */
  }
  /* SIM_CLKDIV1: OUTDIV1=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,OUTDIV4=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SIM_CLKDIV1 = (SIM_CLKDIV1_OUTDIV1(0x00) | SIM_CLKDIV1_OUTDIV4(0x00)); /* Update system prescalers */
  /* SIM_SOPT2: ??=0,PLLFLLSEL=0 */
  SIM_SOPT2 &= (uint32_t)~(uint32_t)((SIM_SOPT2_PLLFLLSEL_MASK | 0x00020000U)); /* Select FLL as a clock source for various peripherals */
  /* SIM_SOPT1: OSC32KSEL=3 */
  SIM_SOPT1 |= SIM_SOPT1_OSC32KSEL(0x03); /* LPO 1kHz oscillator drives 32 kHz clock for various peripherals */
  /* SIM_SOPT2: TPMSRC=1 */
  SIM_SOPT2 = (uint32_t)((SIM_SOPT2 & (uint32_t)~(uint32_t)(
               SIM_SOPT2_TPMSRC(0x02)
              )) | (uint32_t)(
               SIM_SOPT2_TPMSRC(0x01)
              ));                      /* Set the TPM clock */
  /* Switch to FEI Mode */
  /* MCG_C1: CLKS=0,FRDIV=0,IREFS=1,IRCLKEN=1,IREFSTEN=0 */
  MCG_C1 = MCG_C1_CLKS(0x00) |
           MCG_C1_FRDIV(0x00) |
           MCG_C1_IREFS_MASK |
           MCG_C1_IRCLKEN_MASK;
  /* MCG_C2: LOCRE0=0,??=0,RANGE0=0,HGO0=0,EREFS0=0,LP=0,IRCS=0 */
  MCG_C2 = MCG_C2_RANGE0(0x00);
  /* MCG_C4: DMX32=0,DRST_DRS=0 */
  MCG_C4 &= (uint8_t)~(uint8_t)((MCG_C4_DMX32_MASK | MCG_C4_DRST_DRS(0x03)));
  /* OSC0_CR: ERCLKEN=1,??=0,EREFSTEN=0,??=0,SC2P=0,SC4P=0,SC8P=0,SC16P=0 */
  OSC0_CR = OSC_CR_ERCLKEN_MASK;
  /* MCG_C5: ??=0,PLLCLKEN0=0,PLLSTEN0=0,PRDIV0=0 */
  MCG_C5 = MCG_C5_PRDIV0(0x00);
  /* MCG_C6: LOLIE0=0,PLLS=0,CME0=0,VDIV0=0 */
  MCG_C6 = MCG_C6_VDIV0(0x00);
  while((MCG_S & MCG_S_IREFST_MASK) == 0x00U) { /* Check that the source of the FLL reference clock is the internal reference clock. */
  }
  while((MCG_S & 0x0CU) != 0x00U) {    /* Wait until output of the FLL is selected */
  }
  /*** End of PE initialization code after reset ***/

  /*** !!! Here you can place your own code after PE initialization using property "User code after PE initialization" on the build options tab. !!! ***/

}



/*
** ===================================================================
**     Method      :  PE_low_level_init (component MKL25Z128LK4)
**
**     Description :
**         Initializes beans and provides common register initialization. 
**         The method is called automatically as a part of the 
**         application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void PE_low_level_init(void)
{
  #ifdef PEX_RTOS_INIT
    PEX_RTOS_INIT();                   /* Initialization of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
      /* Initialization of the SIM module */
  /* PORTA_PCR4: ISF=0,MUX=7 */
  PORTA_PCR4 = (uint32_t)((PORTA_PCR4 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK
               )) | (uint32_t)(
                PORT_PCR_MUX(0x07)
               ));
        /* Initialization of the RCM module */
  /* RCM_RPFW: RSTFLTSEL=0 */
  RCM_RPFW &= (uint8_t)~(uint8_t)(RCM_RPFW_RSTFLTSEL(0x1F));
  /* RCM_RPFC: RSTFLTSS=0,RSTFLTSRW=0 */
  RCM_RPFC &= (uint8_t)~(uint8_t)(
               RCM_RPFC_RSTFLTSS_MASK |
               RCM_RPFC_RSTFLTSRW(0x03)
              );
        /* Initialization of the FTFL_FlashConfig module */
      /* Initialization of the PMC module */
  /* PMC_LVDSC1: LVDACK=1,LVDIE=0,LVDRE=1,LVDV=0 */
  PMC_LVDSC1 = (uint8_t)((PMC_LVDSC1 & (uint8_t)~(uint8_t)(
                PMC_LVDSC1_LVDIE_MASK |
                PMC_LVDSC1_LVDV(0x03)
               )) | (uint8_t)(
                PMC_LVDSC1_LVDACK_MASK |
                PMC_LVDSC1_LVDRE_MASK
               ));
  /* PMC_LVDSC2: LVWACK=1,LVWIE=0,LVWV=0 */
  PMC_LVDSC2 = (uint8_t)((PMC_LVDSC2 & (uint8_t)~(uint8_t)(
                PMC_LVDSC2_LVWIE_MASK |
                PMC_LVDSC2_LVWV(0x03)
               )) | (uint8_t)(
                PMC_LVDSC2_LVWACK_MASK
               ));
  /* PMC_REGSC: BGEN=0,ACKISO=0,BGBE=0 */
  PMC_REGSC &= (uint8_t)~(uint8_t)(
                PMC_REGSC_BGEN_MASK |
                PMC_REGSC_ACKISO_MASK |
                PMC_REGSC_BGBE_MASK
               );
  /* SMC_PMPROT: ??=0,??=0,AVLP=0,??=0,ALLS=0,??=0,AVLLS=0,??=0 */
  SMC_PMPROT = 0x00U;                  /* Setup Power mode protection register */
  /* Common initialization of the CPU registers */
  /* PORTA_PCR20: ISF=0,MUX=7 */
  PORTA_PCR20 = (uint32_t)((PORTA_PCR20 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x07)
                ));
  /* NVIC_IPR1: PRI_6=0 */
  NVIC_IPR1 &= (uint32_t)~(uint32_t)(NVIC_IP_PRI_6(0xFF));
  /* ### Asynchro serial "AS1" init code ... */
  AS1_Init();
  /* ### ADC "AD1" init code ... */
  AD1_Init();
  /* ### TimerInt_LDD "TimerIntLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)TimerIntLdd1_Init(NULL);
  /* ### TimerInt "TI1" init code ... */
  /* ### TimerInt_LDD "TimerIntLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)TimerIntLdd2_Init(NULL);
  /* ### TimerInt "TI2" init code ... */
  /* ### BitIO_LDD "clk_cam" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)clk_cam_Init(NULL);
  /* ### BitIO_LDD "si_cam" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)si_cam_Init(NULL);
  /* ### Capture_LDD "CaptureLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)CaptureLdd1_Init(NULL);
  /* ### PWM_LDD "PwmLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)PwmLdd1_Init(NULL);
  /* ### PWM_LDD "PwmLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)PwmLdd2_Init(NULL);
  /* ### PWM_LDD "PwmLdd3" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)PwmLdd3_Init(NULL);
  __EI();
}
  /* Flash configuration field */
  __attribute__ ((section (".cfmconfig"))) const uint8_t _cfm[0x10] = {
   /* NV_BACKKEY3: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY2: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY1: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY0: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY7: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY6: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY5: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY4: KEY=0xFF */
    0xFFU,
   /* NV_FPROT3: PROT=0xFF */
    0xFFU,
   /* NV_FPROT2: PROT=0xFF */
    0xFFU,
   /* NV_FPROT1: PROT=0xFF */
    0xFFU,
   /* NV_FPROT0: PROT=0xFF */
    0xFFU,
   /* NV_FSEC: KEYEN=1,MEEN=3,FSLACC=3,SEC=2 */
    0x7EU,
   /* NV_FOPT: ??=1,??=1,FAST_INIT=1,LPBOOT1=1,RESET_PIN_CFG=1,NMI_DIS=1,??=1,LPBOOT0=1 */
    0xFFU,
    0xFFU,
    0xFFU
  };

/* END Cpu. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

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
