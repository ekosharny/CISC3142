#include <iostream>

#include "Integer.h"

using namespace std;

Integer::Integer(int val) : val(val) {}

int Integer::get() const{
    return val;
}

Integer &Integer::operator +=(const Integer &rhOperand) {
	val += rhOperand.val;
	return *this;
}
Integer &Integer::operator -=(const Integer& rhOperand){
    val -= rhOperand.val;
    return *this;
}
Integer &Integer::operator *=(const Integer& rhOperand){
    val *= rhOperand.val;
    return *this;
}
Integer &Integer::operator /=(const Integer& rhOperand){
    val /= rhOperand.val;
    return *this;
}

Integer &Integer::operator %=(const Integer& rhOperand){
    val %= rhOperand.val;
    return *this;
}

//prefix
Integer &Integer::operator ++(){
    ++val;
    return *this;
}

//prefix
Integer &Integer::operator --(){
    --val;
    return *this;
}

Integer operator +(const Integer &lhOperand, const Integer &rhOperand) {
	Integer temp = lhOperand;
	return temp += rhOperand;
}

Integer operator -(const Integer &lhOperand, const Integer &rhOperand){
    Integer temp = lhOperand;
    return temp -= rhOperand;
}

Integer operator *(const Integer &lhOperand, const Integer &rhOperand){
    Integer temp = lhOperand;
    return temp *= rhOperand;
}

Integer operator /(const Integer &lhOperand, const Integer &rhOperand){
    Integer temp = lhOperand;
    return temp /= rhOperand;
}


Integer operator %(const Integer &lhOperand, const Integer &rhOperand){
    Integer temp = lhOperand;
    return temp %= rhOperand;
}


Integer Integer::operator -(){
    //Integer temp = lhOperand;
    return Integer(-(val));
}

//postfix
Integer Integer::operator ++(int){
    //Integer temp = lhOperand;
    return ++val;
} 

//postfix
Integer Integer::operator --(int){
    //Integer temp = lhOperand;
    return --val;
} 

int Integer::compare(const Integer &lhOperand){
    return val-lhOperand.val;
}

bool operator ==(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val==rhOperand.val)
        return true;
    return false;
}
bool operator !=(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val!=rhOperand.val)
        return true;
    return false;
}
bool operator >(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val>rhOperand.val)
        return true;
    return false;
}
bool operator <(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val<rhOperand.val)
        return true;
    return false;
}
bool operator >=(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val>=rhOperand.val)
        return true;
    return false;
}
bool operator <=(const Integer &lhOperand, const Integer &rhOperand){
    if(lhOperand.val<=rhOperand.val)
        return true;
    return false;
}

ostream &operator <<(ostream &os, const Integer &Integer) {
	os << Integer.val;
	return os;
}
istream &operator >>(istream &is, Integer &Integer){
    is >> Integer.val;
    return is;
}