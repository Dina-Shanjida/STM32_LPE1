STM32_LPE1: Embedded System Solutions with STM32
Welcome to the STM32_LPE1 project! This repo showcases two embedded system challenges I solved using the STM32 Blue Pill during my lab test.

🛠 Problem 1: 
Button-LED Logic
The task was simple but clever:

Both buttons pressed? Red LED on.

Neither button pressed? Green LED on.

Anything else? LEDs OFF.

This problem helps reinforce button handling and GPIO control.

🎛 Problem 2: 
Potentiometer-Controlled LEDs
Here, I used an analog input to control LED brightness:

First half of potentiometer range: Red LED brightness adjusts.

Second half of potentiometer range: White LED brightness adjusts.

This demonstrates ADC readings and PWM control in action.

💡 Features
Button debouncing and GPIO handling.

ADC conversion to control PWM brightness.

🚀 Setup
Clone the repo.

Flash the firmware to your STM32 Blue Pill using STM32CubeIDE or any preferred tool.
