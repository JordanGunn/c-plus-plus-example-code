//
// Created by Home on 9/25/2021.
//

// Scope Resolution Operator --> '::'
// The scope resolution operator (::) allows us to simply declare the member functions in the
// class and define them elsewhere in the code.
//
// To use the scope resolution operator, we follow a certain syntax:

class Rectangle {
    int length;
    int width;

public:


    int area() const;

    // get and set for length
    void setLength(int l);
    int getLength() const;

    // get and set for width
    void setWidth(int w);
    int getWidth() const;
};

int Rectangle::area() const{
    return length * width;
}

//'get' and 'set' are two types of functions are very popular in OOP.
// A get function retrieves the value of a particular data member, whereas
// a set function sets its value.
//
//It is a common convention to write the name of the corresponding member variable
// with the get or set command. We have already seen an example of a set function in the code
// above. setLength(int l) is a perfect example.
//
//Let’s write get and set functions for the length and width in our Rectangle class:


void Rectangle::setLength(int l){
    length = l;
}
int Rectangle::getLength() const{
    return length;
}

void Rectangle::setWidth(int w){
    width = w;
}
int Rectangle::getWidth() const{
    return width;
}