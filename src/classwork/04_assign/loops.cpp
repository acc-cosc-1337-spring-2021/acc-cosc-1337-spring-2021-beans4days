//cpp
#include "loops.h"
#include <iostream>

// write function code that returns the factorial of num using a loop of your choice
// * Do not use a recursive solution to solve this problem

int factorial(int num) {

    // int num;

    for (int i = num - 1; i > 1; i--) 
    {
        num = num * i;
    }
    
    return num;

}