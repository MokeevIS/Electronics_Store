#include "PortableMixer.h"
#include <iostream>
using namespace std;

PortableMixer::PortableMixer(int weight, int batteryLife) : HouseholdAppliances(weight), PortableElectronics(batteryLife)
{

}

void PortableMixer::ShowSpec()
{
	cout << "Battery Life: " << _batteryLife << " Weight: " << _weight << endl;
}