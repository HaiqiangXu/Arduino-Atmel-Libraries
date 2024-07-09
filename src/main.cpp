#include <CBluetooth.h>
#include <CAtmelPower.h>
#include <TrueRandom.h>
#include <CSDFilesManager.h>

// Test project just to test if libraries in this project compiles. Expendable class
void setup()
{
    AtmelPower.Sleep(500);
    AtmelPower.PowerDownInt0();

    LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
    int i = TrueRandom.random(1, 13);

    CSDFilesManager files = CSDFilesManager(4);
    CBluetooth bluetooth = CBluetooth(1, 3, EBluetoothAdapter::HC_05);
}

void loop()
{

}
