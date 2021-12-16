#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  PID::Kp = Kp_;
  PID::Ki = Ki_;
  PID::Kd = Kd_;

  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
  step = 1;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  if(step == 1)
    p_error = cte;
  
  d_error = (cte - p_error);
  p_error = cte;
  i_error += cte;
  step = 2;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return p_error*PID::Kp + i_error*PID::Ki + d_error*PID::Kd;  // TODO: Add your total error calc here!
}