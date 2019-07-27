#include <Adafruit_Sensor.h>
//#include <dht.h>#include <DHT.h>

#include "DHT.h"
#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
class Temperature_Humidity_read
{
  public :
  void Temp_setup();
  float get_temperature();
  float get_humidity();       
};
 void TempSetup()
 {
   int chk;
   float hum;
   float temp;
   dht.begin();
   delay(1000);

}
float get_temperature()
{
 float temp=dht.readTemperature();
 return temp;
}
float get_humidity()
{
 float hum=dht.readHumidity();
 return hum;
}
