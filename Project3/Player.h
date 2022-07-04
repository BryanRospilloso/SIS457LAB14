#pragma once
#include <iostream>

class Player_State;

using namespace std;

class Player {

public:
	//Crea el constructor y le pasa una variable entera health
	Player(int health);
	//Funcion que pide _health
	int GetHealth() { return this->_health; }
	//Funcion que da _health
	void SetHealth(int health) { this->_health = health; }
	//Declara la funcion ButtonPressed que ya la teniamos en nuestra interfaz para poder Definirla
	void ButtonPressed();

private:
	//Creamos una varible _health de tipo int y ademas creamos dos punteros a las variables _state y _state1 de tipo Player_State
	int _health;
	Player_State* _state;
	Player_State* _state1;
};
