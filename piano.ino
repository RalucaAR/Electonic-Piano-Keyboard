#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int LCDswitchPin = 7; // define menu/LCD switch name
int LCDswitchState = 0; // set menu/LCD switch state to off/low
int prevLCDswitchState = 0;
int blueLED = 6;
int LCDswitchCounter = 0;   // counter for the number of menu button presses  
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978  

// Music Note Keys - Set frequency values
  int notes[] = {262, 294, 330, 349, 392, 440, 494}; // Set notes C, D, E, F, G, A, B
  
  void Song1()  
  {
    lcd.clear();
    int melody[] =  // notes in the melody
    { 
      NOTE_E7, NOTE_E7, 0, NOTE_E7,
      0, NOTE_C7, NOTE_E7, 0,
      NOTE_G7, 0, 0,  0,
      NOTE_G6, 0, 0, 0,
     
      NOTE_C7, 0, 0, NOTE_G6,
      0, 0, NOTE_E6, 0,
      0, NOTE_A6, 0, NOTE_B6,
      0, NOTE_AS6, NOTE_A6, 0,
     
      NOTE_G6, NOTE_E7, NOTE_G7,
      NOTE_A7, 0, NOTE_F7, NOTE_G7,
      0, NOTE_E7, 0, NOTE_C7,
      NOTE_D7, NOTE_B6, 0, 0,
     
      NOTE_C7, 0, 0, NOTE_G6,
      0, 0, NOTE_E6, 0,
      0, NOTE_A6, 0, NOTE_B6,
      0, NOTE_AS6, NOTE_A6, 0,
     
      NOTE_G6, NOTE_E7, NOTE_G7,
      NOTE_A7, 0, NOTE_F7, NOTE_G7,
      0, NOTE_E7, 0, NOTE_C7,
      NOTE_D7, NOTE_B6, 0, 0
    };


    int noteDurations[] = // note durations: the numbers are the numbers of the notes
    {
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
     
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
     
      9, 9, 9,
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
     
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
     
      9, 9, 9,
      12, 12, 12, 12,
      12, 12, 12, 12,
      12, 12, 12, 12,
    };
  
    lcd.setCursor(1, 0);
    lcd.print("Now playing...");
    lcd.setCursor(0, 1);
    lcd.print("MARIO THEME SONG");
    int sizeMelody = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < sizeMelody; thisNote++) 
    {
      int noteDuration = 1000 / noteDurations[thisNote]; // to calculate the note duration, take one second divided by the note type.
      tone(8, melody[thisNote], noteDuration);  
      int pauseBetweenNotes = noteDuration * 1.30;// to distinguish the notes, set a minimum time between them (the note's duration + 30% seems to work well)
      delay(pauseBetweenNotes);
      tone(8, 0, noteDuration); // stop the tone playing:
     }
   Song1title();
    } 

  void Song2()  
  {
   lcd.clear();
   // notes in the melody:
   int melody[] = 
   {
      NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
      NOTE_AS3, NOTE_AS4, 0,
      0,
      NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
      NOTE_AS3, NOTE_AS4, 0,
      0,
      NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
      NOTE_DS3, NOTE_DS4, 0,
      0,
      NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
      NOTE_DS3, NOTE_DS4, 0,
      0, NOTE_DS4, NOTE_CS4, NOTE_D4,
      NOTE_CS4, NOTE_DS4,
      NOTE_DS4, NOTE_GS3,
      NOTE_G3, NOTE_CS4,
      NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
      NOTE_GS4, NOTE_DS4, NOTE_B3,
      NOTE_AS3, NOTE_A3, NOTE_GS3,
      0, 0, 0
    };

   
  int noteDurations[] = // note durations: the numbers are the numbers of the notes
  {
      12, 12, 12, 12,
      12, 12, 6,
      3,
      12, 12, 12, 12,
      12, 12, 6,
      3,
      12, 12, 12, 12,
      12, 12, 6,
      3,
      12, 12, 12, 12,
      12, 12, 6,
      6, 18, 18, 18,
      6, 6,
      6, 6,
      6, 6,
      18, 18, 18, 18, 18, 18,
      10, 10, 10,
      10, 10, 10,
      3, 3, 3
    };
    lcd.setCursor(1, 0);
    lcd.print("Now playing...");
    lcd.setCursor(0, 1);
    lcd.print("MARIO UNDERWORLD");
    
    int sizeMelody = sizeof(melody) / sizeof(int); // number of elements for melody
    for (int thisNote = 0; thisNote < sizeMelody; thisNote++) 
    {
      int noteDuration = 1000 / noteDurations[thisNote]; // to calculate the note duration, take one second divided by the note type.
      tone(8, melody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30; // to distinguish the notes, set a minimum time between them ( the note's duration + 30% seems to work well)
      delay(pauseBetweenNotes);
      tone(8, 0, noteDuration); // stop the tone playing:
 
    }
    
    Song2title();
  } 

  void Song3()  
  {
  
  lcd.clear();



  int melody[] =  // notes in the melody:
  {
    NOTE_C2, NOTE_F3, NOTE_C3, NOTE_A2, NOTE_A2,
    NOTE_C3, NOTE_F3, NOTE_C3,
    NOTE_C3, NOTE_F3, NOTE_C3, NOTE_F3,
    NOTE_AS3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_D3, NOTE_CS3,
    NOTE_C2, NOTE_F3, NOTE_C3, NOTE_A2, NOTE_A2, 
    NOTE_C3, NOTE_F3, NOTE_C3,
    NOTE_AS3, 0, NOTE_G3, NOTE_F3,
    NOTE_E3, NOTE_D3, NOTE_CS3, NOTE_C3
    };

  int noteDurations[] =  // note durations: the numbers are the numbers of the notes
  {
    4,    4,    4,    8,   8,
    4,    4,          2,
    4,    4,    4,    4,
    3,    8,    8,    8,    8,   8,
    4,    4,    4,    8,    8, // repeat line 1 and 2
    4,    4,          2,
    4,    8,    8,    4,    4,
    4,    4,    4,    4,
    0
   };
   lcd.setCursor(1, 0);
   lcd.print("Now playing...");
   lcd.setCursor(0, 1);
   lcd.print("    JEOPARDY");
   for (int thisNote = 0; noteDurations[thisNote] != 0; thisNote++)
   {

    int noteDuration = 2000/noteDurations[thisNote]; // to calculate the note duration, take one second divided by the note type.
    tone(8, melody[thisNote],noteDuration * 0.9);
    //int pauseBetweenNotes = noteDuration * 1.30; // to distinguish the notes, set a minimum time between them ( the note's duration + 30% seems to work well)
    ///delay(pauseBetweenNotes);
    delay(noteDuration);
  }
  Song3title();
  } 

  void Song4()  
  {
  lcd.clear();

  int melody[] =  // notes in the melody:
  {
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
  };


  int noteDurations[] =  // note durations: the numbers are the numbers of the notes
  {
   4, 8, 8, 4, 4, 4, 4, 4
  };
  lcd.setCursor(1, 0);
  lcd.print("Now playing...");
  lcd.setCursor(0, 1);
  lcd.print("  OUR SONG");
  
  int thisNote = 0;
  for (int thisNote = 0; thisNote < 8; thisNote++) 
  { 

     int noteDuration = 1000 / noteDurations[thisNote];  // to calculate the note duration, take one second divided by the note type.
     tone(8, melody[thisNote], noteDuration);
     // to distinguish the notes, set a minimum time between them (the note's duration + 30% seems to work well)
     int pauseBetweenNotes = noteDuration * 1.30;
     delay(pauseBetweenNotes);
     noTone(8); // stop the tone playing:
   } 
  Song4title();
  } 

  void Song5()  
  {
  
  lcd.clear();
  int melody[] = // notes in the melody
  {
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
  };
   int noteDurations[] = // note durations: the numbers are the numbers of the notes
   {
      4, 8, 8, 4, 4, 4, 4, 4
    };
   lcd.setCursor(1, 0);
   lcd.print("Now playing...");
   lcd.setCursor(0, 1);
   lcd.print("  SONG 5 TITLE");
   
   int thisNote = 0;
   for (int thisNote = 0; thisNote < 8; thisNote++)
   { 
        int noteDuration = 1000 / noteDurations[thisNote];  // to calculate the note duration, take one second divided by the note type.
        tone(8, melody[thisNote], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30; // to distinguish the notes, set a minimum time between them( the note's duration + 30% seems to work well)
        delay(pauseBetweenNotes);
        noTone(8); // stop the tone playing:
    } 

  Song5title();
  } 

  void setup() 
  {
    
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(LCDswitchPin, INPUT);
    pinMode(blueLED, OUTPUT);
    digitalWrite(blueLED, LOW); // LED stays off while piano keys are on
    
  } 

void loop() 
{
  LCDswitchState = digitalRead(LCDswitchPin);
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  lcd.noDisplay();
  digitalWrite(blueLED, LOW); // Turn LED back off every time main loop starts

  if (LCDswitchState == HIGH)  // start LCD when menu button is pushed
  {
    digitalWrite(blueLED, HIGH); // Turn LED on to show piano keys are disabled and device is in "menu mode"
    lcd.display();
    lcd.clear();
    LCDstart();
  }  
  
  if(keyVal == 1023)  // frequency tone loop
  {
    tone(8, notes[0]); // C
  } 
    else if(keyVal >= 990 & keyVal <=1010)  
    {
       tone(8, notes[1]); // D
    }
    else if(keyVal >= 960 && keyVal <= 980)  
    {
       tone(8, notes[2]); // E
    } 
    else if(keyVal >= 900 && keyVal <= 945) 
    {
        tone(8, notes[3]); // F
    } 
    else if(keyVal >= 650 && keyVal <= 710)  
    {
      tone(8, notes[4]); // G
    } 
    else if(keyVal >= 500 && keyVal <= 550)  
    {
       tone(8, notes[5]); // A
    } 
    else if(keyVal >= 5 && keyVal <= 10)  
    {
       tone(8, notes[6]); // B
    }
    else if(keyVal <= 1) 
    { 
          noTone(8); // if no switch is pressed, do not play tone
    } 

} 

  void LCDstart()  
  {
   b  
    int keyVal = analogRead(A0);  
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button
    while (LCDswitchState == LOW)  // continue loop while menu button isn't pressed
    { 
        LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button every time loop starts
        
       
        if (LCDswitchState == HIGH)  //song 1 loop
        { 
          LCDswitchCounter++; // set button count to 1
          Serial.print("number of button pushes:  ");
          Serial.println(LCDswitchCounter);
          delay(300); // min. time until counts adds 1 more
          Song1title();
          lcd.clear();
          break;
          }
        else   
        {  // if menu button is not pressed, then...
          LCDswitchCounter=0; // set menu button count to 0
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("WHICH SONG WOULD");
          lcd.setCursor(0, 1);
          lcd.print("YOU LIKE TO PLAY");
          delay(50); // return to main 
          }
     } 
  } 
  
void Song1title()  
{
  int keyVal = analogRead(A0);
  LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again
  while (LCDswitchState == LOW) // continue loop while menu button isn't pressed   
  { 
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again 

     
      if (LCDswitchState == HIGH) // song 2 starts 
      { 
        LCDswitchCounter++; // set button count to 2
        Serial.print("number of button pushes:  ");
        Serial.println(LCDswitchCounter);
        delay(300); // min. time until counts adds 1 more
        Song2title();
        lcd.clear();
        break;
       } 
      else  
      { // if menu button is not pressed   
        int keyVal = analogRead(A0);
        Serial.println(keyVal); 
         if(keyVal >= 2)  
         {
           digitalWrite(blueLED, LOW);
           Song1();
           break;
         }
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("SUPER MARIO BROS");
      lcd.setCursor(0, 1);
      lcd.print("   THEME SONG");
      delay(50);
        }
    }       
} 

 
void Song2title()  
{
  int keyVal = analogRead(A0);
  LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again
  while (LCDswitchState == LOW) // continue loop while menu button isn't pressed   
  { 
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again 
    if (LCDswitchState == HIGH)  // start song 3 loop
    { 
      LCDswitchCounter++; // set button count to 3
      Serial.print("number of button pushes:  ");
      Serial.println(LCDswitchCounter);
      delay(300); // min. time until counts adds 1 more
      Song3title();
      lcd.clear();
      break;
     }
    else  
    { // if menu button is not pressed
        int keyVal = analogRead(A0);
        Serial.println(keyVal); 
         if(keyVal >= 2)  
         {
           digitalWrite(blueLED, LOW);
           Song2();
           break;
          } 
     lcd.clear();
     lcd.setCursor(0, 0);
     lcd.print("SUPER MARIO BROS");
     lcd.setCursor(0, 1);
     lcd.print("   UNDERWORLD");
     delay(50);
    }
  }      
 } 

 
void Song3title()  //song 3 starts here
{
  int keyVal = analogRead(A0);
  LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again
  while (LCDswitchState == LOW)  
  { 
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again 
    if (LCDswitchState == HIGH)  //start song 4 loop
      { 
        LCDswitchCounter++; // set button count to 4
        Serial.print("number of button pushes:  ");
        Serial.println(LCDswitchCounter);
        delay(300); // min. time until counts adds 1 more
        Song4title();
        lcd.clear();
        break;
      }
      else  
      { // if menu button is not pressed
        int keyVal = analogRead(A0);
        Serial.println(keyVal); 
         if(keyVal >= 2)  
         {
           digitalWrite(blueLED, LOW);
           Song3();
           break;
          } 
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("    JEOPARDY");
        lcd.setCursor(0, 1);
        lcd.print("   THEME SONG");
        delay(50);
      }   
   }        
} 

   
  void Song4title()  //song 4 loop start here
  {
    int keyVal = analogRead(A0);
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again
    while (LCDswitchState == LOW)  
    { // continue loop while menu button isn't pressed  
      LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again 
        if (LCDswitchState == HIGH)  //start song 5 
        { // if menu button is pressed, then...
          LCDswitchCounter++; // set button count to 5
          Serial.print("number of button pushes:  ");
          Serial.println(LCDswitchCounter);
          delay(300); // min. time until counts adds 1 more
          Song5title();
          lcd.clear();
          break;
         }
        else  
        { // if menu button is not pressed
          int keyVal = analogRead(A0);
          Serial.println(keyVal); 
           if(keyVal >= 2)  
           {
             digitalWrite(blueLED, LOW);
             Song4();
             break;
           }
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("     SONG 4");
          lcd.setCursor(0, 1);
          lcd.print("   TITLE HERE");
          delay(50);
          }
     }      
  } 
  
  void Song5title()  //song 5 loop starts here
  {
    int keyVal = analogRead(A0);
    LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again
    while (LCDswitchState == LOW)  
    { // continue loop while menu button isn't pressed  
      LCDswitchState = digitalRead(LCDswitchPin); // check state of menu button again 
        if (LCDswitchState == HIGH)  //start song 4 loop
        { // if menu button is pressed, then...
          LCDswitchCounter=0; // set button count to 0
          Serial.print("number of button pushes:  ");
          Serial.println(LCDswitchCounter);
          delay(300); // min. time until counts adds 1 more
          lcd.clear();
          }
        else  
        { // if menu button is not pressed
          int keyVal = analogRead(A0);
          Serial.println(keyVal); 
          if(keyVal >= 2)  
          {
             digitalWrite(blueLED, LOW);
             Song5();
             break;
           }  
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("     SONG 5");
          lcd.setCursor(0, 1);
          lcd.print("   TITLE HERE");
          delay(50);
         }    
    }        
  } 
