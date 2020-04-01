<div id="readme" class="Box-body readme blob js-code-block-container">
 <article class="markdown-body entry-content p-3 p-md-6" itemprop="text"><p><a href="https://www.microchip.com" rel="nofollow"><img src="images/MicrochipLogo.png" alt="MCHP" style="max-width:100%;"></a></p>

# Control DC motor using DC Motor 2 Click

## Objective:
Use the MPLAB® Xpress Evaluation Board and MCC to read the onboard potentiometer using the ADCC and generate a PWM signal to drive a DC motor in both directions.

</br></br>

<img src="images/dc-motor.jpg" alt="Hardware Setup"/>

## Resources:
- MPLAB® X IDE 5.30 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.10 or newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 3.95.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Xpress Evaluation Board [(DM164140)](https://www.microchip.com/Developmenttools/ProductDetails/PartNo/DM164140)
- DC Motor 2 Click [(dc-motor-2-click)](https://www.mikroe.com/dc-motor-2-click)
- DC Motor
- Power supply for the DC motor

## Description:

- Xpress board (with PIC16F18855) is used as it has got Drag-and-Drop Programming.
- A PWM peripheral of the PIC MCU is used for generating the PWM signal for the motor.
- The onboard potentiometer is used to adjust the duty cycle of the PWM, and the direction of rotation.
- The potentiometer is read using the ADCC set in Low Pass Filter mode, in order to reduce the noise.
- DC MOTOR 2 Click board from MikroElektronika™ is used for driving the motor in both directions.

## MCC Settings:

### System Module Settings:
- Oscillator Select: HFINTOSC
- HF Internal Clock: 32_MHz
- Clock Divider: 1
- Watchdog Timer Enable: WDT Disabled, SWDTEN is ignored

### ADCC Settings:
#### Easy Setup:
- Enable ACD : checked
- Operating: Low_pass_filter_mode
- Clock Source: FOSC/ADCLK
- Clock: FOSC/32

#### Registers:
- ADRPT: 0x8
- ADCON2: 0x34
    - ADACLR: disabled
    - ADCRS: 0x3
    - ADMD: Low_pass_filtermode
    - ADPSIS: ADRES

### TMR2 Settings:
- Enable Timer: checked
- Clock Source: FOSC/4
- Postscaler: 1:1
- Prescaler: 1:1
- Polarity: Rising Edge

### PWM6 Settings:
- Enable PWM: checked
- Select a Timer: Timer2
- Duty Cycle: 0.0%
- PWM Polarity: active_hi

### Pin Manager Settings:
The pins are configured as follows:

- ADCC input on RA4, named channel_ANA4
- PWM6 output on RC7
- GPIO output on RB1, named MOTOR_IN2
- GPIO output on RB2, named MOTOR_IN1
- GPIO output on RC2, named nSLP, configured to Start High.

## Demo:

### Setup:
- Connect the DC motor to the motor pins of the DC Motor 2 ClickBoard
- Connect the DC Power Supply to the PGND and VIN pins of the DC Motor 2 ClickBoard
- Plug the DC Motor 2 ClickBoard into the mikroBUS socket on the MPLAB® Xpress Evaluation Board
- Move the potentiometer to its middle position

### Operation:
- After making the above hardware connections, connect the Xpress board to PC using the USB cable.
- Build demo firmware and load the generated hex file onto the PIC16F18855 MCU.
- Rotate the potentiometer to adjust the DC motor speed and direction
