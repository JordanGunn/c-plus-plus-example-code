//
// Created by Home on 9/9/2021.
//

#include <iostream>

#include "inputAndOutput.hpp"

// // // // // // // // // // // // //
// INPUT OUTPUT LIBRARY (iostream)  //
// // // // // // // // // // // // //

// C++ does not define any statements for doing input and output
// instead C++ includes an extensive standard library that provides
// IO and many other facilities.

// The iostream library defines four IO objects:
// 1. cin   --> standard input (of type istream)
// 2. cout  --> standard output (of type ostream)
// 2. cerr  --> standard output (of type ostream)
// 2. clog  --> standard output (of type ostream)

// Example of use:

int cOutExample() {

    int n1 = 0, n2 = 0;

    // 'std' is the standard library
    // '::' is the scope operator
    // '<<' is the output operator
    // 'std::endl' is a string **manipulator** that adds a new line
    // NOTE: **We insert a NEW output operator WHENEVER THE TYPE CHANGES
    //       **Below, the first argument to the input operator is a string
    //       **Whereas, the second argument is a manipulator. Thus, two operators.
    std::cout << "Enter two numbers:\t" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "The sum of " << n1 << " and " << n2 <<
              " is " << n1 + n2 << std::endl;

    return 0;
}