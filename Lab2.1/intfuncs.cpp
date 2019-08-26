#include "intfuncs.h"

int max(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}

int min(int a, int b){
    if (a<b)
        return a;
    else
        return b;
}

double average(int a, int b){
    return (double)(a+b)/2;
}

int abs(int x){
    if (x<0)
        return x*-1;
    else
        return x;
}
