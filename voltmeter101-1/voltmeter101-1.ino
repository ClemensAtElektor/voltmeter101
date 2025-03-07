/*
 * Purpose: Using the analog-to-digital converter - integer maths.
 * Board: Arduino UNO
 * IDE: 1.8.19
 *
 * Usage: open the serial monitor and turn the potentiometer connected to +5V, GND and A0.
 *
 * By: Clemens Valens
 * Date: 5/9/2022
 */


void setup(void)
{
  Serial.begin(115200);
}

void loop(void)
{
  int Vin = (analogRead(A0)/1024)*5;
  Serial.println(Vin,3);
  delay(1000);
}
