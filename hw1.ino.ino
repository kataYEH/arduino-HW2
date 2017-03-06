const byte LEDs[]={0,1,2,3,4,5,6,7};
const byte total = sizeof(LEDs);
byte index = 0;
byte count = 0;
void setup() 
{
  // put your setup code here, to run once:
  for(byte i = 0;i<total;i++)
  {
    pinMode(LEDs[i],OUTPUT);
  }

}
void loop() 
{
  // put your main code here, to run repeatedly:
  //所有OFF
  for(byte i=0;i<total;i++)
    {
    digitalWrite(LEDs[i],LOW);
    }
  //亮index
    digitalWrite(LEDs[index],HIGH);
    
  //
  if(count == 0)
  {
      if(index<total)
    {
      index++;
    }
    else
    {
      count = 1;
    }
      delay(100);
  }
  else
  {
    if(index >0)
    {
      index--;
      }
     else
     {
      count = 0;
      }
      delay(100);
   }
     
}

