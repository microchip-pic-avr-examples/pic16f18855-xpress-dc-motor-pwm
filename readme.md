<div id="readme" class="Box-body readme blob js-code-block-container">
 <article class="markdown-body entry-content p-3 p-md-6" itemprop="text"><p><a href="https://www.microchip.com" rel="nofollow"><img src="images/MicrochipLogo.png" alt="MCHP" style="max-width:100%;"></a></p>

# Control DC motor using DC Motor 2 Click

## Objective:
Use the MPLAB® Xpress Evaluation Board and MCC to read the onboard potentiometer using the ADCC and generate a PWM signal to drive a DC motor in both directions.

<img src="images/dc-motor.jpg" alt="Hardware Setup"/>

## Resources:
- MPLAB® X IDE 5.30 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.10 or newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 3.95.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Xpress Evaluation Board [(DM164140)](https://www.microchip.com/Developmenttools/ProductDetails/PartNo/DM164140)
- DC Motor 2 Click [(dc-motor-2-click)](https://www.mikroe.com/dc-motor-2-click)

## Hardware Configuration:

- ADCC to read the potentiometer
- TMR2 is used as clock source for the PWM signal
- PWM6 is used to generate signal for the motor

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
