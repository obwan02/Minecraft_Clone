#pragma once
#include <glad/glad.h>

struct VertexAttrib
{
public:
	VertexAttrib(GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint);

	const GLuint index;
	const GLint componentCount;
	const GLenum type;
	const GLboolean normalised;
	const GLsizei stride;
	const void* offset;
};

