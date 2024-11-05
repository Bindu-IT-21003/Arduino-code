
const int soundSensorPin=A0;
const int ledPin=11;
const int threshold=500;
bool ledState=false;
int lastSoundLevel=0;
void setup() {
  PinMode(ledPin,OUTPUT);
  SERIAL.BEGIN(9600);
}
sss

void loop() {
  int SoundLevel=analogRead(SoundSensorPin);
  Serial.println(SoundLevel);
  if(SoundLevel>threshold && lastSoundLevel <= threshold){
    ledState=ledstate;
    digitalWrite(ledPin ,ledState ? HIGH :LOW);
    Serial.println(ledState ? "LED ON" : "LED OFF");
    delay(500);
  }
   lastSoundLevel=soundLevel;
   deley(10);

}
