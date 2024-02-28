#include "PortableElectronics.h"
#include <iostream>
using namespace std;

PortableElectronics::PortableElectronics(int batteryLife) : _batteryLife(batteryLife) 
{

}

void PortableElectronics::ShowSpec() 
{
	cout << "Battery Life: " << _batteryLife << endl;
}

Player::Player(int batteryLife, int totalTracks) : PortableElectronics(batteryLife), _totalTracks(totalTracks)
{

}

void Player::ShowSpec()
{
	cout << "Battery Life: " << _batteryLife << " Total tracks: " << _totalTracks << endl;
}

Phone::Phone(int batteryLife, int screenDiagonal) : PortableElectronics(batteryLife), _screenDiagonal(screenDiagonal)
{

}

void Phone::ShowSpec()
{
	cout << "Battery Life: " << _batteryLife << " Screen Diagonal: " << _screenDiagonal << endl;
}