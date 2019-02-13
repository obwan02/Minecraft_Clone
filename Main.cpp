
#include <GLFW/glfw3.h>
#include "Logging.h"
#include "String.h"
#include "VBO.h"
#include "Controller.h"

int main(int argc, char** argv) {

	if (!glfwInit()) ERROR("GLFW Failed to initialise");

	system("pause");
	return 0;
}