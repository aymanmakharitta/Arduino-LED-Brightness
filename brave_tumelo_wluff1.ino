// C++ code
//
int led=3;
int x=0; int y=255;
void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
  if (x<=255){
analogWrite(led,x); 
  x++;
  delay(25);
  }
  else if (x>255&&y<=255&&y>=0){
    analogWrite(led,y);
    y=y-1;
    delay(25);
  }
  else if (x>255&&y<0){x=0;y=255;}
}