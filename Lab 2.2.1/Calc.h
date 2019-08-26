#ifndef CALC_H
#define CALC_H

class Calc {

  private:
    double accumulator;
    double * pointer;
    double v;
    
public:
    Calc();
    void clear();
    void add(double);
    void sub(double);
    void mul(double);
    void div(double);
    double get();
    void store();
    void recall(); 
    
};

#endif /* CALC_H */

