#pragma once
#include <glad/glad.h>
#include "VBO.h"
#include "VertexAttrib.h"

class VAO {
public:
	VAO();
	~VAO();

	void enableAttrib(VertexAttrib attrib);
	void disableAttrib(VertexAttrib attrib);
	void specifyAttribPointer(VBO buffer, VertexAttrib attrib, bool enable);

	void bind();
	GLuint id();
	
	static void unbind();
private:
	GLuint _id;
};