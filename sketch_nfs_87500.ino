#include <Wire.h>
#include <Adafruit_MCP4725.h>

#include "libraries/sketch_nfs_87500/sketch_nfs_87500.h"

Adafruit_MCP4725 dac;


void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second

  for (int i = 0; i < 256; i++)
  {
    //dac.setVoltage(pgm_read_word(&(DACLookup_FullSine_8Bit[i])), false);
  }
}
