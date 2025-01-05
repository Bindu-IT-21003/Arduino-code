#include <ESP8266Wifi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "RVpwxCAJmuWLcizZem2akG4RgGpkHUUb";
char ssid[] = "ict";
char pass[] = "mbstu@1902";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
/*#define BLYNK_TEMPLATE_ID "TMPL5k7EtlHtw"
#define BLYNK_TEMPLATE_NAME "Practice"
#define BLYNK_AUTH_TOKEN "RVpwxCAJmuWLcizZem2akG4RgGpkHUUb"*/