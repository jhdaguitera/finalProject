#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include "space.hpp"


class LivingRoom : public Space 
{
private:
	Sofa* sofa;
public:
	
	bool whereAmI();  //method telling us what room player is in
	void enterRoom(Space*prevRoom);
};


#endif