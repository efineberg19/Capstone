# Plant MIDI Capstone Project
![Alt text](https://github.com/efineberg19/Capstone/blob/master/CapstonePhoto.jpg)

I have created this project to fulfill the Senior Capstone requirement for the B.S. in Computer Science and Music degree at University of Illinois at Urbana-Champaign (UIUC). My goal was to create a device which turns plant biodata into music in the form of MIDI. 

In order to do this, I purchased and assembled a kit from [Electricity For Progress](https://electricityforprogress.com/biodata-sonification/).
Once assembled, I bought two new sensors for [Ambient Light Sensing](https://www.adafruit.com/product/4162) and [Soil Moisture Sensing](https://www.adafruit.com/product/4026). In this repository, I have added support for these sensors and figured out how to integrate their data into the existing MIDI output.
- Ambient Light Sensor: Controls the octave of the pitch by using the recorded Lux value from the light sensor.
- Soil Humidity Sensor: Sends MIDI control change messages to determine the wetness of reverb based upon capacative soil humidity readings from the sensor. I had to use the Scripter plugin for Logic to map this control change message to the reverb wetness of Chromaverb.

I have also slightly modified how scaling is done from the original repository.

This code is meant to run on an Adafruit ESP32 Feather S3. The kit I built this upon can be found [here](https://electricityforprogress.square.site/product/biodata-sonification-diy-kit/17?cs=true&cst=custom). The repository which I built my new functionality upon can be found [here](https://github.com/electricityforprogress/BiodataFeather).

Many thanks to Skot Wiedmann for being my project mentor as well as Samuel Cusumano [@electricityforprogress](https://github.com/electricityforprogress) for providing such high quality documentation and taking the time to answer all of my questions!

A demo of my in-progress project can be found [here](https://youtu.be/7czpLY3Fris). Slides for my final presentation of this project can be found [here](https://docs.google.com/presentation/d/1xCfUaHlKpWIa-WMKicdJdH81rEBtNW_LqChzotQnMXQ/edit?usp=sharing).
