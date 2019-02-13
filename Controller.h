#pragma once
#include <string>

class Controller
{
public:
	Controller(std::string title, unsigned int width, unsigned int height);
	~Controller();

	void ProcessArgs(int argc, char** argv);

	const std::string title;
	const unsigned int width, height;
};

