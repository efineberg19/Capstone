# Plant MIDI Capstone Project
Beth Fineberg | University of Illinois | Spring 2023

<img src="https://github.com/efineberg19/Capstone/blob/master/CapstonePhoto.jpg" width="600">

## Background
I have created this project to fulfill the Senior Capstone requirement for the B.S. in Computer Science and Music degree at University of Illinois at Urbana-Champaign (UIUC). My goal was to create a device which turns plant biodata into music in the form of MIDI. 

## Features and Details
In order to do this, I purchased and assembled a kit from [Electricity For Progress](https://electricityforprogress.com/biodata-sonification/).
Once assembled, I bought two new sensors for [Ambient Light Sensing](https://www.adafruit.com/product/4162) and [Soil Moisture Sensing](https://www.adafruit.com/product/4026). In this repository, I have added support for these sensors and figured out how to integrate their data into the existing MIDI output.
- Ambient Light Sensor: Controls the octave of the pitch by using the recorded Lux value from the light sensor.
- Soil Humidity Sensor: Sends MIDI control change messages to determine the wetness of reverb based upon capacative soil humidity readings from the sensor. I had to use the Scripter plugin for Logic to map this control change message to the reverb wetness of Chromaverb.

I have also modified how scaling is done from the original repository.

This code is meant to run on an Adafruit ESP32 Feather S3. The kit I built this upon can be found [here](https://electricityforprogress.square.site/product/biodata-sonification-diy-kit/17?cs=true&cst=custom). The repository which I built my new functionality upon can be found [here](https://github.com/electricityforprogress/BiodataFeather).

## Demo and Presentation
A video demo of my in-progress project can be found [here](https://youtu.be/7czpLY3Fris). Slides for my final presentation of this project can be found [here](https://docs.google.com/presentation/d/1xCfUaHlKpWIa-WMKicdJdH81rEBtNW_LqChzotQnMXQ/edit?usp=sharing).

## Acknowledgements
Many thanks to Skot Wiedmann for being my project mentor as well as Samuel Cusumano [@electricityforprogress](https://github.com/electricityforprogress) for providing such high quality documentation and taking the time to answer all of my questions!

## Materials
Here is an itemized list of everything I ended up buying in order to create this:
- [Biodata Sonification DIY Kit](https://electricityforprogress.square.site/product/biodata-sonification-diy-kit/17?cs=true&cst=custom)
- [Adafruit VEML7700 Lux Sensor - I2C Light Sensor - STEMMA QT / Qwiic](https://www.adafruit.com/product/4162) 
- [Adafruit STEMMA Soil Sensor - I2C Capacitive Moisture Sensor - JST PH 2mm](https://www.adafruit.com/product/4026)
- [Electrode Pads](https://a.co/d/9Ywaz5J)
- [Desoldering Wick](https://a.co/d/aPv4H8y)
- [Solder Wire](https://a.co/d/hl0Cjrm)
- Cables
  - [STEMMA QT/QWIIC CABLE 400MM](https://www.digikey.com/en/products/detail/adafruit-industries-llc/5385/16546436?so=80642635&content=productdetail_US&mkt_tok=MDI4LVNYSy01MDcAAAGKqo9c5x-ge8NEBFn4J8b65LyNRYdt_zM8JHFKFtg-EHOjGuM-R6WEtTjppDGGFYRTw4ppZr8CnlWfYAs6gY-5Yda9oZK7gDuEW_ZxR1kb)
  - [4-pin JST PH to JST SH Cable - STEMMA to QT / Qwiic - 200mm long](https://www.adafruit.com/product/4424)
- Houseplant
  - I recommend getting one with regular potting soil. Sphagnum moss and succulent soil were not conducive to the soil humidity sensor.
