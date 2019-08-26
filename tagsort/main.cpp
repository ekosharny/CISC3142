#include <iostream>
#include <fstream>
#include "tagsort.h"

using namespace std;

int main() {
    
    int arr[10];
    int n = 0;

    ifstream inFile;
    inFile.open("numbers.txt");

    while(!inFile.eof())
    {
        inFile >> arr[n];
        n++;
    }

    inFile.close();
    
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    
    int *tags[n];
    
    for(int i=0; i<n; i++){
        tags[i]=&arr[i];
    }

    sort(tags, n);
    
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    for(int i=0; i<n; i++){
        cout<< tags[i] <<" ";
    }
    
    
    /*
    sort(arr, n);
    
    cout<<endl;
    
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    */
    return 0;
}

