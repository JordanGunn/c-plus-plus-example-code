//
// Created by Home on 9/11/2021.
//

#include <iostream>

int operators() {

    // in any expression like the one below
    // for example:
    // > 'x' is the variable
    // > '=' is the assignment operator
    // > '5' values are the operands
    // > '+' is the (smooth) operator
    int x;
    x = 5 + 5;

    // COMPOUND BITWISE OPERATORS
    int a, b, c, d, e;

    a = 2; // 10 in binary
    b = 2; // 10 in binary
    c = 2; // 10 in binary
    d = 2; // 10 in binary
    e = 2; // 10 in binary

    // ------------------------------------------------
    // shift the bits of the value 2, 1 bit over to the right
    a   >>=   1; // 10 --> 01
    // ------------------------------------------------

    // ------------------------------------------------
    // shift the bits of the value 2 1 over to the left
    b   <<=   1; // 10 --> 100
    // ------------------------------------------------

    // ------------------------------------------------
    // perform logical 'AND' of 1 & 10
    // 10
    // &=
    // 01
    // --
    // 00
    c   &=    1; // 10 &
    // ------------------------------------------------

    // ------------------------------------------------
    // perform logical 'OR' of 1 & 10
    // 10
    // |=
    // 01
    // --
    // 11
    d   |=    1;
    // ------------------------------------------------

    // ------------------------------------------------
    // perform logical 'XOR' of 1 & 10
    // 10
    // |=
    // 01
    // --
    // 11
    e   ^=    1;
    // ------------------------------------------------

    return 0;
}

int casting() {

    // we can cast one type to another using the following
    // operation and syntax
    int anInt = 1;
    float aFloat = (float) anInt;
}

