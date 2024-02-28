#include "HouseholdAppliances.h"
#include <iostream>
using namespace std;

HouseholdAppliances::HouseholdAppliances(int weight) : _weight(weight)
{

}

void HouseholdAppliances::ShowSpec()
{
	cout << "Weight: " << _weight << endl;
}

Oven::Oven(int weight, int power) : HouseholdAppliances(weight), _power(power)
{

}

void Oven::ShowSpec()
{
	cout << "Weight: " << _weight << " Power: " << _power << endl;
}

Television::Television(int weight, int screenDiagonal) : HouseholdAppliances(weight), _screenDiagonal(screenDiagonal)
{

}

void Television::ShowSpec()
{
	cout << "Weight: " << _weight << " Screen Diagonal: " << _screenDiagonal << endl;
}