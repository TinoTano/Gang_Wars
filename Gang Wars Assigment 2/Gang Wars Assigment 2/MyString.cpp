#include "MyString.h"

my_string::my_string(const char* str){

	const char* s = str;

	for (capacity = 0; *str != '\0'; str++){
		capacity++;
	}

	string = new char[capacity];
	for (int i = 0; i < (capacity); i++) {
		string[i] = s[i];
	}
	string[(capacity)] = '\0';
}

my_string::~my_string() {
	delete[] string;
}

my_string::operator const char* () const{
	return string;
}