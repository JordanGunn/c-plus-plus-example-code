//
// Created by Home on 9/25/2021.
//

#ifndef SEEPLUSPLUS_PRACTICE_EXTRA_DATA_HIDING_HPP
#define SEEPLUSPLUS_PRACTICE_EXTRA_DATA_HIDING_HPP


//To hide our class, we will follow a few steps.
// 1. The first step is to create a header file. This file will only contain the declaration
//     of the class and its members. A header file always has the .h extension:
// 2. Place the implementation of the code logic with the .cpp file!
// 3. Make sure to include the scope resolution operator (::) in the .cpp file
//    because we are implementing our member functions OUTSIDE THE CLASS ITSELF.

class Circle {

    // Declare all the members of the class here.
        double radius;
        double pi;

    // Declare all function prototypes here.
    public:
        Circle ();
        Circle(double r);
        double area();
        double perimeter();
};


#endif //SEEPLUSPLUS_PRACTICE_EXTRA_DATA_HIDING_HPP
