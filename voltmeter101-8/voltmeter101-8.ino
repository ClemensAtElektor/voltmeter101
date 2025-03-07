/*
 * Purpose: Using the analog-to-digital converter - internal bandgap reference.
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
const float R2i = 135; // kilo-ohm (ideal)
const float R2 = 133.8; // kilo-ohm

const float K = (R1/(R1+R2)) / (R1i/(R1i+R2i));

const float AVCC = 5.001; // volt
const float VREF = 1.1; // volt

void setup(void)
{
  Serial.begin(115200);
  analogReference(INTERNAL);
}

void loop(void)
{
  float Vin = K * ((float)analogRead(A0)/1024)*VREF;
  Serial.println(Vin,3);
  delay(1000);
}
