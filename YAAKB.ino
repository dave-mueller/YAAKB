// Customized 8 button keyboard 
//Inspired by Dave's (from Parts Not Included) "Stream Cheap"
//Written by Dave Mueller for Leonardo or Pro Micro

#include <Keyboard.h> // must include for keys to work

//Assign pin numbers:
int Button_0 = 2;
int Button_1 = 3;
int Button_2 = 4;
int Button_3 = 5;
int Button_4 = 6;
int Button_5 = 7;
int Button_6 = 8;
int Button_7 = 9;
int Button_8 = 10;

// Create array of all buttons 
int Buttons[] = {
  Button_0, Button_1, Button_2,
  Button_3, Button_4, Button_5,
  Button_6, Button_7, Button_8
};
