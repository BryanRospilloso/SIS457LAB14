#include "Vulnerable.h"
#include "Player.h"
//Dentro de nuestra funcion ButtonPressed en terminos generales lo que hacemos es pasarle la Salud(Health) de nuestro Player y le restamos en 10
void Vulnerable::ButtonPressed() {
	this->_player->SetHealth(_player->GetHealth() - 10);
	cout << this->_player->GetHealth() << endl;
}

