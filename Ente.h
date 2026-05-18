#pragma once
#include "GerenciadorGrafico.h"

class Ente {
protected:
	int id;
	static Gerenciadores::GerenciadorGrafico* pGG;
	sf::Texture imagem;
	sf::Sprite sprite;

public:
	Ente();
	virtual ~Ente();

	virtual void executar() = 0;
	void desenhar();

	const sf::Sprite* getSprite();

	static void setGG(Gerenciadores::GerenciadorGrafico* pG);

};

