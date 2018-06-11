#pragma once
#include <string>

class Object
{
private:
	int type;
	std::string description;

public:
	Object(int type, std::string description);
	~Object();
};

