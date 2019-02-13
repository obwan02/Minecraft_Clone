#pragma once
#include "GLDebug.h"
#include <glad/glad.h>

class VBO {
public:
	VBO(GLuint size);
	VBO(GLuint size, void* init_data);
	void bufferSubData(void* data, GLuint offset, GLuint size);
	void bind() const;
	void* map();
	void orphan();
	void unmap(void* map);

	static void unbind();
private:
	GLuint _id;
	GLuint _size;
};