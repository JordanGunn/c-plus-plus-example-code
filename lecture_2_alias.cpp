//
// Created by Home on 9/14/2021.
//

#include "lecture_two_alias.hpp"
#include <iostream>


using namespace std;

// C++ REFERENCES (ALIASES)
//  •An alias(anything done to the reference is done to the referent)
//  •Must be initialized when created
//  •Makes pass by reference effortless
//  •Used for efficiency (don’t want to make a copy)

void referencesExample() {

    int n{123};

    int& ref = n;

    int m{345};

    ref = m; // same as n = m

    cout << n << endl; //
}

void referencesAsFunctionParams(int& first, int& second) {

    int tmp{first};

    first = second;
    second = tmp;
}