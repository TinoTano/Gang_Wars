#ifndef _MY_STRING_H_
#define _MY_STRING_H_

class my_string{
	char* string;
	unsigned int capacity;

public:

	my_string(const char* str);
	~my_string();

	operator const char*() const;

};

#endif