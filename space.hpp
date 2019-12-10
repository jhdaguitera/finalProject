/*****************************************************************************************************
 Name: Jason Daguitera
 CS 162
 File: space.hpp
 Description: this the header  file for the space class objects and methods

 ****************************************************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "player.hpp"


class Space {

protected:
	//space pointers
	Space *top;
	Space *right;
	Space *left;
	Space *bottom;

	std::string nameOfRoom;

	std::vector<std::string> item;	//items inside each room


	bool statusPlayer; //true = inside current room

public:
	//getters
	Space* getTop();
	Space* getLeft();
	Space* getRight();
	Space* getBottom();

	std::string getItem(int i); //gets contents of chests

	virtual std::string getType();

	//setters
	virtual void setRight(Space*);
	virtual void setLeft(Space*);
	virtual void setTop(Space*);
	virtual void setBottom(Space*);

	//menu
	int roomMenu();

	


};

#endif 
