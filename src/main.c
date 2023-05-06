#include <Arduino.h>
#include <Wire.h>
#include <radSens1v2.h>
ClimateGuard_RadSens1v2 radSens(RS_DEFAULT_I2C_ADDRESS);

#include "LowPower.h"

const uint8_t PIN_minus = 4;
const float threshold = 0.2;
const float Uprog = 3.05;


#include "ASOLED.h"
#include "mice.c"

static const unsigned char PROGMEM Logo_BMP[] =
{ 0x10, 0x10, 0xff, 0x01,
  B00000000,  B00000001,  B00000001,  B00000011,  B11110011,  B11111110,  B01111110,  B00110011,
  B00011111,  B00001101,  B00011011,  B00111111,  B00111111,  B01111100,  B01110000,  B00000000,
  B11000000,  B11000000,  B11000000,  B11100000,  B11100000,  B11111000,  B11111111,  B10011111,
  B11111100,  B01110000,  B10100000,  B11100000,  B11110000,  B11110000,  B01110000,  B00110000
};

const uint8_t pacman[] PROGMEM = {
  0x14, 0x18, 0x00, 0x01,
  0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3E, 0x1C,   // 0x0010 (16) pixels
  0x0C, 0x00, 0x00, 0x00, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9,   // 0x0020 (32) pixels
  0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0F,   // 0x0030 (48) pixels
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00,

  0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x7C,   // 0x0010 (16) pixels
  0x7C, 0x38, 0x20, 0x00, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9,   // 0x0020 (32) pixels
  0xF9, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0F,   // 0x0030 (48) pixels
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00,

  0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC,   // 0x0010 (16) pixels
  0xF8, 0xF0, 0xE0, 0x80, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0020 (32) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xF9, 0x79, 0x19, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0F,   // 0x0030 (48) pixels
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
};

const uint8_t pacman_clear[] PROGMEM = {
  0x03, 0x18, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t pill[] PROGMEM = {
  0x05, 0x08, 0x00, 0x01,
  0x0E, 0x1F, 0x1F, 0x1F, 0x0E,
};

//byte currBrightness = 255;

void setup()
{
  LD.init();
  LD.clearDisplay();
  LD.setBrightness(255);
  Serial.begin(115200);

  radSens.radSens_init();

  uint8_t sensorChipId = radSens.getChipId();
  Serial.print("Chip id: 0x");
  Serial.println(sensorChipId, HEX);
  uint8_t firmWareVer = radSens.getFirmwareVersion();
  Serial.print("Firmware version: ");
  Serial.println(firmWareVer);
  Serial.println("-------------------------------------");

  Serial.println("Set Sensitivity example:\n");
  uint8_t sensitivity = radSens.getSensitivity();
  Serial.print("\t getSensitivity(): "); Serial.println(sensitivity);
  Serial.println("\t setSensitivity(55)... ");
  radSens.setSensitivity(85);
  sensitivity = radSens.getSensitivity();
  Serial.print("\t getSensitivity(): "); Serial.println(sensitivity);
  Serial.println("\t setSensitivity(105)... ");
  radSens.setSensitivity(105);
  Serial.print("\t getSensitivity(): "); Serial.println(radSens.getSensitivity());

  bool hvGeneratorState = radSens.getHVGeneratorState();
  Serial.print("\n\t HV generator state: "); Serial.println(hvGeneratorState);
  Serial.println("\t setHVGeneratorState(false)... ");
  radSens.setHVGeneratorState(false);
  hvGeneratorState = radSens.getHVGeneratorState();
  Serial.print("\t HV generator state: "); Serial.println(hvGeneratorState);
  Serial.println("\t setHVGeneratorState(true)... ");

  radSens.setHVGeneratorState(true);

  hvGeneratorState = radSens.getHVGeneratorState();
  Serial.print("\t HV generator state: "); Serial.print(hvGeneratorState);
  Serial.println("\n-------------------------------------");

  pinMode(PIN_minus, OUTPUT);
  digitalWrite(PIN_minus, HIGH);
  delay(50);
  digitalWrite(PIN_minus, LOW);
  delay(1000);

  analogReference(INTERNAL);
}

void loop() {
  radSens.setHVGeneratorState(true);
  float a, b, c;
  a = radSens.getRadIntensyDyanmic() / 100;
  b = radSens.getRadIntensyStatic() / 100;
  c = radSens.getNumberOfPulses();

  Serial.print("\nDynamic: ");
  Serial.println(a);
  LD.printString_12x16("Cur:  ", 2, 0);
  LD.printString_12x16("", 77, 0);
  LD.printNumber(a);
  LD.printString_6x8("uSv", 52, 2);
  Serial.print("Static:  ");
  Serial.println(b);
  LD.printString_12x16("All:  ", 2, 3);
  LD.printString_12x16("", 77, 3);
  LD.printNumber(b);

  float voltage = (float)(analogRead(0) * 4.22) / 1024;
  LD.printString_6x8("U", 83, 7);
  LD.printString_6x8("=", 93, 7);
  LD.printString_6x8("", 102, 7);
  LD.printNumber(voltage);

  if (voltage <= Uprog) {
    digitalWrite(PIN_minus, HIGH);
    delay(55);
    digitalWrite(PIN_minus, LOW);
    delay(35);
    digitalWrite(PIN_minus, HIGH);
    delay(25);
    digitalWrite(PIN_minus, LOW);
    delay(35);
    digitalWrite(PIN_minus, HIGH);
    delay(55);
    digitalWrite(PIN_minus, LOW);
    delay(35);
    digitalWrite(PIN_minus, HIGH);
    delay(25);
    digitalWrite(PIN_minus, LOW);
  }

  Serial.print("Pulses:  ");
  Serial.println(radSens.getNumberOfPulses());
  LD.printString_6x8("Count:", 2, 7);
  LD.printString_6x8("", 40, 7);
  LD.printNumber(c);

  radSens.setHVGeneratorState(false);
  LD.setBrightness(0);

  if (a > threshold || b > threshold) {
    LD.setBrightness(255);
    digitalWrite(PIN_minus, HIGH);
    //    delay((int)a);
    delay(5);
    digitalWrite(PIN_minus, LOW);
  }

  delay(5);
  LowPower.powerDown(SLEEP_500MS, ADC_OFF, BOD_OFF);
}