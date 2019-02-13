#include "VBO.h"

VBO::VBO(GLuint size)
{
	_size = size;
	
	GL_CALL(glGenBuffers(1, &_id));
	GL_CALL(glBindBuffer(GL_ARRAY_BUFFER, _id));
	GL_CALL(glBufferData(GL_ARRAY_BUFFER, size, NULL, GL_STREAM_DRAW));
}

VBO::VBO(GLuint size, void* init_data) 
{
	_size = size;

	GL_CALL(glGenBuffers(1, &_id));
	GL_CALL(glBindBuffer(GL_ARRAY_BUFFER, _id));
	GL_CALL(glBufferData(GL_ARRAY_BUFFER, size, init_data, GL_STREAM_DRAW));
}

void VBO::bufferSubData(void* data, GLuint offset, GLuint size) 
{
	bind();
	GL_CALL(glBufferSubData(GL_ARRAY_BUFFER, offset, size, data));
}

void VBO::bind() const {
	GL_CALL(glBindBuffer(GL_ARRAY_BUFFER, _id));
}

void VBO::unbind() {
	GL_CALL(glBindBuffer(GL_ARRAY_BUFFER, 0));
}

void * VBO::map()
{
	bind();
	void* data = GL_CALL(glMapBuffer(GL_ARRAY_BUFFER, GL_READ_WRITE));
	return data;
}

void VBO::orphan()
{
	bind();
	glBufferData(GL_ARRAY_BUFFER, _size, NULL, GL_DYNAMIC_DRAW);
}

void VBO::unmap(void* data) {
	bind();
	glUnmapBuffer(GL_ARRAY_BUFFER);
}
