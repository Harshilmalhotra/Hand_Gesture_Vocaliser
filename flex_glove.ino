#include <SoftwareSerial.h>
int s1= A1;
char sv1= 0;
SoftwareSerial ble(10, 11); // RX, TX
void setup() {
    pinMode(s1 , INPUT);
 Serial.begin(9600);
            //  setup serial
}

void loop() {
   s1 = analogRead(s1);  // read the input pin
   if(s1<95 )
   {
   sv1="HELP";
    ble.println(sv1);
   }
   else
   {
   sv1="FETCHING DATA";
    ble.println(sv1);
   }










   
   }
