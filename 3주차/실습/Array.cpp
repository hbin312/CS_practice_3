#include "Array.h"

Array::Array(int size) {
	if (size > 0) {
		data = new int[size];
		len = size;
	}
	else {
		cout << "error!" << endl;
		exit(1);
	}
}
Array::Array() {
	data = NULL;
	len = 0;
}
Array::~Array() {
	delete []data;
}
int Array::length() const {
	return len;
}
int &Array::operator [](int i) {
	static int tmp;
	if ((i >= 0) && (i < len))
	{
		return data[i];
	}
	else {
		cout << "Array bound error!" << endl;
		return tmp;
	}
}
int Array::operator [](int i) const {
	if ((i >= 0) && (i < len))
	{
		return data[i];
	}
	else {
		cout << "Array bound error!" << endl;
		return 0;
	}
}
void Array::print() {
	cout << "[ ";
	for (int i = 0; i < len; i++)
		cout << data[i] << " ";
	cout << "]" << endl;
	return;
}