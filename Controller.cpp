#include "Controller.h"


Controller::Controller(std::string title, unsigned int width, unsigned int height)
	: title(title), width(width), height(height)
{
}


Controller::~Controller()
{
}

void Controller::ProcessArgs(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {
		 const char* a = argv[i];

	}
}