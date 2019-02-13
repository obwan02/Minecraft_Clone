#include "VertexAttrib.h"



VertexAttrib::VertexAttrib(GLuint index, GLint componentSize, GLenum type, GLboolean normalised, GLsizei stride, GLuint offset)
	: index(index), componentCount(componentSize), type(type), normalised(normalised), stride(stride), offset((void *)offset) 
{}
