#pragma once
#include "Menu.h"
class MenuSelecao : public Menu
{
	private:
		int numbotoes;
		int numplayer;
		int fase;
	public:
		MenuSelecao(Jogo* pj);
		~MenuSelecao();
		void executar();
		void verificarhitboxes();
};

