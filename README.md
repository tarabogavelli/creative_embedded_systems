# creative_embedded_systems

# Generative Art Installation

This repository contains Arduino code written in C++ for a generative art interpretation of the song “She’s a Rainbow” by The Rolling Stones for the ESP32. The code displays the lyrics of the song on the screen of the ESP32 using color, font size, random positioning, and timing to create a visual interpretation of the text.


## Materials
• ESP32 TTGO T-Display <br /> 
• USB-C Cable <br /> 
• 2020 MacBook Pro running Ventura 13.2 <br /> 

## Steps
• Download legacy [Arduino IDE](https://www.arduino.cc/en/software) (Arduino IDE 1.8.X) <br /> 
• Download [driver](https://www.google.com/url?q=https://www.wch.cn/downloads/CH34XSER_MAC_ZIP.html&sa=D&source=docs&ust=1678074010916145&usg=AOvVaw2ycl5cICa0WuuEadTZwqtU) to get port (might require changing system preference setting to allow downloads from web browsers) which will eventually show up as /dev/cu.wchusbserialXXXXXXXX under Tools → select port in the Arduino IDE <br /> 
• Plug in ESP32 to MacBook using USB-C cable <br /> 
• Go to Settings and open the Additional Boards Manager to paste the following URL: https://dl.espressif.com/dl/package_esp32_index.json <br /> 
• Go to Tools → Board → ESP32 Arduino → select TTGO T1 <br /> 
• Go to Tools → Port, select /dev/cu.wchusbserialXXXXXXXX <br /> 
• Find the file User_Setup_Select.h in the Arduino folder on the computer, open the file and ensure that all lines except #include<User_Setups/Setup25_TTGO_T_Display.h> are commented out <br /> 
• Go to Tools → Manage Library and search for tft_eSPI and install it <br /> 
• Open a new file in the Arduino IDE and start writing code! Click the upload button to flash it onto the ESP32 or download this file and upload it to see the generative art <br /> 

![Installation](IMG_9489.jpg)

![installation](https://github.com/tarabogavelli/creative-embedded-systems/blob/IMG_9489.jpg?raw=true)
