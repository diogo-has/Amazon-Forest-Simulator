#include "FaseSegunda.h"
#include "Obstaculo.h"
#include "Inimigo.h"
#include "Plataforma.h"
#include "Tronco.h"
#include "Formigueiro.h"
#include "Tronco.h"
#include "Macaco.h"
#include "Cacador.h"
#include "Chao.h"
#include "Boitata.h"
#include <iostream>


namespace Fases {

	FaseSegunda::FaseSegunda(Entidades::Personagens::Jogador* pj1, Entidades::Personagens::Jogador* pj2) : maxBoitatas(4), maxTroncos(6) {
		tamanho = 7;
		GC.setJogador(1, pj1);
		if (pj2) {
			GC.setJogador(2, pj2);
			singleplayer = false;
		}
		else
			singleplayer = true;
		lista_ents.incluir(static_cast<Entidades::Entidade*>(pj1));
		lista_ents.incluir(static_cast<Entidades::Entidade*>(pj2));
		criarObstaculos();
		criarInimigos();
		imagem.loadFromFile("sprites/background_fase2.png");
		tipoChao = 2;
		criarCenario();
		//imagem.setRepeated(true);
		//background.setTexture(imagem);
		//background.setTextureRect(sf::IntRect(0, 0, int(LARGURA_TELA * tamanho), imagem.getSize().y));
		//background.setPosition(0.f, 0.f);
		//thud.loadFromFile("sprites/3hearts.png");
		//HUD.setTexture(thud);
		//HUD.setPosition(20.f, 20.f);
		//HUD.setScale(3, 3);
	}

	FaseSegunda::~FaseSegunda() {

	}

	void FaseSegunda::criarInimigos() {

		criarBoitatas();
		criarMacacos();


	}
	void FaseSegunda::criarBoitatas() {
		//int qntCacadores = MIN_RAND_ENTIDADES + (std::rand() % (maxCacadores - MIN_RAND_ENTIDADES + 1));

		//int qnt_lugares = tamanho;
		//set<int> lugares;
		//while (lugares.size() < qntCacadores) {
		//	int lugarCacador = std::rand() % qnt_lugares;
		//	lugares.insert(lugarCacador);
		//}
		//set<int>::iterator it;
		//for (it = lugares.begin(); it != lugares.end(); it++) {
		//	Entidades::Personagens::Cacador* c = new Entidades::Personagens::Cacador;
		//	lista_ents.incluir(static_cast<Entidades::Entidade*>(c));
		//	GC.incluirInimigo(c);
		//	c->setPosicao({ 700.f + ((*it) * LARGURA_TELA), 200.f });
		//}
	}
	void FaseSegunda::criarObstaculos() {
		criarTroncos();
		criarPlataformas();

	}
	void FaseSegunda::criarTroncos() {
		//int qntFormigueiros = MIN_RAND_ENTIDADES + (std::rand() % (maxFormigueiros - MIN_RAND_ENTIDADES + 1));

		//int qnt_lugares = tamanho;
		//set<int> lugares;
		//while (lugares.size() < qntFormigueiros) {
		//	int lugarFormigueiro = std::rand() % qnt_lugares;
		//	lugares.insert(lugarFormigueiro);
		//}
		//set<int>::iterator it;
		//for (it = lugares.begin(); it != lugares.end(); it++) {
		//	Entidades::Obstaculos::Formigueiro* f = new Entidades::Obstaculos::Formigueiro;
		//	lista_ents.incluir(static_cast<Entidades::Entidade*>(f));
		//	GC.incluirObstaculo(f);
		//	f->setPosicao({ (200.f + (std::rand() % 401)) + ((*it) * LARGURA_TELA), 447.f });
		//}
	}

	void FaseSegunda::executar() {
		pGG->desenhaBackground(&background);
		lista_ents.percorrer();
		GC.executar();
		//lista_ents.desenhar();
		pGG->desenhaHUD(&HUDp1);
		if (!singleplayer)
			pGG->desenhaHUD(&HUDp2);

	}

}
