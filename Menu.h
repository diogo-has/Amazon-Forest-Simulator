#pragma once

#include "GerenciadorGrafico.h"
#include "Jogo.h"
#include "Ente.h"


class Menu : public Ente {

	private:
		Jogo* pJogo;
		sf::FloatRect hitbox_jogar;
		sf::RectangleShape shape;
		//sf::FloatRect hitbox_opcoes;
		Menu* psel; // temporario?
	public:
		Menu();
		Menu(Jogo* pj);
		~Menu();
		void executar();
		void escolherfase();
		void verificaclique();
		void mostrarhitboxes();
		Menu* getpsel() const;
		
};