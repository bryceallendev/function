/*
    order_d.cpp

    Demonstration program for order functions
*/

#include "order.hpp"
#include <cassert>

int main() {
    {
        int n1 = 5;
        int n2 = 4;
        order(n1, n2);
        
        assert(n1 == 4);
        assert(n2 == 5);
        
    }

    return 0;
}
