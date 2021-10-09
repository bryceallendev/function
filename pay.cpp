/*
    pay.cpp

    Implement pay functions
*/

#include "pay.hpp"

// pay based on hours and rate
// return -1 if hours or rate are negative
double pay(double hours, double rate) {
    
    if (hours < 0)
        return -1;
    if (rate < 0)
        return -1;
    
    return hours * rate;
}

// pay based on hours and rate
// return -1 if hours or rate are negative
int pay(double hours, double rate, double& amount) {
    
    if (hours < 0)
        return -1;
    if (rate < 0)
        return -1;
    
    amount = pay(hours, rate);
    
    return 0;
}