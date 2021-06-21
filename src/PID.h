#ifndef PID_H
#define PID_H

class PID {
 public:
  /**
   * Constructor
   */
  PID();

  /**
   * Destructor.
   */
  virtual ~PID();

  /**
   * Initialize PID.
   * @param (Kp_, Ki_, Kd_) The initial PID coefficients
   */
  void Init(double Kp_, double Ki_, double Kd_);

  /**
   * Update the PID error variables given cross track error.
   * @param cte The current cross track error
   */
  void UpdateError(double cte);

  /**
   * Calculate the total PID error.
   * @output The total PID error
   */
  double TotalError();
  
    /**
   * Initialing sum_cte and prev_values.
   * 
   */
  void initValues(double prev_cte_,double sum_cte_);
  
  bool initFlag=true;

 private:
  /**
   * PID Errors
   */
  double p_error;
  double i_error;
  double d_error;
  
  

  /**
   * PID Coefficients
   */ 
  double Kp;
  double Ki;
  double Kd;
  
   /**
   * Other values
   */ 
  double prev_cte;
  double sum_cte;
  
};

#endif  // PID_H