#include "Unicycle.h"

Unicycle::Unicycle(string brand, string model, int numOfRiders)
{
    setBrand(brand);
    setModel(model);
    setNumberOfRiders(numOfRiders);
}

Unicycle::~Unicycle() = default;

int Unicycle::getNumberOfRiders()
{
    return numberOfRiders;
}

void Unicycle::setNumberOfRiders(int numOfRiders)
{
    numberOfRiders = numOfRiders;
}

double Unicycle::mileageEstimate(double time)
{

    double mileage = 3 * time;

    if (numberOfRiders > 1)
    {
        mileage -= mileage * (numberOfRiders * 0.1);
    }
    if (mileage < 0)
        return 0;

    return mileage;
}

string Unicycle::toString()
{
    return "-> Unicycle\n" + Vehicle::toString() + "\n\tNumber of Riders: " +
           to_string(numberOfRiders);
}