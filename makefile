output: main.o bathroom.o bedroom1.o bedroom2.o diningroom.o foyer.o gameplay.o kitchen.o livingroom.o map.o player.o space.o 
	g++ main.o bathroom.o bedroom1.o bedroom2.o diningroom.o foyer.o gameplay.o kitchen.o livingroom.o map.o player.o space.o -o output

main.o: main.cpp
	g++ -c main.cpp

bathroom.o: bathroom.cpp bathroom.hpp
	g++ -c bathroom.cpp

bedroom1.o: bedroom1.cpp bedroom1.hpp
	g++ -c bedroom1.cpp

bedroom2.o: bedroom2.cpp bedroom2.hpp
	g++ -c bedroom2.cpp

diningroom.o: diningroom.cpp diningroom.hpp
	g++ -c diningroom.cpp

foyer.o: foyer.cpp foyer.hpp
	g++ -c foyer.cpp

gameplay.o: gameplay.cpp gameplay.hpp
	g++ -c gameplay.cpp

map.o: map.cpp map.hpp
	g++ -c map.cpp


livingroom.o: livingroom.cpp livingroom.hpp
	g++ -c livingroom.cpp

kitchen.o: kitchen.cpp kitchen.hpp
	g++ -c kitchen.cpp

player.o: player.cpp player.hpp
	g++ -c player.cpp

space.o: space.cpp space.hpp
	g++ -c space.cpp

clean:
	rm *.o output
