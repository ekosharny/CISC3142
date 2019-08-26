#include <iostream>

#include "array.h"
#include "array_exception.h"

using namespace std;

#define DEBUG true

ostream &operator <<(ostream &os, const Array &array) {
	os << "{";
	for (int i = 0; i < array.size; i++)
		os << array.arr[i] << (i < array.size-1 ? ", " : "");
	os << "}";
	return os;
}

//COPY CONSTRUCTOR
Array::Array(const Array &other) : arr(new int[other.capacity]), capacity(other.capacity), size(other.size) {
	for (int i = 0; i < size; i++) 
		arr[i] = other.arr[i];
}

//ASSIGNMENT
Array &Array::operator =(const Array &rhs) {
	if (this == &rhs) return *this;
	delete [] arr;
	size = rhs.size;
	capacity = rhs.capacity;
	int *arr = new int[capacity];
	for (int i = 0; i < size; i++) 
		arr[i] = rhs.arr[i];
	return *this;
}

int &Array::operator [](int index) {
	if (index < 0 || index >= size) throw ArrayException("Index out of bounds");
	return arr[index];
}

const int &Array::operator [](int index) const {
	if (index < 0 || index >= size) throw ArrayException("Index out of bounds");
	return arr[index];
}

Array &Array::operator +=(int val) {
	checkCapacity();
	arr[size] = val;
	size++;
	return *this;
}

void Array::checkCapacity() {
	if (size < capacity) return;

	capacity *= 2;
	int *newArr = new int[capacity];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	delete [] arr;
	arr = newArr;
	if (DEBUG) cerr << "Increased array capacity to " << capacity << endl;
}