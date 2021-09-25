//
// Created by Home on 9/9/2021.
//

#include <iostream>

#include "nameSpaces.hpp"

// // // // // //
// NAMESPACES  //
// // // // // //

// A namespace is a declarative region that provides
// a scope to the identifiers inside it.

// 'Identifiers' refers to the names of types, functions, variables, etc.
// Namespaces are used to organize code into logical groups and to prevent
// collisions that can occur especially when the code base includes
// multiple libraries

// For example std:: indicates that the names 'cout' and 'cin' are defined
// inside the namespace named std.

// ============================================================

// // // // // // // // //
// 'USING' Declaration  //
// // // // // // // // //

// A 'using' declaration  lets us use a name from a namespace without
// qualifying the name with a namespace prefix (e.g. name::space)
// ------------------------------------
// | SYNTAX: >> using namespace::name;|
// ------------------------------------

// examples below of 'using'
using std::cout;
using std::cin;
using std::endl;

// the above can be simplified
using namespace  std;

int nameSpaceExample() {

    int n1 = 0;

    // Print request to console and store in var
    cout << "Enter a number:" << endl;
    cin >> n1;

    // report back to user
    cout << "The number you entered is " << n1 << endl;

    return 0;
};





