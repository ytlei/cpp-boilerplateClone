/** @file test.cpp
 *  @brief Arbitrary tests to verify that class subfunctions behave correctly.
 *
 *  This contains two tests, the first test is the calculation which
 *  is simple subtraction. The second test is the setGain, getKi,   
 *  getKp, and getKd.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright University of Maryland (ENPM808X)
 *  @bug Test failure due to unequal values
 */

#include <gtest/gtest.h>
//#include </home/viki/cppSherif/cpp-boilerplateClone/include/lib.hpp>
#include <libPID.hpp>
// First test: pid.calculate(x,y) = x-y
TEST(calculateMethod, should_pass)
{
    PID pid;
    EXPECT_EQ(3, pid.calculate(4,1));
    EXPECT_EQ(1, pid.calculate(1,0));
}

// Second test (Ki): pid.getKi()=pid.setGain(Kp,Ki,Kd) [the Ki value]
TEST(setGainMethod, should_pass_ki)
{
    PID pid;
    pid.setGain(0,0,0);
    double ki = pid.getKi();
    EXPECT_EQ(0, ki);
};

// Second test (Kp): pid.getKp()=pid.setGain(Kp,Ki,Kd) [the Kp value]
TEST(setGainMethod, should_pass_kp)
{
    PID pid;
    pid.setGain(0,0,0);
    double kp = pid.getKp();
    EXPECT_EQ(0, kp);
};

// Second test (Kd): pid.getKi()=pid.setGain(Kp,Ki,Kd) [the Kd value]
TEST(setGainMethod, should_pass_kd)
{
    PID pid;
    pid.setGain(0,0,0);
    double kd = pid.getKd();
    EXPECT_EQ(0, kd);
};
