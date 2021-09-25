//
// Created by Home on 9/25/2021.
//

//In a parameterized constructor, we pass arguments to the
// constructor and set them as the values of our data members.
//
//We are basically overriding the default constructor to
// accommodate our preferred values for the data members.

#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date(){
        // We must define the default values for day, month, and year
        day = 0;
        month = 0;
        year = 0;
    }

    // Parameterized constructor
    Date(int d, int m, int y){
        // The arguments are used as values
        day = d;
        month = m;
        year = y;
    }

    // A simple print function
    void printDate(){
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

//int main(){
//    // Call the Date constructor to create its object;
//
//    Date d(1, 8, 2018); // Object created with specified values!
//    d.printDate();
//}

