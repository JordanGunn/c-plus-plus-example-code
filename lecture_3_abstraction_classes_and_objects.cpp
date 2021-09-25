//
// Created by Home on 9/21/2021.
//

#include <iostream>

using namespace std;


// ABSTRACTION EXAMPLE

class ImplementAbstraction {

private:

    // data members are private
    int a, b;

public:

    // modification to data mebmers is done via getters and setters
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

//int main() {
//
//    ImplementAbstraction obj{};
//    obj.set(1, 2);
//    obj.display();
//
//    return 0;
//}