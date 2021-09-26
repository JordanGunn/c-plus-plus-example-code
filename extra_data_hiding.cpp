//
// Created by Home on 9/25/2021.
//

// SEE extra_data_hiding.hpp FOR DETAILS ABOUT THIS CODE

#include "extra_data_hiding.hpp"

Circle::Circle(){
    radius = 0;
    pi = 3.142;
}

Circle::Circle(double r){
    radius = r;
    pi = 3.142;
}

double Circle::area(){
    return pi * radius * radius;
}

double Circle::perimeter(){
    return 2 * pi * radius;
}
