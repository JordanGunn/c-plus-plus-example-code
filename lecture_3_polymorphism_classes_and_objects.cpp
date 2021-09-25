//
// Created by Home on 9/21/2021.
//

#include <iostream>

using namespace std;

class Animal {
public:
    virtual void speak() {
        cout<< "???" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
    cout<< "meow" << endl;}
};
