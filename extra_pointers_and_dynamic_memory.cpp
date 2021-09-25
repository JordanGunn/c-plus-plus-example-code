//
// Created by Home on 9/25/2021.
//

#include <iostream>
using namespace std;

// How do we access the heap? Pointers.
// This is the true purpose of a pointer.
//
// It allows us to create dynamic objects using the 'new' command.
//
// The 'delete' command releases the memory reserved by a certain pointer,
// making it available for future use again.
//
// Do keep in mind that the pointer itself is stored in the stack, but
// can point to objects in both the stack and heap.


int pointers_with_new() {

    int *p = new int;   // dynamic memory reserved for an integer
    *p = 10;   // the object is assigned the value of 10
    cout << "The value of the object p points to: " << *p << endl;

    int *q = p;   // both pointers point to the same object
    cout << "The value of the object q points to: " << *q << endl;

    double *arr = new double[500]; // an array of size 500 has been created in the heap
    arr[0] = 50;
    cout << "arr[0]: " << arr[0] << endl;

    // delete pointers and free up space
    delete p, q;
    delete[] arr;
    cout << "p now points to a random value and should not be accesed: " << *p << endl;
    p = new int(5); // The pointer can now be re-used to point to something else
    cout << "The value of the object p points to: " << *p << endl;
}

// In the code above, the new objects are created during runtime
// (instead of compile time). This is an advantage since we don’t
// need to specify the amount of memory we need at compile time.