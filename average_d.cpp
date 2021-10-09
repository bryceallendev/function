/*
    average_d.cpp

    Demonstration program for average functions
*/

#include "average.hpp"
#include <cassert>

int main() {

    {
        int test1 = 100;
        int	test2 = 60;

        auto testavg = average(test1, test2);

        assert(testavg == 80.0);
    }

    return 0;
}
