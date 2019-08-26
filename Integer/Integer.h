#ifndef Integer_H
#define Integer_H

#include <iostream>

class Integer {
	friend Integer operator +(const Integer &lhOperand, const Integer &rhOperand);
        friend Integer operator -(const Integer &lhOperand, const Integer &rhOperand);
        friend Integer operator *(const Integer &lhOperand, const Integer &rhOperand);
        friend Integer operator /(const Integer &lhOperand, const Integer &rhOperand);
        friend Integer operator %(const Integer &lhOperand, const Integer &rhOperant);
        friend bool operator ==(const Integer &lhOperand, const Integer &rhOperand);
        friend bool operator !=(const Integer &lhOperand, const Integer &rhOperand);
        friend bool operator >(const Integer &lhOperand, const Integer &rhOperand);
        friend bool operator <(const Integer &lhOperand, const Integer &rhOperand);
        friend bool operator >=(const Integer &lhOperand, const Integer &rhOperand);
        friend bool operator <=(const Integer &lhOperand, const Integer &rhOperand);
        
	friend std::ostream &operator <<(std::ostream &os, const Integer &Integer);
        friend std::istream &operator >>(std::istream &is, Integer &Integer);
        
public:
	Integer(int val = 0);
	Integer operator -();
	Integer &operator +=(const Integer &rhOperand);
        Integer &operator -=(const Integer &rhOperand);
        Integer &operator *=(const Integer &rhOperand);
        Integer &operator /=(const Integer &rhOperand);
        Integer &operator %=(const Integer &rhOperand);
        Integer &operator ++();
        Integer &operator --();
        Integer operator ++(int); //postfix
        Integer operator --(int); //postfix
        int get() const;
        int compare(const Integer &rhOperand);
private:
	int val;
};

#endif