#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream file("numbers.txt");
    string line;
    int count2;
    while(getline(file, line)){
        stringstream ssin(line);
        int count;
        int total;
        int value;
        
        while(ssin >> value){
            total+=value;
            count++;
        }
        float average=((float)total/(float)count);
        cout<<"The average of the " <<count <<" Integers "<<line << " is " << fixed << setprecision(1) << average <<endl;
        count=0;
        total=0;
        count2++;
    }
    cout<< count2 <<" sets of numbers processed";
    return 0;
}