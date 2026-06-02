#pragma once

#include "GerenciadorGrafico.h"
#include "Jogo.h"
#include "Ente.h"

class Menu : public Ente {

	private:
		Jogo* pJogo;
	public:
		Menu();
		Menu(Jogo* pj);
		~Menu();
		void executar();
		void escolherfase();
		void verificaclique();
};