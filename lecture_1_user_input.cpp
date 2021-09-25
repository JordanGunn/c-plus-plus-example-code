//
// Created by Home on 9/12/2021.
//

#include <iostream>
#include <limits>
#include "lecture_one_user_input.hpp"

int getting_input_from_user() {

    // to get input, we imply call the extraction operator: '>>'
    int m, n;

    // for the below expression we can either type:
    // 12 34
    // or
    // 12 <enter> 34
    std::cin >> m >> n;

    return 0;
}

int handling_errors_on_user_input() {

    int n;

    // cin is 'true' is cin.fail() is 'false'
    // thus, we can wrap out cin call with an if clause

    // if failure not encountered print output
    if (std::cin >> n) {
        std::cout << n << std::endl;

    // else we can clear stdin fail bits
    // then flush out the data in stdin
    } else {
        std::cin.clear();
        std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),'\n'
                );
    };

    // using ignore in different ways
    std::cin.ignore(); // skips 1 char
    std::cin.ignore(128); // skips 128 chars
    std::cin.ignore(128, '\n'); // skips 128 chars until EOF of '\n'
 }
