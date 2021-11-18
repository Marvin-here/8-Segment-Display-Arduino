#include <Smart_Display.h>
Display Display(2,5,6,13,3,7,11,9,8,4,12);  //(1,2,3,4,a,b,c,d,e,f,g)
int T=100;
int BS1("T");
int BS2("E");
int BS3("S");
int BS4("T");


void setup() {
}

void loop() {
  Laufschrift();
}


void Laufschrift(){
  Display.Write(" "," "," ",BS1);
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(" "," ",BS1,BS2);
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(" ",BS1,BS2,BS3);
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(BS1,BS2,BS3,BS4);
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(BS2,BS3,BS4," ");
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(BS3,BS4," "," ");
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(BS4,BS5,BS6," ");
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(" "," "," "," ");
  for(int a = 0; a<=T; a++){
  Display.show();
  }
  Display.Write(" "," "," "," ");
  for(int a = 0; a<=T; a++){
  Display.show();
  }
}
