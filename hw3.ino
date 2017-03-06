const byte LEDs[]={0,1,2,3,4,5,6,7};
const byte total = sizeof(LEDs);
const byte SW = 13;
byte index = 0;
byte count = 0;
byte light=0;
void setup() 
{
  // put your setup code here, to run once:
  for(byte i = 0;i<total;i++)
  {
    pinMode(LEDs[i],OUTPUT);
  }
  pinMode(SW,INPUT);
}
void loop() 
{
  boolean val = digitalRead(13);
  // put your main code here, to run repeatedly:
  //所有OFF
  if(!val)
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
            delay(500);
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
            delay(500);
         }
           
    }// 最大

  else
  {
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
            else if(index==total && light <2)
           {
             for(byte i2=0;i2<total;i2++)
              {
              digitalWrite(LEDs[i2],HIGH);
              }
              delay(500);
            light++;
              for(byte i2=0;i2<total;i2++)
              {
              digitalWrite(LEDs[i2],LOW);
              }
              
           }
            else
          {
            count = 1;
            light = 0;
          }
            delay(500);
        }
        else
        {
          if(index >0)
          {
            index--;
            }
           else if(index == 0 && light < 2 )
           {
              for(byte i2=0;i2<total;i2++)
              {
                digitalWrite(LEDs[i2],HIGH);
              }
             delay(500);
              light++;
             for(byte i2=0;i2<total;i2++)
              {
              digitalWrite(LEDs[i2],LOW);
              }
             
            }
           else
           {
            light = 0; 
            count = 0;
            }
            delay(500);
         }
    }//最大ELSE    
}

