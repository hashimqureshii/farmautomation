
int led1Pin = 4;     //led to check soil sensor data
int led2Pin = 21;    //led to check LDR data
int ldrPin = 5;      //LDR pin
int mspin = 2;       //Soil sensor data

void setup() {

Serial.begin(9600);

pinMode(led1Pin, OUTPUT);
pinMode(led2Pin, OUTPUT);
pinMode(ldrPin, INPUT);
pinMode(mspin, INPUT);

}

void loop() {

int ldrvalue = analogRead(ldrPin);
int msvalue = analogRead(mspin);
Serial.println(msvalue);

if (msvalue > 748) {
    digitalWrite(led1Pin,HIGH);
  }
  else
  {
   digitalWrite(led1Pin,LOW);
  }

Serial.println(ldrvalue);
if (ldrvalue <= 3000) {
digitalWrite(led2Pin, HIGH);
} else {
digitalWrite(led2Pin, LOW);
}
}
