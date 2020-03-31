/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.79.0
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA4 aliases
#define channel_ANA4_TRIS                 TRISAbits.TRISA4
#define channel_ANA4_LAT                  LATAbits.LATA4
#define channel_ANA4_PORT                 PORTAbits.RA4
#define channel_ANA4_WPU                  WPUAbits.WPUA4
#define channel_ANA4_OD                   ODCONAbits.ODCA4
#define channel_ANA4_ANS                  ANSELAbits.ANSA4
#define channel_ANA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define channel_ANA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define channel_ANA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define channel_ANA4_GetValue()           PORTAbits.RA4
#define channel_ANA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define channel_ANA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define channel_ANA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define channel_ANA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define channel_ANA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define channel_ANA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define channel_ANA4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define channel_ANA4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set MOTOR_IN2 aliases
#define MOTOR_IN2_TRIS                 TRISBbits.TRISB1
#define MOTOR_IN2_LAT                  LATBbits.LATB1
#define MOTOR_IN2_PORT                 PORTBbits.RB1
#define MOTOR_IN2_WPU                  WPUBbits.WPUB1
#define MOTOR_IN2_OD                   ODCONBbits.ODCB1
#define MOTOR_IN2_ANS                  ANSELBbits.ANSB1
#define MOTOR_IN2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define MOTOR_IN2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define MOTOR_IN2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define MOTOR_IN2_GetValue()           PORTBbits.RB1
#define MOTOR_IN2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define MOTOR_IN2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define MOTOR_IN2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define MOTOR_IN2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define MOTOR_IN2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define MOTOR_IN2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define MOTOR_IN2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define MOTOR_IN2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set MOTOR_IN1 aliases
#define MOTOR_IN1_TRIS                 TRISBbits.TRISB2
#define MOTOR_IN1_LAT                  LATBbits.LATB2
#define MOTOR_IN1_PORT                 PORTBbits.RB2
#define MOTOR_IN1_WPU                  WPUBbits.WPUB2
#define MOTOR_IN1_OD                   ODCONBbits.ODCB2
#define MOTOR_IN1_ANS                  ANSELBbits.ANSB2
#define MOTOR_IN1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define MOTOR_IN1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define MOTOR_IN1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define MOTOR_IN1_GetValue()           PORTBbits.RB2
#define MOTOR_IN1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define MOTOR_IN1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define MOTOR_IN1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define MOTOR_IN1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define MOTOR_IN1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define MOTOR_IN1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define MOTOR_IN1_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define MOTOR_IN1_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set nSLP aliases
#define nSLP_TRIS                 TRISCbits.TRISC2
#define nSLP_LAT                  LATCbits.LATC2
#define nSLP_PORT                 PORTCbits.RC2
#define nSLP_WPU                  WPUCbits.WPUC2
#define nSLP_OD                   ODCONCbits.ODCC2
#define nSLP_ANS                  ANSELCbits.ANSC2
#define nSLP_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define nSLP_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define nSLP_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define nSLP_GetValue()           PORTCbits.RC2
#define nSLP_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define nSLP_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define nSLP_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define nSLP_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define nSLP_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define nSLP_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define nSLP_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define nSLP_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/