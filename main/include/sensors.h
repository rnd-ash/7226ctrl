#include <SoftTimer.h>

struct SensorVals
{
    int curOilTemp, curBoost, curAtfTemp, curRPM, curBoostLim;
    byte curTps, curLoad, curSpeed;
};

struct ConfigParam
{
    int boostMax, boostDrop, fuelMaxRPM;
};

void N2SpeedInterrupt();
void N3SpeedInterrupt();
void vehicleSpeedInterrupt();
void pollsensors(Task *me);
int speedRead();
int tpsRead();
int rpmRead();
int boostRead();
int boostLimitRead(int oilTemp, int tps);
int loadRead(int boostSensor, int allowedBoostPressure, int tps);
int atfRead();
int oilRead();
struct SensorVals readSensors();
struct ConfigParam readConfig();

extern boolean trans;
extern boolean sensors;
extern boolean tpsSensor;
extern boolean boostSensor;
extern boolean debugEnabled;
extern boolean boostLimit;
extern boolean drive;