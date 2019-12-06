
/*********************************************************************************************************************
Name: Jason Daguitera
CS 162
File: main.cpp
Description: this the main file for the He-Man Adventures games

**********************************************************************************************************************/


#include <iostream>
#include "menu.hpp"


int main()
{

	
		int choose = 0;

		do
		{
			std::cout << std::endl << std::endl;
			std::cout << "************************************* He-Man Adventures ************************************" << std::endl << std::endl;
			std::cout << "(1) Play" << std::endl;
			std::cout << "(2) Exit" << std::endl;

			std::cout << "\n\nEnter your choice: ";
			std::cin >> choose;

			//validate user input
			while (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid...try again" << std::endl;
				std::cin >> choose;
			}
			//validate user input
			while (choose < 1 || choose > 2)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid...try again" << std::endl;
				std::cin >> choose;
			}

			if (choose == 1)
			{
				menu();
			}
			else if (choose == 2)
			{
				std::cout << "Play again?" << std::endl;
				std::cout << "(1) Play" << std::endl;
				std::cout << "(2) Exit" << std::endl;
				std::cin >> choose;
			}


		} while (choose == 1);


		std::cout << "you quit" << std::endl;


		return 0;


}
