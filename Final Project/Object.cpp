#include "Object.hpp"

//Object types 1 = Holy Grail, 2 = Coconuts, 3 = Duck
Object::Object(int type, std::string description)
{
	this->type = type;
	this->description = description;
}

Object::~Object()
{
}
