/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: space.cpp
Description: this the file for implementing space class objects and methods

****************************************************************************************************/
#include <iostream>
#include <string>
#include "space.hpp"

void Space::setLinkedSpace(Space* top, Space* right, Space* bottom, Space* left)
{
	this->top = top;
	this->right = right;
	this->bottom = bottom;
	this->left = left;
}