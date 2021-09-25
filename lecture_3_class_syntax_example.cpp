//
// Created by Home on 9/21/2021.
//

// We can also do this:
class Circle{

    double radius;

public:
    void set_radius(int);
    double area(void);

// object is given the type my_circle
}  my_circle;



// We can also do this:
class CircleTwo{
    double radius;

public:
    void set_radius(int);
    double area(void) {
        return 3.14 * radius * radius;
    }
};