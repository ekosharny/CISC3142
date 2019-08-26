#include <iostream>
#include "intfuncs.h"

using namespace std;


int main() {
    
    int a;
    int b;
    cout<<"first number?\n";
    cin>>a;
    cout<<"second number?\n";
    cin>>b;
    
    while(a!=999){

    cout<<"max("<<a<<","<<b<<"): "<<max(a,b)<<endl;
    cout<<"min("<<a<<","<<b<<"): "<<min(a,b)<<endl;
    cout<<"average("<<a<<","<<b<<"): "<<average(a,b)<<endl;
    cout<<"abs("<<a<<"): "<<abs(a)<<endl;
    cout<<"abs("<<b<<"): "<<abs(b)<<endl;
    cout<<"\n";
    
    a=999;
    cout<<"first number?\n";
    cin>>a;
    cout<<"second number?\n";
    cin>>b;
    }
    
    return 0;
}

