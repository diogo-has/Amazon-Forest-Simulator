#pragma once

#include "GerenciadorGrafico.h"
#include "GerenciadorColisoes.h"
#include "Jogador.h"
#include "ListaEntidades.h" //temporario

class Jogo {
private:
	Gerenciadores::GerenciadorGrafico gg;
	Entidades::Personagens::Jogador pJog1;
	Listas::ListaEntidades listaEnt; //temporario
	short int atual; // 0: Menu; 1: MenuSelecao; 2: GameOver ; 3: 1 player fase 1; 4: 2 players fase 1; 5: 1 player fase 2; 6: 2 players fase 2

public:
	Jogo();
	~Jogo();
	void executar();
	void setAtual(short int a = 0);
};

