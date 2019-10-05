#include "Skateboard.h"
#include <random>

Skateboard::Skateboard(string brand, string model)
{
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_real_distribution<double> distribution(0.1, 0.5);

    double mileage = distribution(generator) * time;

    if (time > 25.0 && time < 250.0)
    {
        std::uniform_real_distribution<double> distribution(1.0, time / 3.0);
        mileage += distribution(generator);
    }

    return mileage;
}

string Skateboard::toString()
{
    return "-> Skateboard\n" + Vehicle::toString();
}