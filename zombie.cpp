///*********************************************************************************************************************
//Name: Jason Daguitera
//CS 162
//File: zombie.cpp
//Description: this the file for implementing for class objects and methods
//
//**********************************************************************************************************************/
//#include <iostream>
//#include "zombie.hpp"
//#include "character.hpp"
//#include <ctime>
//#include <cstdlib>
//#include <string>
//
//
////constructor
//
//Zombie::Zombie()
//{
//	type = "Zombie ";	
//	armor = 30;
//	strength = 100;
//	playerLost = false;
//	tripleAttack = 0;
//}
//
//
//void Zombie::data()
//{
//	type = "Zombie ";
//	armor = 30;
//	strength = 100;
//	playerLost = false;
//	tripleAttack = 0;
//}
//
//
//
//
////getters
//std::string Zombie::getType()
//{
//	return type;
//}
//
//
//double Zombie::getStrength()
//{
//	return strength;
//}
//
//
//
//
///***********************************************************************************************************
//checkLost() method
//
//***********************************************************************************************************/
////method returns if player has died and has lost battle - true is player lost and false is player still in game
//bool Zombie::checkLost()
//{
//	return playerLost;
//}
//
//
//
///**********************************************************************************************************
//attackPoints() method
//
//***********************************************************************************************************/
////method for attacker 
//int Zombie::attackPoints()
//{
//	int roll = rand() % 10 + 1;
//	roll = roll + (rand() % 10 + 1); 
//
//	return roll;
//}
//
///***********************************************************************************************************
//attackPlayer() method
//
//***********************************************************************************************************/
////method attacks opponent
//int Zombie::attacker()
//{
//	int damageInflicted = attackPoints();
//	std::cout << "Skeletor attack and inflicts damage of: " << damageInflicted;
//
//	return damageInflicted;
//}
//
//
///**********************************************************************************************************
//defensePoints() method
//
//***********************************************************************************************************/
////method for defender rolling dice
//int Zombie::defensePoints()
//{
//	int attackAction = 0;
//
//	if (tripleAttack == 0)					//3 minions helping
//	{
//		attackAction = rand() % 6 + 1;
//		attackAction += (rand() % 6 + 1);
//		attackAction += (rand() % 6 + 1);
//
//	}
//
//	else if (tripleAttack == 1) //lost 1 die, 2 minions helping
//	{
//		attackAction = rand() % 6 + 1;
//		attackAction += rand() % 6 + 1;
//
//	}
//	else if (tripleAttack == 2) //lost 2 die, 1 minion helping
//	{
//		attackAction = rand() % 6 + 1;
//	}
//
//	return attackAction;
//}
//
//
//
//
///***********************************************************************************************************
//defensePlayer() method
//
//***********************************************************************************************************/
////methods defends against opponent
//void Zombie::defender(int damageTaken)
//{
//
//	int damageResult = 0;
//	int damageMax = 100;
//	int defendAction = defensePoints();
//
//	if (damageTaken != damageMax)
//	{
//		std::cout << "Skeletor blocks attacks and current defense points are: " << defendAction << std::endl;
//		damageResult = damageTaken - defendAction - armor;
//
//		if (damageResult < 0)
//		{
//			damageResult = 0; //if damage is less than 0, then reset it to 0
//
//		}
//
//		std::cout << "Skeletor current damaged points received: " << damageResult << std::endl;
//
//		strength = strength - damageResult;
//		std::cout << "Current strength points: " << strength << std::endl << std::endl;
//
//
//
//		if (strength <= 0) //health depleted to 0, you lose
//		{
//			std::cout << "Skeletor dies from Battle...you have saved the world of Eternia!" << std::endl;
//
//			playerLost = true;
//		}
//
//
//
//		// Minion Power - for every 10 points  damage, only lose one defense die
//		if (strength > 10 && strength <= 20)
//		{
//			tripleAttack = 1;	// losing  1 die
//		}
//
//		else if (strength <= 10 && strength > 20)
//		{
//			tripleAttack = 2;	// lost 2 dice
//		}
//
//
//
//	}
//
//
//	else if (damageResult == damageMax)
//	{
//		std::cout << "Skeletor dies from Battle...you have saved the world of Eternia!" << std::endl;
//
//		playerLost = true;
//	}
//
//
//
//
//}
//
//
//
//
//
