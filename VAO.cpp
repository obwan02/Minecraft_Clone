#include "VAO.h"

VAO::VAO()
{
	glGenVertexArrays(1, &_id);
}

VAO::~VAO()
{
	glDeleteVertexArrays(1, &_id);
}

void VAO::enableAttrib(VertexAttrib attrib)
{
	bind();
	glEnableVertexAttribArray(loc);
}

void VAO::disableAttrib(VertexAttrib attrib)
{
	bind();
	glDisableVertexAttribArray(loc);
}

void VAO::specifyAttribPointer(VBO buffer, VertexAttrib attrib, bool enable)
{
	bind();
	buffer.bind();
	glVertexAttribPointer(attrib.index, attrib.componentCount, attrib.type, attrib.normalised, attrib.stride, attrib.offset);
	if (enable) enableAttrib(attrib.index);
}

void VAO::bind() {
	glBindVertexArray(_id);
}

GLuint VAO::id() {
	return _id;
}

void VAO::unbind() {
	glBindVertexArray(0);
}
