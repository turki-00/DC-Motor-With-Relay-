

//name of each pin used

int in1=13; //input for relay1 with coile.
int in2=4; //input for relay2 with coile.
int sw=0; //state to controlle direction of rotation for DC motor. 

//mode for each pin used.
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(sw,INPUT);
}

void loop()
{
   int state=digitalRead(sw);
  //following block to run DC motorc in clockwise.
   if (state==HIGH) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
   }
   //delay(4000);

   //following block to run DC motorc in anticlockwise.

   else if (state==LOW) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
   }
   //delay(4000);

   
}
