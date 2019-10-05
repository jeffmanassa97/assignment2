#ifndef DRIVINGSIMULATOR_UNICYCLE_H
#define DRIVINGSIMULATOR_UNICYCLE_H

#include "Vehicle.h"

class Unicycle : public Vehicle
{

private:
    int numberOfRiders;

public:
    explicit Unicycle(string brand, string model, int numOfRiders = 1);

    virtual ~Unicycle();
    int getNumberOfRiders();
    void setNumberOfRiders(int numOfRiders);
    virtual double mileageEstimate(double time);

    virtual string toString();
};

#endif //DRIVINGSIMULATOR_UNICYCLE_H
