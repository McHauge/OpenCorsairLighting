/*
   Copyright 2019 Leon Kiefer

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#include <CorsairLightingNodePRO.h>
#include <FastLED.h>

#define DATA_PIN_CHANNEL_1 4
#define DATA_PIN_CHANNEL_2 12

CRGB ledsChannel1[CHANNEL_LED_COUNT];
CRGB ledsChannel2[CHANNEL_LED_COUNT];

CorsairLightingNodePRO cLNP(ledsChannel1, ledsChannel2);

void setup() {
	disableBuildInLEDs();
	FastLED.addLeds<NEOPIXEL, DATA_PIN_CHANNEL_1>(ledsChannel1, CHANNEL_LED_COUNT);
	FastLED.addLeds<NEOPIXEL, DATA_PIN_CHANNEL_2>(ledsChannel2, CHANNEL_LED_COUNT);
}

void loop() {
	cLNP.update();
}
