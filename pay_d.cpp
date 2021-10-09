/*
    pay_d.cpp

    Demonstration program for pay functions
*/

#include "pay.hpp"
#include <cassert>

int main() {

    {
        double hours = 40.0;
        double rate = 15.0;
        
        double payamount = pay(hours, rate);
        
        assert(payamount == 600.0);
    }

    {
        double hours = -40.0;
        double rate = 15.0;
        
        double payamount = pay(hours, rate);
        
        assert(payamount == -1.0);
    }
    
    {
        double hours = -40.0;
        double rate = 15.0;
        double payamount;
        
        int status = pay(hours, rate, payamount);
       
        assert(status == -1.0);
        
    }
    
    {
        double hours = 40.0;
        double rate = 15.0;
        double payamount;
        
        int status = pay(hours, rate, payamount);
       
        assert(status != -1.0);
        assert(payamount == 600.0);
    }
    
    return 0;
}
