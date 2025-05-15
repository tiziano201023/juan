#ifndef MeAuriga_H
#define MeAuriga_H
#include <Arduino.h>
#include "MeConfig.h"
MePort_Sig mePort[17] =
{
  { NC, NC }, { 5, 4 }, { 3, 2 }, ...
};
{signal1_pin, signal2_pin}
{ 5, 4 } // PORT_1 uses pin 5 and 4
Encoder_port_type encoder_Port[6] =
{
  { NC, NC, NC, NC, NC },
  { 19, 42, 11, 49, 48 },
  { 18, 43, 10, 47, 46 },
  ...
};
{ 19, 42, 11, 49, 48 } // encoder 1
{ 18, 43, 10, 47, 46 } // encoder 2
#define buzzerOn()  pinMode(45,OUTPUT),digitalWrite(45, HIGH)
#define buzzerOff() pinMode(45,OUTPUT),digitalWrite(45, LOW)