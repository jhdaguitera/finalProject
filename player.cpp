/*****************************************************************************************************
Name: Jason Daguitera
CS 162
File: heman.cpp
Description: this the file for implementing heman class objects and methods

****************************************************************************************************/
#include <iostream>
#include "player.hpp"
#include <ctime>
#include <cstdlib>
#include <string>

//default constructor
Player::Player()
{
	type = "Player";
	strength = 100; //starts at 100% health
	playerLost = false;
}

void Player::data()
{
	type = "Player";
	strength = 100; //starts at 100% health
	playerLost = false;

}
//getters
std::string Player::getType()
{
	return type;
}

int Player::getWeapon()
{
	
}

int Player::getPotion()
{
	return potion;
}


int Player::getKey()
{
	return key;
}


int Player::getCoin()
{
	return coin;
}



double Player::getStrength()
{
	return strength;
}




/***********************************************************************************************************
recoveryPotion() method

***********************************************************************************************************/
//recovers 20% life for winner of battle
int Player::recoveryPotion()
{
	strength = strength + (strength * 0.20);
	return strength;
}


/***********************************************************************************************************
checkLost() method

***********************************************************************************************************/
//method returns if player has died and has lost game
bool Player::checkLost()
{
	return playerLost;
}


/**********************************************************************************************************
attackPoints() method

***********************************************************************************************************/
//method for infliciting damage on boss
int Player::attackPoints()
{
	int attackType = 0;

	if (attackType == weapon) //use weapon on zombie
	{
		int damage = 30;
		return damage; //30 points damage
	}

	else if (attackType != weapon) //punching zombie
	{
		int damage = 10; //10 points damage
		return damage;
	}






/**********************************************************************************************************
defensePoints() method

***********************************************************************************************************/
//method for minimizing damage from a boss
int Player:: defensePoints()
{
	int block = rand() % 10 + 1;
	int percentDamage = block * 10;  //mulitplier to be used to subtract from 100% health

	return percentDamage;
}




/***********************************************************************************************************
attacker() method

***********************************************************************************************************/
//method attacks opponent

int Player::attacker()
{
	int damageInflicted = attackPoints();
	std::cout << "Player attacks and inflicts damge points of: " << damageInflicted;

	return damageInflicted;
}




/***********************************************************************************************************
defensePoints() method

***********************************************************************************************************/
//methods defends against opponent
void Player::defender(int damageReceived) //damage received = character -> attacker() method
{
	int damageResult = 0; //damage result

	int damageMax = 100; //maximum damage set to 100%
	int defender = defensePoints();

	if (damageReceived != damageMax)
	{
		std::cout << "Player is blocking attacks...current defense points is: " << defensePoints() << std::endl;
		
		damageResult = damageReceived - defensePoints();

		if (damageResult < 0)
		{
			damageResult = 0; //if damage is less than 0, then reset it to 0
			std::cout << "Player received no health damage. ";
		}

		std::cout << "Player current total damaged received is: " << damageResult << std::endl;

		strength = strength - damageResult;
		std::cout << "Current strength points: " << strength << std::endl << std::endl;



		if (strength <= 0) //health depleted to 0, you lose
		{
			std::cout << "Player died in battle...Game Over" << std::endl;

			playerLost = true;
		}


	}


	else if (damageResult == damageMax)
	{
		std::cout << "Player took an instant death blow...Game Over" << std::endl;

		playerLost = true;
	}


}
