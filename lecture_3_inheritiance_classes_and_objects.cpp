//
// Created by Home on 9/21/2021.
//

#include <iostream>

using namespace std;


//Base class
class Vehicle {
public:
    int fuel;
    void accelerate();
    void decelerate();
};

// Sub class inheriting from Base Class(Parent)
class Bus : public Vehicle {
public: int passengers;
};