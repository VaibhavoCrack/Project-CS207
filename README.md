# Security Access using RFID scanner    V 2.0


This project is based on the security of any given place using a RFID scanner. The initial project made by Aritro Mukherjee was just the basic function that is tap the right card and you get access, tap the wrong card and stay outside. The updated version of the project has 2 LEDs(red and green) and a piezo.When the right card is tapped on RFID, green LED lights up and piezo gives an affirming beep and vice versa. Adding to this, if the wrong card is tapped, the guy who is controlling the scanner will get an email and a notification of his phone about the false attempt. I had to use **Blynk** app for the update.

![alt text][pic3]

[pic3]:https://github.com/VaibhavoCrack/Project-CS207/blob/master/Hardware/Final%20build.jpeg?raw=true
                                  
                                
# Repository Contents


This repository contains the following content :--
 
* **/src** - Scratch code for this project.
* **/hardware** - Final build of hardware of the project.
* **/Final build** - The final code for this project. 
* **/libraries** - There are couple of libraries used in this project.
* **/img** - The images of schematics and 3D design of the project.
* **/LICENSE** - The license file.
* **/README.md** - A short summary of this repository.


# Requirements and Materials

The following new libraries were used in this project :
* **MFRC-522 :** This library is used to get access to the RFID sensor. 
* **Blynk :** This library is used to use all the functions used to control Blynk.
* **ESP-8266 :** As ESP works as a Uno shield, this library is used to access all functions controlling ESP.

Materials Used :
* 1x Breadboard
* Jumper wires
* 1x RFID RC-522
* 1x ESP 8266
* 2x LEDs
* 1x Piezo buzzer

# Design and Schematics

This is a 3D design for this project. It is also included in images folder.

![alt text][pic1]

[pic1]: https://github.com/VaibhavoCrack/Project-CS207/blob/master/Img/Project%203D_bb.jpg?raw=true

Here is the schematics of the following project.

![alt text][pic2]

[pic2]: https://github.com/VaibhavoCrack/Project-CS207/blob/master/Img/Project%203D_schem.jpg?raw=true


# Usage
This project can enhance the security of your chosen place. RFID reader is very precise and so any difference in signals wont allow you to get access to that place.This can be used in highly secretive and confidential area. 


# Credits

* **Trevor Tomesh** - For repository example and for teaching too .
