#include "MemLeaks.h"
#include "my_string.h"
#include <iostream>


int main(){
	ReportMemoryLeaks();

	my_string name = "hello";

	printf(name);

	getchar();
	return 0;
}