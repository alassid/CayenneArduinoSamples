/*
Cayenne Ethernet W5200 Example
Adapted from Blynk's Arduino_Ethernet Example

This sketch connects to the Cayenne server using an Arduino Ethernet Shield W5200
and runs the main communication loop.

For Cayenne Dashboard widgets using digital or analog pins this sketch will automatically
send data on those pins to the Cayenne server. If the widgets use Virtual Pins, data
should be sent to those pins using virtualWrites. Examples for sending and receiving
Virtual Pin data are under the Basics folder.
*/

//#define CAYENNE_DEBUG         // Uncomment to show debug messages
#define CAYENNE_PRINT Serial  // Comment this out to disable prints and save space
#include <CayenneEthernetW5200.h>

// Cayenne authentication token. This should be obtained from the Cayenne Dashboard.
char token[] = "AuthenticationToken";

void setup()
{
	Serial.begin(9600);
	Cayenne.begin(token);
}

void loop()
{
	Cayenne.run();
}
