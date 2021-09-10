#if MOTHERBOARD == 999
#define KNOWN_BOARD

/****************************************************************************************
*  GEETECH GT2560 REV4
*
****************************************************************************************/

#ifndef __AVR_ATmega2560__
#error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define ORIG_X_STEP_PIN 37
#define ORIG_X_DIR_PIN 39
#define ORIG_X_MIN_PIN 24
#define ORIG_X_MAX_PIN 22
#define ORIG_X_ENABLE_PIN 35

#define ORIG_Y_STEP_PIN 31
#define ORIG_Y_DIR_PIN 33
#define ORIG_Y_MIN_PIN 28
#define ORIG_Y_MAX_PIN 27
#define ORIG_Y_ENABLE_PIN 29

#define ORIG_Z_STEP_PIN 25
#define ORIG_Z_DIR_PIN 23
#define ORIG_Z_MIN_PIN 30
#define ORIG_Z_MAX_PIN 32
#define ORIG_Z_ENABLE_PIN 27

//#define ORIG_Z1_STEP_PIN
//#define ORIG_Z1_DIR_PIN
#define ORIG_Z1_MIN_PIN PE7
//#define ORIG_Z1_MAX_PIN 
//#define ORIG_Z1_ENABLE_PIN 

// HEATER
#define HEATER_0_PIN 10      // 
#define TEMP_0_PIN 	11		// A11 PK3 T2
#define HEATER_1_PIN 4		// PG5 PWM3 HOTBED(J19)
#define TEMP_1_PIN 10		// A10 PK2 T_BED
#define HEATER_2_PIN 3
#define TEMP_2_PIN 9		// A9 PK1 T1 
#define HEATER_3_PIN -1
#define TEMP_3_PIN 8		// A8 PK0 T0

// EXTRUDER
#define ORIG_E0_STEP_PIN 46
#define ORIG_E0_DIR_PIN 44
#define ORIG_E0_ENABLE_PIN 12
#define E0_FAN_PIN ORIG_FAN2_PIN
#define EXT1_EXTRUDER_COOLER_PIN E0_FAN_PIN

#define ORIG_E1_STEP_PIN 49
#define ORIG_E1_DIR_PIN 47
#define ORIG_E1_ENABLE_PIN 48
#define E1_FAN_PIN -1
//  #define EXT2_EXTRUDER_COOLER_PIN E1_FAN_PIN

#define ORIG_E2_STEP_PIN   		43
#define ORIG_E2_DIR_PIN    		45   
#define ORIG_E2_ENABLE_PIN  	41

// Filament detectors
#define F_DET0			66 		// PK4
#define F_DET1			67	 	// PK5	
#define F_DET2			PE2

#define LED_PIN  	 	13		// PWM5 LED(J20) Case light

// Fans
#define ORIG_FAN_PIN    9		// PWM8 PH6 FAN0(J30)
#define ORIG_FAN2_PIN   8		// PWM7 PH5 FAN1(J31)
#define ORIG_FAN3_PIN  	7		// PWM6 FAN2A FAN2B(J32 J33)

#define ORIG_PS_ON_PIN -1	// 69 ?
#define KILL_PIN -1
//PIN that has to be turned on right after start, to keep power flowing.
#define SUICIDE_PIN -1

// SD
#define SCK_PIN 52
#define MISO_PIN 50
#define MOSI_PIN 51
#define SDPOWER -1
#define SDSS 53
#define ORIG_SDCARDDETECT 38

#define E0_PINS ORIG_E0_STEP_PIN, ORIG_E0_DIR_PIN, ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN, ORIG_E1_DIR_PIN, ORIG_E1_ENABLE_PIN,

#endif
