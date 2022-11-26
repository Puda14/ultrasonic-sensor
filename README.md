# ultrasonic-sensor
<p align="center">
  <img src="https://github.com/Puda14/ultrasonic-sensor/blob/main/schematics/schematic.jpg"/>
</p>

# auto-LED-basic

A system that determines the light in a room to turn on or off lights. 

# Components

- 1 Arduino Nano
- male to female jumper wires
- 3 resistance 1kΩ
- 3 LED
- 1 ultrasonic sensor
- 1 Circuit board

# Computer setup

- Dowload Arduino IDE on [Arduino IDE](https://www.arduino.cc/en/software)

    ![image](https://user-images.githubusercontent.com/86721208/171421580-ddb0f377-652e-415c-a952-377a8b33848d.png)
- For Arduino IDE with Arduino Nano:
  - Download driver on [Driver](https://resources.stdio.vn/content/article/5ef62159c3c65d69bbced897/resources/res-1597034626-1597034626406.zip) 
  - Select `board Arduino Nano` for `Board` and the corresponding port for `Port` in `Tools` menu.

# Schematics

<p align="center">
  <img src="" />
</p>

# The code

- The system is like car reverse parking sensor installation.
    - There are 3 corresponding alarm levels on 3 LEDs.
    - The closer the object is, the more the number of bright LEDs.
    
# Future development direction

- Connect to wifi.
- Collect data about the server.
- Transfer data to another device
