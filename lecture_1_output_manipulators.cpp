//
// Created by Home on 9/12/2021.
//

#include "lecture_one_output_manipulators.hpp"
#include <iostream>
#include <iomanip>

// Recall that std::cout is a GLOBAL OBJECT of class OSTREAM

// In Java, behaviours are called methods
// In C++, we call them member functions.

using namespace std;

int setFlagsExample() {

    // Two main members functions for setting flags
    // cout.unsetf(flag)
    // cout.setf(flag)

    // Arguments can be:
    // > boolalpha
    // > showbase
    // > uppercase
    // > showpos

    // cout.setf or cout.unsetf can also accept two args
    // cout.setf(flag, flag);
    // arg1: dec/oct/hex | arg2: basefield
    // arg1: fixed/scientific | arg2: floatfield
    // arg1: left/right/internal | arg2: adjustfield

    // e.g. Printing in hex explicitly
    int n{15};

    // change decimal type to hexadecimal type
    cout.setf(ios_base::hex, ios_base::basefield);

    cout << n << endl; // will print 'f' (which is 15 in hex)

    return 0;
}

int outputManipulators() {

    int n = 15;
    // We can also use OUTPUT MANIPULATORS to do the same thing
    // here the output manipulator is 'hex'
    cout << hex << n << endl; // hex value 'f'

    // -------------------------------------
    // More useful output manipulators
    // -------------------------------------

    // cout << uppercase << hex <<n; --> 7B
    // cout << nouppercase << hex <<n; --> 7B

    // cout << showbase << hex <<n; --> 0x7b
    // cout << noshowbase << hex <<n; --> 7b

    // cout << setw(6) << left << n; --> |-123      |
    // cout << setw(6) << internal << n; --> |-     123|
    // cout << setw(6) << right << n; --> |     -123|

    // cout << noshowpoint << d1 << " " << d2 --> 100 100
    // cout << showpoint << d1 << " " << d2 --> 100.000 100.120

    // cout << fixed << number --> 123.45678
    // cout << scientific << number --> 123.45678E+02

    // cout << boolalpha << fun --> true
    // cout << noboolalhpa << number --> 1

    return 0;
}

int output_manipulators_with_iomanip() {

    int number {123};

    // set output width to 5
    cout << setw(5) << number; // |     123|

    // fill output with char
    cout << setfill('*') << setw(5) << number; // |**123|

    // set output width to 5
    cout << setprecision(7) << number; // 123.4567

    // NOTE: to find out current precision
    // 'streamsize' is a special datatype, but is simply an int
    streamsize prec = cout.precision();


}
