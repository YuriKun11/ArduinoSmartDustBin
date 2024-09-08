# Arduino Smart Dustbin

## Description
This project is an Arduino-based smart dustbin that automatically opens its lid when a person approaches it. It utilizes an ultrasonic sensor to detect nearby objects and a servo motor to control the lid opening mechanism. The design incorporates recycled materials such as cardboard and a storage box to create an environmentally friendly solution.

## Components Used
- #Arduino UNO R3 Controller Board
- #Expanding Board (for easy prototyping and connecting components)
- #Servo Motor (to control the lid opening and closing)
- #Ultrasonic Sensor (for detecting the presence of objects)
- Recycled materials: Cardboard and storage box (for the physical structure of the dustbin)

## How It Works
The ultrasonic sensor continuously sends out high-frequency sound waves and measures the time it takes for the waves to bounce back. By calculating the time taken and the speed of sound, it determines the distance between itself and any object in front of it.

The Arduino UNO R3 processes the data received from the ultrasonic sensor. When it detects an object within a certain threshold distance, it triggers the servo motor to open the lid of the dustbin. After a certain delay or when the object moves away, the lid is closed again.

The expanding board provides a convenient platform for connecting and prototyping the various components of the project.

## Installation and Setup
1. Connect the ultrasonic sensor to the Arduino UNO R3 board according to the pinout.
2. Connect the servo motor to the Arduino UNO R3 board. Ensure the signal wire of the servo is connected to the appropriate pin on the Arduino.
3. Place the ultrasonic sensor at the desired position on the dustbin, preferably at the front-facing side.
4. Mount the servo motor in a way that it can control the lid of the dustbin.
5. Assemble the physical structure of the dustbin using recycled materials such as cardboard and a storage box.
6. Upload the Arduino sketch provided in the repository to the Arduino board.

## Usage
Once the setup is complete, the smart dustbin is ready for use. Simply approach the dustbin with any object, and the lid will automatically open. After a certain delay or when the object moves away, the lid will close again.
