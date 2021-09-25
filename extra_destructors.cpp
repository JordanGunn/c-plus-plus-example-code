//
// Created by Home on 9/25/2021.
//


// A destructor is the opposite of a constructor.
// It is called when the object of a class is no longer in use.
// The object is destroyed and the memory it occupied is now
// free for future use.
//
//C++ does not have transparent garbage collection like Java.
// Hence, in order to efficiently free memory, we must specify
// our own destructor for a class.
//
//In this destructor, we can specify the additional operations
// which need to be performed when a class object is deleted.
//
//A class destructor can be created in a similar way to the constructor,
// except that the destructor is preceded by the '~' keyword.

#include <iostream>
#include <string>
using namespace std;

class Collector {
    int * list;
    int size;
    int capacity;

public:
    // Default constructor
    Collector(){
        // We must define the default values for the data members
        list = nullptr;
        size = 0;
        capacity = 0;
    }

    // Parameterized constructor
    Collector(int cap){
        // The arguments are used as values
        capacity = cap;
        size = 0;
        list = new int[capacity];
    }

    bool append(int v){
        if (size < capacity) {
            list [ size++ ] = v;
            return true;
        }
        return false;
    }

    // A simple print function
    void dump(){
        for(int i = 0 ; i < size ; i++) {
            cout << list[i] << " ";
        }
        cout << endl;
    }

    ~Collector(){
        cout << "Deleting the object " << endl;
        if (capacity > 0)
            delete[] list;
    }
};

// Our Collector class has a heap-allocated array list,
// an int representing its capacity and the current number of elements in it (size).
// The default constructor sets the list pointer to a safe default (nullptr),
// size and capacity to 00. An append() function is defined to append data to a
// Collector object.

// It returns true if space is available in the array, or false otherwise.
//
//The destructor frees the list using the delete keyword, after checking that
// some space was actually allocated to it.
//
//In main(), we are creating a Collector object with enough space for 10 integers,
// then try to push 1515 integers into it while displaying the success (11)
// or failure (00) status.



// ** DESTROYING OBJECTS IS IMPORTANT **
//If we don’t deallocate the memory for the objects which are not in use,
// we will end up with memory leaks and no space for our application to
// work long term.