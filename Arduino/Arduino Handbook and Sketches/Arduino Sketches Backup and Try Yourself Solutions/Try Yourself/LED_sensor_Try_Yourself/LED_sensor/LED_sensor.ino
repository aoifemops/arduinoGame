#define LED_Sensor_NEG 8          // sets up the negative side of sensor LED
#define LED_Sensor_POS 7          // sets up the positive side of sensor LED
#define Yellow_LED 9              // one colour LED on pin 9
#define Red_LED 10                 // second colour LED on pin 10
                                  // they don't need to be red and yellow

int switcher=0;                   // variable to switch between the two LEDs
int lightLevelY=0;                // variable for how bright to make yellow LED
int lightLevelR=0;                // variable for how bright to make red LED
long darkness=0;              
int outputVal=0;                  // variable to store the value for the light level for the monitor

void setup(){
  pinMode(LED_Sensor_POS,OUTPUT);     // make the positive sensor leg an output 
  digitalWrite(LED_Sensor_POS,LOW);   // and put a low voltage on it
  pinMode(Yellow_LED,OUTPUT);         // make the other LEDs outputs
  pinMode(Red_LED,OUTPUT);
    
  Serial.begin(9600);                 // turn on serial monitor to give out the light reading
}

void loop()
{      

  if(switcher==0)                     // gradually switch on the red LED
  {
    lightLevelR+=1;
    if(lightLevelR>255){
      lightLevelR=0;
      switcher=1;                     // once it's on fully change the switcher to move to yellow LED
    } 
  } else 
  {
    lightLevelY+=2;                   // gradually switch on the red LED
    if(lightLevelY>255){
      lightLevelY=0;
      switcher=0;
    }
  }
  analogWrite(Red_LED,lightLevelR);   // turn on red or yellow at the appropriate light level
  analogWrite(Yellow_LED,lightLevelY);

  // Charge the LED by applying voltage in the opposite direction
  pinMode(LED_Sensor_NEG,OUTPUT);     // makes the negative pin of the sensor LED an output
  digitalWrite(LED_Sensor_NEG,HIGH);  // and sends a high voltage to it 
  
  // Set pin 8 to read the input and Turn off the internal pull up resistor. 
  // The greater the amount of light in the room, the smaller the number represented by variable "darkness".

  pinMode(LED_Sensor_NEG,INPUT);      // return the negative pin to an input to read the value of light
  digitalWrite(LED_Sensor_NEG,LOW);   
  while((digitalRead(LED_Sensor_NEG)!=0) && darkness<80000) 
                                      // once there's some light coming in, that's the digitalRead(LED_Sensor_NEG)!=0 bit 
                                      // and it doesn't get too bright, the darkness<80000 bit...
  {
     darkness++;                      // increase the value of darkness
  }

  outputVal=darkness/80;              // divide by 80 to make the value between 0 and 1000
  Serial.println(outputVal);          // print the darkness level in the room on the monitor
}
