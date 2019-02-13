#pragma once

#define DEBUG

#ifdef DEBUG

#include <iostream>
#include <Windows.h>
#define LOG(x) std::cout << x << std::endl;
#define ERROR(x) { std::cout << x << std::endl; system("pause"); exit(-1); }

#else
#define LOG(x)
#define ERROR(x)
#endif