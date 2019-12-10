
#include <iostream>
#include <vector>
#include <string>


#include "space.hpp"

class BackPack
{


public:
	Space* backPackInventory()
	{
		Space* backPack = new BackPack;
		int interact = backPack->roomMenu();



		backPack->getItem(interact);  //gets item inside chest user chose
	}
};