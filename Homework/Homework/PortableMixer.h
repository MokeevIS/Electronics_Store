#pragma once
#include "HouseholdAppliances.h"
#include "PortableElectronics.h"

class PortableMixer final : public HouseholdAppliances, PortableElectronics
{
public:
	PortableMixer(int weight, int batteryLife);
	void ShowSpec() override;
};

