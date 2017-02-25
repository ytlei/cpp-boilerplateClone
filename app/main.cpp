/** @file main.cpp
 *  @brief Runs PID controller in forloop (2 iterations) and prints.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright University of Maryland (ENPM808X)
 *  @bug No known bugs.
 */

#include <iostream>
//#include </home/viki/cppSherif/cpp-boilerplateClone/include/lib.hpp>
#include <libPID.hpp>
#include <stdio.h>

int main()
{
   PID pid; // Declare pid as class PID
   pid.setGain(0,0,0); // Set gain values (pointless, not used in calculation)
    double val = 5; // initial value (starting point)
    for (int i = 0; i < 2; i++) {
        double inc = pid.calculate(0, val,1); // Calculate increment
        printf("val:% 7.3f inc:% 7.3f\n", val, inc); //Print values to console
        val += inc; // add increment to dynamic value
    }

    return 0;
}
