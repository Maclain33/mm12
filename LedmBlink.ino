// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       LedmBlink.ino
    Created:	2024-05-19 12:48:39 AM
    Author:     MACLAIN\Makan
*/

// Define User Types below here or use a .h file
//

// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
int LedLight = 13;

// The setup() function runs once each time the micro-controller starts
void setup()
{
    Serial.begin(15200);
    pinMode(LedLight, OUTPUT);

}

// Add the main program code into the continuous loop() function
void loop()
{

    digitalWrite(LedLight, HIGH);
    delay(1000);
    digitalWrite(LedLight, LOW);
    delay(1000);
    
}
