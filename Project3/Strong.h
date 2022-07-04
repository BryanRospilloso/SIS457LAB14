//Creamos nuestro estado Strong derivada de la clase Player_State
#pragma once
#include "Player_State.h"

class Strong : public Player_State {

public:
	Strong(Player* player)
		:Player_State(player) {}

	void ButtonPressed() override;
};