#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
	friend std::ostream &operator <<(std::ostream &os, const Array &array);          //output 
public:
	Array(int capacity=100) : arr(new int[capacity]), capacity(capacity), size(0) {} //constructor
	Array(const Array &other);                                                       //copy constructor
	~Array() {delete [] arr;}                                                        //destructor
	Array & operator =(const Array &rhs);                                            //assignment
	int &operator [](int index);                                                     //subscript operator
	const int &operator [](int index) const;                                         //subscript operator
	Array &operator +=(int val);                                                     //+= operator  --> appends values in array
	int getSize() {return size;}
private:
	void checkCapacity();
	int *arr;
	int capacity;
	int size;
};

#endif