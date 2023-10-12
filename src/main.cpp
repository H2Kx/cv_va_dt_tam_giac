#include <Arduino.h>

float tinh_chu_vi_tam_giac_vuong(float a, float b, float c)
{
float chu_vi=a+b+c;
return chu_vi;
}
float tinh_dien_tich_tam_giac_vuong(float a, float b)
{
  float dien_tich=0.5*(a*b);
  return dien_tich;
}
float cv;
float dt;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  cv=tinh_chu_vi_tam_giac_vuong(4,5,6);
  Serial.println(cv);
  dt=tinh_dien_tich_tam_giac_vuong(6,7);
  Serial.println(dt);
  delay(1000);
}