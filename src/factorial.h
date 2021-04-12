#ifndef FACTORIAL_H
#define FACTORIAL_H

namespace FACTORIAL_H
{
    unsigned int Factorial( unsigned int number) {
        return number <=1 ? number : Factorial(number-1)* number;
    }
}

#endif