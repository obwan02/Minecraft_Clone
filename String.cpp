#include "String.h"



String::String(const char * initial)
{
	_rawSize = strlen(initial) + 1;
	_buffer = (char *) malloc(_rawSize);
	strcpy(_buffer, initial);
}

String::String(unsigned int size) {
	_rawSize = size + 1;
	_buffer = (char *) calloc(_rawSize, 1);
	_buffer[0] = '\0';
}

String::~String()
{
	free(_buffer);
}

void String::reserve(unsigned int size) {
	_buffer = (char *) realloc(_buffer, size + 1);
	_rawSize = size + 1;
}

int String::size()
{
	return _rawSize - 1;
}

String& String::operator+=(String s) {
	if (_rawSize - strlen(_buffer) >= s._rawSize) {
		strcat(_buffer, s._buffer);
	}
	else {
		_buffer = (char*) realloc(_buffer, _rawSize + s._rawSize - 1);
		strcat(_buffer, s._buffer);
		return *this;
	}
}

String & String::operator=(const char * str)
{
	memset(_buffer, 0, _rawSize);
	strcpy(_buffer, str);
	return *this;
}

const char * String::buffer()
{
	return _buffer;
}
