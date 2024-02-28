#pragma once 
#include "IElectronics.h"

class HouseholdAppliances : virtual public IElectronics
{
public:
	HouseholdAppliances(int weight);
	void ShowSpec() override;
protected:
	int _weight;
};

class Oven final : public HouseholdAppliances
{
public:
	Oven(int weight, int power);
	void ShowSpec() override;
private:
	int _power;
};

class Television  final : public HouseholdAppliances
{
public:
	Television(int weight, int screenDiagonal);
	void ShowSpec() override;
private:
	int _screenDiagonal;
};