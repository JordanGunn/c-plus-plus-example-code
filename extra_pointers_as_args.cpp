//
// Created by Home on 9/25/2021.
//

// As we’ve learned, function arguments are usually local in scope.
// Once we return from the function, all its variables are deleted forever.
//
// One solution was to pass external variables by reference using the & operator.
// This would alter the values of the variables outside the function scope.

void pointers_as_args(int &a) { // the function takes an integer and
    //replaces the value with its square
    a = a * a;
}


// Since arrays are basically pointers to a block of memory, they are also
// passed by reference to functions. We do not need to use the & operator.


// When passing this array into the function, the original values in
// the array will be altered. I.e. there is no need to return a value.
void arrays_as_args(int arr[], int size) {
    // a function which doubles the values of all the elements in an array
    for (int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}


