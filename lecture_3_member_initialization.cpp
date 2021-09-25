//
// Created by Home on 9/21/2021.
//

#include <iostream>

using namespace std;

// constructor arguments must be initialized using the following syntax
class Complex {

    // A FEW NOTES ABOUT INITIALIZATION
    // - Data members MUST be initialized in the order in which they
    //   are declared in the class

private:
    // default initialization values
    double i = 1.0, r = 2.0;

public:

    // we use special C++ syntax called the MEMBER INITIALIZATION LIST
    // ADDITIONALLY, we can include default arguments
    explicit Complex(double r_new = 0, double i_new = 0) : r(r_new), i(i_new) {
        r = r_new;
        i = i_new;
    }


    // we can overload the constructor
    explicit Complex(double r_new) : r(r_new), i(0) { }

    // we can still have the default constructor
    // AND include default arguments
    Complex() : r(0), i(0) { }
};

