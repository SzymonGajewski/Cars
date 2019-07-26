#pragma once
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
protected:
    void refuel();
    PetrolEngine* engine_;
public:
    PetrolCar(PetrolEngine* engine, int vmax);
    ~PetrolCar();
    void feed() override;
    void changePetrolEngine(PetrolEngine* engine);
};

