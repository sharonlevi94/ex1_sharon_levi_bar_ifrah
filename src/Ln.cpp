#include "Ln.h"
#include <cmath>
#include <iostream>

double Ln::eval(double x) {
	return log(x);
}

void Ln::print(shared_ptr<Function>myPtr)const {
    if (myPtr == nullptr)
        std::cout << "ln(x)";
    else {
        std::cout << "ln(";
        myPtr->print(nullptr);
        std::cout << ")";
    }
}

void Ln::printWithValue(double x)const {
    std::cout << "ln(" << x << ") ";
}