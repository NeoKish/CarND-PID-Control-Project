#include "PID.h"
#include <iostream>
/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp=Kp_;
  Kd=Kd_;
  Ki=Ki_;

}

void PID::initValues(double prev_cte_,double sum_cte_){
  
//   Initialise the values
  prev_cte=prev_cte_;
  sum_cte=sum_cte_;
  initFlag=false;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */

  sum_cte=sum_cte+cte;
  double diff_cte=cte-prev_cte;
  prev_cte=cte;
  
  p_error=-Kp*cte;
  i_error=-Ki*sum_cte;
  d_error=-Kd*diff_cte;
  

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
//   return p_error; 
//   return p_error+d_error; 

  return p_error+d_error+i_error;  // TODO: Add your total error calc here!
  
}