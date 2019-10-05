#include "Jet.h"
#include <random>

Jet::Jet(string brand, string model, string fueltype, int numberOfEngines)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines()
{
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numOfEngines)
{
    numberOfEngines = numOfEngines;
}

double Jet::mileageEstimate(double time)
{
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_real_distribution<int> distribution(40, 100);
    double mileage = distribution(generator) * time;
    if (fuelType == "Rocket")
    {
        mileage += mileage * 0.055 * numberOfEngines;
    }
    return mileage;
}

string Jet::toString()
{
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(numberOfEngines);
}