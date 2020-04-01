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

#include "mcc_generated_files/mcc.h"

#define ADC_10BIT_MIDDLE    512
#define AMPLIFICATION_K     2
#define PWM_DUTY_MIN        0
#define PWM_DUTY_MAX        1023

/*
                         Main application
 */
void main(void)
{
    int16_t adcVal;
    uint16_t duty;
    
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // read the onboard potentiometer:
        ADCC_GetSingleConversion( channel_ANA4 );
        
        // get the filtered ADC value:
        adcVal = ADCC_GetFilterValue();
        
        // shift from [0,1023] to [-512,511]:
        adcVal -= ADC_10BIT_MIDDLE;
        
        // compute duty as the absolute value of adcVal:
        duty = adcVal < 0 ? (-adcVal) : adcVal;
        
        // amplify x2 and limit to [0,1023]:
        duty *= AMPLIFICATION_K;
        
        // limit to [0, 1023]:
        if(duty < PWM_DUTY_MIN)
        {
            duty = PWM_DUTY_MIN;
        }
        
        if(duty > PWM_DUTY_MAX)
        {
            duty = PWM_DUTY_MAX;
        }
        
        // update PWM duty:
        PWM6_LoadDutyValue( duty );
        
        // update motor direction:
        if(adcVal < 0)
        {
            MOTOR_IN1_LAT = 0;
            MOTOR_IN2_LAT = 1;
        }
        else
        {
            MOTOR_IN1_LAT = 1;
            MOTOR_IN2_LAT = 0;
        }  
    }
}
/**
 End of File
*/