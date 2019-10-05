//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_Jet_H
#define DRIVINGSIMULATOR_Jet_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines = 1);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int numberOfEngines);
    virtual double mileageEstimate(double time);

    virtual string toString();
};

#endif //DRIVINGSIMULATOR_Jet_H
