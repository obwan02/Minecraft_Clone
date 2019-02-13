#pragma once

#define GL_DEBUG

#ifdef GL_DEBUG

#include <iostream>
#define GL_CALL(x) x; int __debug__ = glGetError(); if(__debug__ != 0) std::cout << __debug__ << std::endl

#else

#define GL_CALL(x) x

#endif