int flex = A0;
int data = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(flex,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
data=analogRead(flex);
Serial.print(data);
Serial.print("\n");
delay(1000);
}
