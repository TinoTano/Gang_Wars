#ifndef __DYN_ARRAY_H__
#define __DYN_ARRAY_H__

#include <string.h>

#define DYNARRAY_BLOCK_SIZE 16

typedef unsigned int uint;


template <class T>
class dynArray{
private:
	T* buffer;
	uint capacity;
	uint num_elements;

public:

	dynArray() :
		capacity(DYNARRAY_BLOCK_SIZE),
		num_elements(0)
	{
		buffer = new T[DYNARRAY_BLOCK_SIZE];
	};
	dynArray(uint inum_elements) :
		capacity((DYNARRAY_BLOCK_SIZE)*((inum_elements / DYNARRAY_BLOCK_SIZE) + 1)),
		num_elements(0)

	{
		buffer = new T[capacity];
	}

	dynArray(const dynArray& idynarray){
		uint iarraysize = idynarray.capacity;
		buffer = new T[iarraysize];
		capacity = idynarray.capacity;
		num_elements = idynarray.num_elements;
	}

	~dynArray(){
		delete[] buffer;
	}

	void PushBack(const T& element){
		num_elements++;
		if (num_elements > capacity){
			dynArray<T> temp(*this);
			delete[] buffer;
			capacity = ((DYNARRAY_BLOCK_SIZE)*((num_elements / DYNARRAY_BLOCK_SIZE) + 1));
			buffer = new T[capacity];
			memcpy(buffer, temp.buffer, capacity*sizeof(T));
		}
		buffer[num_elements - 1] = element;

	}

	void PushBack(){
		num_elements++;
		if (num_elements > capacity){
			dynArray<T> temp(*this);
			delete[] buffer;
			capacity = ((DYNARRAY_BLOCK_SIZE)*((num_elements / DYNARRAY_BLOCK_SIZE) + 1));
			buffer = new T[capacity];
			memcpy(buffer, temp.buffer, capacity*sizeof(T));
		}
	}

	uint size()const{
		return num_elements;
	}

	T& operator[](uint index){
		return buffer[index];
	}

	void pop_back(){
		if (num_elements) delete buffer[--num_elements];
	}
};


#endif