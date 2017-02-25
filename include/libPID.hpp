/** @file lib.hpp
 *  @brief Library for class PID.
 *
 *  @author Sherif Shazly (sshazly)
 *  @copyright University of Maryland (ENPM808X)
 *  @bug No known bugs.
 */

#pragma once
#include<iostream>
#include <cmath>
using namespace std;

// Define the PID class with variable kp, kd, ki
class PID
{
	public:
		void setGain(double _kp, double _ki, double _kd);
		double getKi();
		double getKp();
		double getKd();
		double calculate(double setpoint, double pv,double time);
	private:
		double kp;					///<kp
		double kd;					///<ki
		double ki;					///<kd
		double preError;                                ///< previous error
    	 	double preIntegral;                             ///< previous integral
};

// subfunction to set the private gain variables
void PID::setGain(double _kp, double _ki, double _kd)
{
	this->kp = _kp;
	this->ki = _ki;
	this->kd = _kd;
}

// subfunction to get the private gain variable Ki
double PID::getKi()
{
	return (ki);
}

// subfunction to get the private gain variable Kp
double PID::getKp()
{
	return (kp);
}

// subfunction to get the private gain variable Kd
double PID::getKd()
{
	return (kd);
}

// subfunction to calculate the increment neccessary to converge previous value (pv) to setpoint
double PID::calculate(double setpoint, double pv,double time)
{
	//double output = setpoint - pv ;

	// Calculate error
    	double error = setpoint - pv;

    	// Proportional term
    	double Pout = kp * error;

    	// Integral term
    	preIntegral += error * time;
    	double Iout = ki * preIntegral;

    	// Derivative term
    	double derivative = (error - preError) / time;
    	double Dout = kd * derivative;

    	// Calculate total output
    	double output = Pout + Iout + Dout;

    	// Save error to previous error
    	preError = error;

	return output;
}

