/*
 * Purpose: Using the analog-to-digital converter - voltage divider.
 * Board: Arduino UNO
 * IDE: 1.8.19
 *
 * Usage: open the serial monitor and observe the results.
 *
 * By: Clemens Valens
 * Date: 5/9/2022
 */

const float R1i = 10; // kilo-ohm (ideal)
const float R1 = 9.999; // kilo-ohm
const float R2i = 22; // kilo-ohm (ideal)
const float R2 = 22.145; // kilo-ohm

const float K = (R1/(R1+R2)) / (R1i/(R1i+R2i));

void setup(void)
{
  Serial.begin(115200);
}

void loop(void)
{
  float Vin = K * ((float)analogRead(A0)/1024)*5;
  Serial.println(Vin,3);
  delay(1000);
}
