//Interface Player_State
#pragma once

class Player; 

class Player_State {

public:
	//Declara el constructor lo inicializa y crea un puntero a player de tipo Player
	Player_State(Player* player)
		: _player(player) {}
	//Crea un metodo virtual puro
	virtual void ButtonPressed() = 0;

protected:
	//Crea una puntero a la variable _player de tipo Player 
	Player* _player;
};