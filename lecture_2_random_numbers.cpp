//
// Created by Home on 9/14/2021.
//

#include "lecture_two_random_numbers.hpp"

#include <random>
#include <ctime>

using namespace std;

void uniformDistributionOfDouble() {

    double a = 10;
    double b = 100;

    std::default_random_engine generator(time(0));
    uniform_real_distribution<double> distribution(a, b);

    double my_random = distribution(generator);
}

void uniformDistributionOfInt() {

    int a = 10;
    int b = 100;

    random_device rd; // a random number generator
    mt19937 generator(rd()); // calls operator()
    uniform_int_distribution<> distribution(a, b);
    int my_int = distribution(generator);
}

