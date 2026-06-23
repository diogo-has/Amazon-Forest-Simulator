#pragma once

#include "GerenciadorGrafico.h"
#include "GerenciadorColisoes.h"
#include "Jogador.h"
#include "ListaEntidades.h" //temporario
#include "FasePrimeira.h"
#include "FaseSegunda.h"
#include <string>

using std::string;

class Jogo {
private:
	Gerenciadores::GerenciadorGrafico gg;
	Entidades::Personagens::Jogador pJog1;
	Entidades::Personagens::Jogador pJog2;
	bool singleplayer;
	short int atual;
	Fases::FasePrimeira* pFase1;
	Fases::FaseSegunda* pFase2;
	std::string nomeJogador;
	bool pausado;
	sf::Text textoPausa;
	sf::Font fonte;
	void inserirRanking(const string nome, const int pontos);
	void salvarJogada();
	void resetJogadores();

public:
	Jogo();
	~Jogo();
	void executar();
	void setAtual(const short int a = 0);
	void carregarJogada();
};

