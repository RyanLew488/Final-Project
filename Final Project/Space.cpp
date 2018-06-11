#include "Space.hpp"

void Space::setPointers(Space* up, Space* down, Space* right, Space* left)
{
	this->up = up;
	this->down = down;
	this->right = right;
	this->left = left;
}
Space::Space()
{
}
Space::~Space()
{
}
