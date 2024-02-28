#pragma once 
#include "IElectronics.h"

class PortableElectronics : virtual public IElectronics
{
public:
	PortableElectronics(int batteryLife);
	void ShowSpec() override;
protected:
	int _batteryLife;
};

class Player final : public PortableElectronics
{
public:
    Player(int batteryLife, int totalTracks);
	void ShowSpec() override;
private:
    int _totalTracks;
};

class Phone final : public PortableElectronics
{
public:
	Phone(int batteryLife, int screenDiagonal);
	void ShowSpec() override;
private:
	int _screenDiagonal;
};

