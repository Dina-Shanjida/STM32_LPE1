STM32_LPE1: 
Embedded System Solutions with STM32

Welcome to the STM32_LPE1 project! This repo showcases two embedded system challenges I solved using the STM32 Blue Pill during my lab test.

🛠 Problem 1: 

Button-LED Logic

The task was simple but clever:

1. Both buttons pressed? Red LED on.

2. Neither button pressed? Green LED on.

3. Anything else? LEDs OFF.

This problem helps reinforce button handling and GPIO control.

🎛 Problem 2: 

Potentiometer-Controlled LEDs

Here, I used an analog input to control LED brightness:

1. First half of potentiometer range: Red LED brightness adjusts.

2. Second half of potentiometer range: White LED brightness adjusts.

3. This demonstrates ADC readings and PWM control in action.

💡 Features

1. Button debouncing and GPIO handling.

2. ADC conversion to control PWM brightness.

🚀 Setup

1. Clone the repo.

2. Flash the firmware to your STM32 Blue Pill using STM32CubeIDE or any preferred tool.
