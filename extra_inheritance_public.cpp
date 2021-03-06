//
// Created by Home on 9/26/2021.
//

#include <iostream>
using namespace std;

// By using public inheritance, the private members of the base
// class are inaccessible in the derived class and in main. Protected
// members of the base class are accessible to the derived class but not in
// main. Public members of the base class are accessible to the derived
// class and in main.
//
// Let’s look at the implementation using public inheritance:


class Vehicle{
protected:
    string Make;
    string Color;
    int Year;
    string Model;

public:
    Vehicle(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
    }

    Vehicle(string mk, string col, int yr, string mdl){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
    }
};

class Cars: public Vehicle{
    string trunk_size;

public:
    Cars(){
        trunk_size = "";
    }

    Cars(string mk, string col, int yr, string mdl, string ts)
            :Vehicle(mk, col, yr, mdl){
        trunk_size = ts;
    }

    void car_details(){
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
    }
};

class Ships: public Vehicle{
    int Number_of_Anchors;

public:
    Ships(){
        Number_of_Anchors = 0;
    }

    Ships(string mk, string col, int yr, string mdl, int na)
            :Vehicle(mk, col, yr, mdl){
        Number_of_Anchors = na;
    }

    void Ship_details(){
        print_details();
        cout << "Number of Anchors: " << Number_of_Anchors << endl;
    }
};

//Now the Ship and Car classes have access to public member
// functions of the base class Vehicle as shown in the above illustration.
// Protected and public data members are accessible to derived classes.

//int main(){
//    Cars car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
//    car.car_details();
//
//    cout << endl;
//
//    Ships ship("Harland and Wolff, Belfast", "Black and whilte",
//               1912, "RMS Titanic", 3);
//    ship.Ship_details();
//}
