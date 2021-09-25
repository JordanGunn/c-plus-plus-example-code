//
// Created by Home on 9/21/2021.
//

class Circle {
    double radius;

public:
    // this is the default constructor
    Circle();
    Circle(int);

    void set_radius(int);
    double area(void);
};

//// NOTE ABOUT CALLING OBJECTS
//void instantiate_example() {
//    Circle my_circle1; // calls the default constructor
//    Circle my_circle2(); // WARNING: THIS IS A FUNCTION PROTOTYPE
//    Circle my_circle3{}; // calls the default constructor
//}

