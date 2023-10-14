# gamecontroller

This is a game controller built during Hack the Valley 8 as part of the game we built, [link](https://github.com/fiona-cai/HTV2023). It uses an Arduino UNO (and UNO Prototype Shield), joystick, and two tactile pushbuttons. This results in a joystick input, the joystick switch, and the two pushbuttons as possible inputs.

The shell was designed in SolidWorks and 3D printed in AMZ3D red PLA on an Ender 3 V2. An exposed-back design was chosen due to the ease of making modifications. The UNO and joystick module were mounted using M3x16mm bolts and nuts. The mounts for the pushbuttons were drilled out due to insufficient clearances and the locking tabs were filed down to fit. The pushbuttons use a mix of available pull-down resistors (10k and 5.1k ohm). All connections were soldered, wrapped in heatshrink, and secured in place with hot glue.

Unlike the Arduino Pro Micro or Leonardo, UNO cannot function as an HID without the use of firmware hacks like UnoJoy ([link](https://github.com/AlanChatham/UnoJoy/tree/master)). However, the need to flash back and forth between Arduino and joystick modes each time any modifications needed to be made was deemed to be too inconvenient. Instead, I selected the approach of reading the Arduino's serial output and converting it into keyboard commands using PyAutoGUI.

Great thanks to [link](https://www.instructables.com/Joystick-Controlled-PC-Mouse-Using-Arduino-UNO/), who's code served as the basis for the firmware of this project.
