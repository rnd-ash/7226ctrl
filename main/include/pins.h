// OUTPUT PINS
// SPI display setup
#define OLED_MOSI 11 //D1
#define OLED_CLK 13  //D0
#define OLED_DC 6
#define OLED_CS 7
#define OLED_RESET 8

// Solenoid output pins
#define y3 47
#define y4 45
#define y5 46
#define mpc 9
#define spc 10
#define tcc 41
#define rpmMeter 12
#define boostCtrl 44 // validate out pwm frequency
// END OUTPUT PINS

// INPUT PINS
// Stick input
#define whitepin 27
#define bluepin 29
#define greenpin 26
#define yellowpin 28

// Switches
#define autoSwitch 22
#define gdownSwitch 23
#define gupSwitch 24
#define aSpcUpSwitch 30
#define aSpcDownSwitch 31
// Car sensor input pins
#define tpsPin A0
#define atfPin A1
#define boostPin A2
#define oilPin A3
#define n2pin 19
#define n3pin 20
#define speedPin 21
#define rpmPin 18