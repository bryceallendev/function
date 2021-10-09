/*
    order.cpp

    Implement order functions
*/

#include "order.hpp"

// order the two numbers into ascending order
void order(int& n1, int& n2) {
    
    if (n1 > n2) {
        auto t = n1;
        n1 = n2;
        n2 = t;
    }
}