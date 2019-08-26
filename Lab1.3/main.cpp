#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int findLast(int val){
    ifstream file("numbers.txt");
    int position = 0;
    for(int i=0; i<12; i++){
        int values;
        file>>values;
        if(val==values)
            position = i+1;
    }
    return position;
}

int main() {
    int a;
    int value;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    while(a!=999){
        value = findLast(a);
        if(value!=0)
            cout<<a << " last appears in the file at position " <<value <<endl;
        else
            cout<<a << " does not appear in the file" <<endl;
        
        cout<<"Enter a number: "<<endl; 
        cin>>a;
    }
    return 0;
}