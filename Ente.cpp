#include "Ente.h"

Ente::Ente() : id(-1), imagem(), sprite() {
	imagem.loadFromFile("temp.png"); // TEMPORARIO
	sprite.setTexture(imagem);
}
Gerenciadores::GerenciadorGrafico* Ente::pGG = nullptr;

Ente::~Ente() {
	id = -1;
}


void Ente::desenhar() {
	pGG->desenharEnte(this);
}

const sf::Sprite* Ente::getSprite() {
	return &sprite;
}

void Ente::setGG(Gerenciadores::GerenciadorGrafico* pG) {
	pGG = pG;
}
