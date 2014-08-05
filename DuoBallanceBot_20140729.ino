/// 
/// @mainpage	20140803_invertedPendulem_robot 
///
/// @details	EmbedXcode+ inverted pedulum project.
/// @n 		
/// @n 
/// @n @a		Developed with [embedXcode+](http://embedXcode.weebly.com)
/// 
/// @author		James Wood 柯杰。
/// @author		James Wood 柯杰。
/// @date		8/3/14 11:19 AM
/// @version	0.1
/// 
/// @copyright	(c) James Wood 柯杰。, 2014
/// @copyright	GNU General Public License
///
/// @see		ReadMe.txt for references
///


///
/// @file		_0140803_invertedPendulem_robot.ino
/// @brief		Main sketch
///
/// @details	0.1
/// @n @a		Developed with [embedXcode+](http://embedXcode.weebly.com)
/// 
/// @author		James Wood 柯杰。
/// @author		James Wood 柯杰。
/// @date		8/3/14 11:19 AM
/// @version	0.1
/// 
/// @copyright	(c) James Wood 柯杰。, 2014
/// @copyright	GNU General Public License
///
/// @see		ReadMe.txt for references
/// @n
///


// Core library for code-sense
#if defined(WIRING) // Wiring specific
#include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific
#include "WProgram.h"
#elif defined(MPIDE) // chipKIT specific
#include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad MSP430 G2 and F5529, Stellaris and Tiva, Experimeter Board FR5739 specific
#include "Energia.h"
#elif defined(MICRODUINO) // Microduino specific
#include "Arduino.h"
#elif defined(TEENSYDUINO) // Teensy specific
#include "Arduino.h"
#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
#include "Arduino.h"
#else // error
#error Platform not defined
#endif

#include "Streaming.h"
#include "MotorControler.h"
#include "MasterPID.h"
#include "Encoders.h"



// Include application, user and local libraries


// Prototypes


// Define variables and constants

MotorControler motorA( 12, 3, 9 );
MotorControler motorB( 13, 11, 8 );

// Add setup code 
void setup() 
{
    Serial.begin(115200);
    encoderSetup();
    
    motorA.motorCheckup();
    motorB.motorCheckup();
}

// Add loop code 
void loop() 
{
   
   
}


