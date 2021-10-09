/*
    pay.hpp

    Declaration of pay functions
*/

#ifndef INCLUDE_PAY_HPP
#define INCLUDE_PAY_HPP

// pay based on hours and rate
// return -1 if hours or rate are negative
double pay(double hours, double rate);

// pay based on hours and rate
// return -1 if hours or rate are negative
int pay(double hours, double rate, double& amount);

#endif
