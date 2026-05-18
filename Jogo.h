#pragma once

#include "GerenciadorGrafico.h"
#include "Jogador.h"


class Jogo {
private:
	Gerenciadores::GerenciadorGrafico gg;
	Entidades::Personagens::Jogador pJog1;

public:
	Jogo();
	~Jogo();
	void executar();
};

