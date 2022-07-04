#include "Player.h"
#include "Vulnerable.h"
#include "Strong.h"

Player::Player(int health)
	: _health(health) {
	//A nuestras variables _state y _state1 las igualamos a nuestros estados Strong y Vulnerable respectivamente y le decimos que esos estados corresponden a nuestro Player
	_state = new Strong(this);
	_state1 = new Vulnerable(this);
}

void Player::ButtonPressed() {
	//A nuestro Player le pasamos los dos estados y cuando llamamos a la funcion ButtonPressed nuestro player cambia a esos dos estados
	this->_state->ButtonPressed();
	this->_state1->ButtonPressed();
}
