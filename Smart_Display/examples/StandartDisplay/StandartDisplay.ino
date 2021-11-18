#include <Smart_Display.h>
Display Test(2,5,6,13,3,7,11,9,8,4,12,5); //(1,2,3,4,a,b,c,d,e,f,)
unsigned long Mytime;
void setup() {
  Test.Write(9,8,7,8);                  //(1,2,3,4)
  Test.Write2Numbers(12,31);            //(1+2,3+4)
}

void loop() {
  Test.show();
  DELAY(100); //If you need a Delay use this Function! -> 5.
  Test.Write("A","B","C","E");          //(1,2,3,4)
  }                                                                                                                                                           /*
 ALL DISPLAY COMMANDS:
1. Display OWN_NAME(DisplayPIN 1, DisplayPIN 2, DisplayPIN 3, DisplayPIN 4, DisplayPIN a, DisplayPIN b, DisplayPIN c, DisplayPIN d, DisplayPIN e, Display f, DisplayPIN g);
-> Set the Display PINs
2. OWN_NAME.show();
-> Trigger the Display, loop required!
3. OWN_NAME.Write(NUMBER_1,NUMBER_2,NUMBER_3,NUMBER_4);
-> WRITES 4 Different numbers on your Display
4. OWN_NAME.Write2Numbers();
-> WRITES 2 Different numbers on your Display
5. You can also use this Function:                                                                                                   */
void DELAY(int TIME){
  for (int COUNT=0;COUNT<=TIME/2;COUNT++){
    Test.show();
  }
}                                                                                                                                                   /*
 */
