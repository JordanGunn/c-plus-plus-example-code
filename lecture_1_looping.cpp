//
// Created by Home on 9/9/2021.
//

#include <iostream>

int whileLoopExample() {

    int count = 1;

    while (count <= 10) {
        std::cout << "Hello there!" << std::endl;
        count++;
    }
}

int forLoopExample() {

    for (int i = 1; i < 0; i++) {
        std::cout << "Hello there!" << std::endl;
    }
}
