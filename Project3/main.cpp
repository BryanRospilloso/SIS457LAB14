#include <iostream>

#include "Player.h"


int main()
{
	//Creamos a nuestro Player con una salud inicial de 100
	Player* player = new Player(100);
	//Mostramos la salud de nuestro Player
	cout << player->GetHealth() << endl;
	//A nuestro Player con la funcion ButtonPressed podremos hacer que cambie su estado para posteriormente poder verlo en pantalla
	player->ButtonPressed();
	//player->ButtonPressed();

	cin.get();
	return 0;
}