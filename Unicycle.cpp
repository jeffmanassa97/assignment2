#include "Unicycle.h"
#include <random>

Unicycle::Unicycle(string brand, string model, int numOfRiders)
{
    setBrand(brand);
    setModel(model);
    setNumberOfRiders(numberOfRiders);
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
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_real_distribution<int> distribution(1, 3);
    // Random because they are unreliable
    double mileage = distribution(generator) * time;

    if (numberOfRiders > 1)
    {
        mileage -= (numberOfRiders * 0.5);
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