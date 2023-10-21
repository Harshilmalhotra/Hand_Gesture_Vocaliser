int h = A1 ;//thumb
int i = A2 ;//index
int j = A3 ;//midddle
int k = A4 ;//ring
int l = A5 ;//small / pinky

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;

int p = 0;
int q = 0;
int r = 0;
int s = 0;
int t = 0;

int y = 00000;


void setup() 
{
      pinMode(h,INPUT);
      pinMode(i,INPUT);
      pinMode(j,INPUT);
      pinMode(k,INPUT);
      pinMode(l,INPUT);

       Serial.begin(9600);
       Serial.print("System Starting \n");
       delay(1500);
       Serial.print("Calibrating Sensors ......\n");
       delay(2000);
       
      a =analogRead(h);
      b =analogRead(i);
      c =analogRead(j);
      d =analogRead(k);
      e =analogRead(l);

      
       Serial.print("Done \n");
       delay(500);
      
}



void loop() 
{
     y=00000;

    if(analogRead(h)<a)
    {
       p = 1;
    }
    else
    {
      p = 0;
    }


    if(analogRead(i)<b)
    {
       q = 1;
    }
    else
    {
      q = 0;
    }
 

    if(analogRead(j)<c)
    {
       r = 1;
    }
    else
    {
      r = 0;
    }


    if(analogRead(k)<d)
    {
       s = 1;
    }
    else
    {
      s = 0;
    }

    if(analogRead(l)<e)
    {
       t = 1;
    }
    else
    {
      t = 0;
    } 



    y = t*1+s*10+r*100+q*1000+p*10000;
Serial.print(y);
Serial.print("\n");
   
 switch(y)
    {
      

      case 11111:
      Serial.print("please help me.");
      break;

      case 1111:
      Serial.print("YES");
      break;

      case 111:
      Serial.print("NO");    
      break;

      
      
      default:
      Serial.print(" ");
    } 
 
 
delay(1500);
    
              
}
