#if defined(__AVR__)
  #include <avr/pgmspace.h>
  #define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
  #define PROGMEM
  #define fontdatatype const unsigned char
#elif defined(__arm__)
  #define PROGMEM
  #define fontdatatype const unsigned char
#endif

//  mice bitmap 128x64

fontdatatype mice[] PROGMEM={
0x80, 0x40, 0xFF, 0x01,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0010 (16) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,   // 0x0020 (32) pixels
0x3F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0030 (48) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0040 (64) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0050 (80) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0xCF, 0xCF, 0xEF, 0xCF, 0x9F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF,   // 0x0060 (96) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x9F, 0x9F, 0xDF, 0xCF, 0xCF, 0xCF,   // 0x0070 (112) pixels
0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0080 (128) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0090 (144) pixels
0xFF, 0xFF, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00A0 (160) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00B0 (176) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00C0 (192) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00D0 (208) pixels
0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE1, 0x07, 0x3F,   // 0x00E0 (224) pixels
0xFF, 0xFF, 0x7F, 0x1F, 0x47, 0x33, 0x98, 0xCC, 0xE6, 0xF3, 0xF9, 0xFE, 0xFF, 0xFF, 0x3F, 0x07,   // 0x00F0 (240) pixels
0xC0, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0100 (256) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0110 (272) pixels
0xFF, 0xFF, 0xFC, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0120 (288) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0130 (304) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0140 (320) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x07, 0x03, 0x01, 0x01, 0x00,   // 0x0150 (336) pixels
0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF7, 0xE6, 0x00,   // 0x0160 (352) pixels
0x33, 0xF9, 0xF0, 0x04, 0x0E, 0xCF, 0xEF, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x00, 0x03,   // 0x0170 (368) pixels
0x03, 0x03, 0x07, 0x07, 0x0F, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0180 (384) pixels
0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0F, 0x1F,   // 0x0190 (400) pixels
0x3F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x1E, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01A0 (416) pixels
0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF9, 0xF1, 0xC3,   // 0x01B0 (432) pixels
0x87, 0xCF, 0x9F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x01C0 (448) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01D0 (464) pixels
0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0xDF, 0xCF, 0xEF, 0xE7, 0xB7, 0x33, 0x11, 0x30,   // 0x01E0 (480) pixels
0xC6, 0xC7, 0xE3, 0x10, 0x32, 0x17, 0x67, 0xAF, 0xCF, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x00, 0x00,   // 0x01F0 (496) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0200 (512) pixels
0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0210 (528) pixels
0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0220 (544) pixels
0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0xC1, 0xF1,   // 0x0230 (560) pixels
0x07, 0x3F, 0x0F, 0x87, 0x0C, 0x01, 0x0F, 0x7F, 0x1F, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x0F, 0xFF,   // 0x0240 (576) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF8, 0xF8, 0xF0,   // 0x0250 (592) pixels
0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0x00, 0x3E, 0x3C,   // 0x0260 (608) pixels
0x03, 0x8F, 0x01, 0x3C, 0x3E, 0x00, 0x83, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x70,   // 0x0270 (624) pixels
0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0280 (640) pixels
0xFF, 0xF8, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0290 (656) pixels
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0xE0, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0x7E, 0x7C,   // 0x02A0 (672) pixels
0x3C, 0x3C, 0x3C, 0x78, 0x78, 0xF1, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF3, 0xE7,   // 0x02B0 (688) pixels
0xF0, 0xF8, 0xF0, 0xF3, 0xF8, 0xF8, 0xFC, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xFF,   // 0x02C0 (704) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x02D0 (720) pixels
0x80, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0x63, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x08, 0x00,   // 0x02E0 (736) pixels
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x8B, 0xFF, 0xFF, 0x3F, 0x39, 0x78, 0xF8, 0xF8, 0x60, 0x00,   // 0x02F0 (752) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0300 (768) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC,   // 0x0310 (784) pixels
0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xE7, 0xCF, 0x9F, 0x3F, 0x3F, 0x7F, 0x7F, 0xFF,   // 0x0320 (800) pixels
0xF8, 0xE3, 0xCF, 0xBF, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0330 (816) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xCF, 0xE3, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF,   // 0x0340 (832) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0350 (848) pixels
0xFF, 0xFC, 0xF9, 0xF3, 0xE7, 0xCE, 0xDE, 0x9C, 0xB9, 0x33, 0x67, 0x87, 0x0F, 0x4F, 0x8F, 0x8F,   // 0x0360 (864) pixels
0x8E, 0x8E, 0x8E, 0x8E, 0x07, 0x87, 0xF3, 0x79, 0x7D, 0x3E, 0x9F, 0xCF, 0xE7, 0xF3, 0xF8, 0xFE,   // 0x0370 (880) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0380 (896) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0390 (912) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE,   // 0x03A0 (928) pixels
0xFE, 0xFC, 0xFC, 0xFC, 0xFD, 0xF8, 0xFA, 0xF8, 0xF8, 0xF9, 0xF9, 0xFD, 0xF9, 0xF9, 0xF9, 0xF9,   // 0x03B0 (944) pixels
0xF9, 0xFD, 0xFD, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x03C0 (960) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x03D0 (976) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF9, 0xF8, 0xF0, 0xF1,   // 0x03E0 (992) pixels
0xF1, 0xF1, 0xF1, 0xF8, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x03F0 (1008) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0400 (1024) pixels
};
