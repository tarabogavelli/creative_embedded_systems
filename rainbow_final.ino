/*
   FINAL
*/

// New background colour
#define TFT_LIGHTBLUE 0x3479ce

// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 1000

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

unsigned long targetTime = 0; // Used for testing draw times
byte red = 31;
unsigned int colour = red << 11;
byte green = 0;
byte blue = 0;
byte state = 0;

void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);

}

void loop() {
  // put your main code here, to run repeatedly:

    targetTime = millis();
  
  
    tft.setTextSize(1);
    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_RED);
    delay(WAIT);
    tft.drawString("She comes in colours everywhere", 0, 0, 2);

    tft.setTextColor(TFT_ORANGE);
    delay(WAIT);
    tft.drawString("She combs her hair", 0, 22, 2);

    tft.setTextColor(TFT_YELLOW);
    delay(WAIT);
    tft.drawString("She's like a rainbow", 0, 44, 2);
    delay(WAIT);

    tft.setTextColor(TFT_GREEN);
    delay(WAIT);
    tft.drawString("Coming, colours in the air", 0, 66, 2);

    tft.setTextColor(TFT_BLUE);
    delay(WAIT);
    tft.drawString("Oh, everywhere", 0, 88, 2);

    tft.setTextColor(TFT_MAGENTA);
    delay(WAIT);
    tft.drawString("She comes in colours", 0, 110, 2);


    delay(WAIT);
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_RED);
    delay(WAIT);
    tft.drawString("She comes in colours everywhere", 0, 0, 2);

    tft.setTextColor(TFT_ORANGE);
    delay(WAIT);
    tft.drawString("She combs her hair", 0, 22, 2);

    tft.setTextColor(TFT_YELLOW);
    delay(WAIT);
    tft.drawString("She's like a rainbow", 0, 44, 2);
    delay(WAIT);

    tft.setTextColor(TFT_GREEN);
    delay(WAIT);
    tft.drawString("Coming, colours in the air", 0, 66, 2);

    tft.setTextColor(TFT_BLUE);
    delay(WAIT);
    tft.drawString("Oh, everywhere", 0, 88, 2);

    tft.setTextColor(TFT_MAGENTA);
    delay(WAIT);
    tft.drawString("She comes in colours", 0, 110, 2);


    delay(WAIT);
    delay(WAIT);

    // Colour changing state machine
    for (int i = 0; i < 250; i++) {
      tft.drawFastVLine(i, 0, tft.height(), colour);
      switch (state) {
        case 0:
          green += 2;
          if (green == 64) {
            green = 63;
            state = 1;
          }
          break;
        case 1:
          red--;
          if (red == 255) {
            red = 0;
            state = 2;
          }
          break;
        case 2:
          blue ++;
          if (blue == 32) {
            blue = 31;
            state = 3;
          }
          break;
        case 3:
          green -= 2;
          if (green == 255) {
            green = 0;
            state = 4;
          }
          break;
        case 4:
          red ++;
          if (red == 32) {
            red = 31;
            state = 5;
          }
          break;
        case 5:
          blue --;
          if (blue == 255) {
            blue = 0;
            state = 0;
          }
          break;
      }
      colour = red << 11 | green << 5 | blue;
    }
    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(2);
    tft.drawString("Have you", (rand()%80)+20, (rand()%10)+0, 2);
    delay(200);
    tft.drawString("seen her", (rand()%80)+20, (rand()%30)+20, 2);
    delay(200);
    tft.drawString("dressed in", (rand()%80)+20, (rand()%60)+40, 2);



    delay(WAIT);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_BLUE);
    tft.setTextSize(5);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("BLUE", (rand()%100)+20, (rand()%70)+10, 2);
    // rand() % (max_number + 1 - minimum_number) + minimum_number

    tft.fillScreen(TFT_BLACK);


    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE);
    tft.drawString("See the sky in front of",20,50,2);
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(5);
    tft.drawString("YOU", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("YOU", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("YOU", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("YOU", (rand()%100)+20, (rand()%70)+10, 2);
    delay(700);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("YOU", (rand()%100)+20, (rand()%70)+10, 2);
    delay(WAIT);

    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(1);
    tft.drawString("And her face is like a sail", 5, 20, 2);
    delay(WAIT);
    tft.drawString("Speck of white so fair and pale", 5, 50, 2);
    delay(WAIT);
    tft.drawString("Have you seen a lady fairer?", 5, 80, 2);
    delay(WAIT);

    tft.setTextSize(1);
    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_RED);
    delay(WAIT);
    tft.drawString("She comes in colours everywhere", 0, 0, 2);

    tft.setTextColor(TFT_ORANGE);
    delay(WAIT);
    tft.drawString("She combs her hair", 0, 22, 2);

    tft.setTextColor(TFT_YELLOW);
    delay(WAIT);
    tft.drawString("She's like a rainbow", 0, 44, 2);
    delay(WAIT);

    tft.setTextColor(TFT_GREEN);
    delay(WAIT);
    tft.drawString("Coming, colours in the air", 0, 66, 2);

    tft.setTextColor(TFT_BLUE);
    delay(WAIT);
    tft.drawString("Oh, everywhere", 0, 88, 2);

    tft.setTextColor(TFT_MAGENTA);
    delay(WAIT);
    tft.drawString("She comes in colours", 0, 110, 2);


    delay(WAIT);
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);

    // have you seen her all in gold
    // like a queen in days of old
    // she shoots her colours all around
    // like a sunset going down
    // have you seen a lady fairer

    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE);
    tft.drawString("Have you seen her all in",20,50,2);
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(5);
    tft.setTextColor(TFT_YELLOW);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("GOLD", (rand()%100), (rand()%70)+10, 2);
    delay(WAIT);

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(1);
    tft.drawString("Like a queen in days of old", 5, 20, 2);
    delay(WAIT);
    tft.drawString("She shoots her colours all around", 5, 50, 2);
    delay(WAIT);
    tft.drawString("Like a sunset going down", 5, 80, 2);
    delay(WAIT);
    tft.drawString("Have you seen a lady fairer?", 5, 110, 2);
    delay(WAIT);

    tft.setTextSize(1);
    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_RED);
    delay(WAIT);
    tft.drawString("She comes in colours everywhere", 0, 0, 2);

    tft.setTextColor(TFT_ORANGE);
    delay(WAIT);
    tft.drawString("She combs her hair", 0, 22, 2);

    tft.setTextColor(TFT_YELLOW);
    delay(WAIT);
    tft.drawString("She's like a rainbow", 0, 44, 2);
    delay(WAIT);

    tft.setTextColor(TFT_GREEN);
    delay(WAIT);
    tft.drawString("Coming, colours in the air", 0, 66, 2);

    tft.setTextColor(TFT_BLUE);
    delay(WAIT);
    tft.drawString("Oh, everywhere", 0, 88, 2);

    tft.setTextColor(TFT_MAGENTA);
    delay(WAIT);
    tft.drawString("She comes in colours", 0, 110, 2);


    delay(WAIT);
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);

    tft.setTextSize(5);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_RED);
    tft.drawString("She's", (rand()%100), (rand()%70)+10, 2);
    delay(200);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_ORANGE);
    tft.drawString("like", (rand()%100), (rand()%70)+10, 2);
    delay(200);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_YELLOW);
    tft.drawString("a", (rand()%100), (rand()%70)+10, 2);
    delay(200);
    
    tft.fillScreen(TFT_BLACK);
    tft.setTextSize(4);
    delay(300);
    tft.setTextColor(TFT_RED);
    tft.drawString("R", 0, 40, 2);
    delay(300);
    tft.setTextColor(TFT_ORANGE);
    tft.drawString("A", 30, 40, 2);
    delay(300);
    tft.setTextColor(TFT_YELLOW);
    tft.drawString("I", 70, 40, 2);
    delay(300);
    tft.setTextColor(TFT_GREEN);
    tft.drawString("N", 95, 40, 2);
    delay(300);
    tft.setTextColor(TFT_BLUE);
    tft.drawString("B", 130, 40, 2);
    delay(300);
    tft.setTextColor(TFT_PURPLE);
    tft.drawString("O", 160, 40, 2);
     delay(300);
    tft.setTextColor(TFT_MAGENTA);
    tft.drawString("W", 200, 40, 2);
    delay(WAIT);
    delay(WAIT);
    delay(WAIT);

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_GREEN);
    tft.drawString("Coming,", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_BLUE);
    tft.drawString("colours", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_MAGENTA);
    tft.drawString("in", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_RED);
    tft.drawString("the", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_ORANGE);
    tft.drawString("air", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    
    tft.fillScreen(TFT_BLACK);
    delay(WAIT);
    tft.setTextColor(TFT_YELLOW);
    tft.drawString("Oh,", (rand()%100), (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_GREEN);
    tft.drawString("everywhere", 0, (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    delay(WAIT);
    tft.setTextColor(TFT_BLUE);
    tft.drawString("She", (rand()%100)+20, (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_MAGENTA);
    tft.drawString("comes", (rand()%100)+20, (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_RED);
    tft.drawString("in", (rand()%100)+20, (rand()%70)+10, 2);
    delay(300);
    tft.fillScreen(TFT_BLACK);

    tft.setTextSize(4);
    delay(300);
    tft.setTextColor(TFT_RED);
    tft.drawString("C", 0, 40, 2);
    delay(300);
    tft.setTextColor(TFT_ORANGE);
    tft.drawString("O", 30, 40, 2);
    delay(300);
    tft.setTextColor(TFT_YELLOW);
    tft.drawString("L", 70, 40, 2);
    delay(300);
    tft.setTextColor(TFT_GREEN);
    tft.drawString("O", 95, 40, 2);
    delay(300);
    tft.setTextColor(TFT_BLUE);
    tft.drawString("U", 130, 40, 2);
    delay(300);
    tft.setTextColor(TFT_PURPLE);
    tft.drawString("R", 160, 40, 2);
     delay(300);
    tft.setTextColor(TFT_MAGENTA);
    tft.drawString("S", 200, 40, 2);
    delay(WAIT);
    delay(WAIT);
    delay(WAIT);
    
  
  
  
  








}
