#include "Calc.h"

Calc::Calc() {
    accumulator=0;
}

void Calc::clear(){
    accumulator=0;
}

void Calc::add(double x){
    accumulator=accumulator+x;
}

void Calc::sub(double x){
    accumulator=accumulator-x;
}

void Calc::mul(double x){
    accumulator=accumulator*x;
}

void Calc::div(double x){
    accumulator=accumulator/x;
}

double Calc::get(){
    return accumulator;
}

void Calc::store(){
    pointer=&accumulator;
    v=accumulator;
}

void Calc::recall(){
    *pointer=v;
}
