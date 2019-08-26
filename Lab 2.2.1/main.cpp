#include <iostream>

#include "Calc.h"

using namespace std;

int main() {

    string op="";
    double val;
    Calc a;
    double * pointer;
    
    cout<<"Accumulator is "<<a.get()<<endl;
    while(op!="Q"){
        cout<<"operation: ";
        cin>>op;
        if(op=="+" || op=="-" || op=="*" || op=="/"){
            cout<<"value: ";
            cin>>val;
            if(op=="+"){
                a.add(val);
                cout<<"Accumulator is "<<a.get()<<endl;}
            else if(op=="-"){
                a.sub(val);
                cout<<"Accumulator is "<<a.get()<<endl;}
            else if(op=="*"){
                a.mul(val);
                cout<<"Accumulator is "<<a.get()<<endl;}
            else {
                a.div(val);
                cout<<"Accumulator is "<<a.get()<<endl;}
        }
        else if(op=="C"){
            a.clear();
            cout<<"Accumulator is "<<a.get()<<endl;
        }
        else if(op=="S"){
            a.store();
            cout<<"Accumulator is "<<a.get()<<endl;
        }
        else if(op=="R"){
            a.recall();
            cout<<"Accumulator is "<<a.get()<<endl;
        }
    }
    cout<<"Goodbye";
    
    return 0;
}

