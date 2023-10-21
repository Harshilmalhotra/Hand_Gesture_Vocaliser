int flex = A0;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(flex,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly
  
Serial.print(analogRead(flex));

Serial.print("\n");
delay(100);
}
