//
// Created by Home on 9/25/2021.
//



#include <iostream>
using namespace std;



void bad_pointer_arithmetic() {
    int *p = new int(10);
    cout << "p: " << p << endl;
    cout << "value of p: " << *p << endl << endl;

    p = p + 1;
    cout << "p: " << p << endl;
    cout << "value of p: " << *p << endl << endl;

//    As we can observe, incrementing p actually increments its address.
//    Since it is an integer pointer, the address jumps 4 bytes ahead
//    (the size of an integer is 4 bytes).
//
//    The value of p becomes 0 which represents null or an empty space.
//    This can be a dangerous practice since the new space may already be
//    in use by another variable or process. Accessing this memory could
//    cause a crash!
}

void array_and_pointer_arithmetic() {
    int *arr = new int[10];

    for(int i = 0; i < 10 ; i++){
        arr[i] = i;
    }

    cout << "arr[0]: " << *arr << endl;
    cout << "arr[3]: " << *(arr + 3) << endl;


    // The code above shows a dynamic array of size 10 being
    // created by the pointer arr. A for loop is used to assign values at all
    // the indices. In the end, we can see that arr[0] is equivalent to *(arr + 0).

    // *****
    // Pointers also support ++, --, += and -= operators.
    // **********

}