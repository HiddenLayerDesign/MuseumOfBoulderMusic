/******************************************************* 
 *  File: NeoPixel.h
 *    
 *  Author: Chase E. Stewart
 *  For Hidden Layer Design
 *  
 *  License: Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)    
 *  
 *******************************************************/
#ifndef __NEOPIXEL_H__
#define __NEOPIXEL_H__

#include <WS2812Serial.h>


const int NeoStick_count = 8;
const int NeoButtons_count = 1;

typedef struct
{
  uint8_t green;
  uint8_t red;
  uint8_t blue;
} neoPixel_t;

typedef struct 
{
  neoPixel_t pixelArray[8];
} neoStickFrame_t;

// array of "animation frames" of the neopixel stick- this should start with all LEDs lit but one, and decrease to 0 LEDs lit
const neoStickFrame_t countdownArray[8] = {
  {{{0,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{100,0,0},{100,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{100,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{100,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{100,0,0}}},
  {{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}}
  };


void updateNeoPixelStick(WS2812Serial NeoStick, uint8_t value); // Update LED values based on remaining time 


#endif // __NEOPIXEL_H__
