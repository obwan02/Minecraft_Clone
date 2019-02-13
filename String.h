#pragma once
#include "Logging.h"
#include <string.h>
#include <stdlib.h>

class String
{
public:
	String(const char* initial);
	String(unsigned int reserveSize);
	~String();

	String& operator+=(String s);
	String& operator=(const char* str);
	void reserve(unsigned int size);
	int size();

	const char* buffer();
private:
	char* _buffer;
	int _rawSize;
};

