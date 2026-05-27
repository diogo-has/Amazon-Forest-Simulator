#include "Ente.h"

Ente::Ente() : id(-1), imagem(), sprite() {
	imagem.loadFromFile("sprites/p1.png"); // TEMPORARIO
	sprite.setTexture(imagem);

	// Define a origem do sprite como sendo centro da imagem
	sf::FloatRect bounds = sprite.getLocalBounds();
	sprite.setOrigin(bounds.width / 2.0f, bounds.height / 2.0f);

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

void Ente::espelhar(bool esp) {
	if (esp)
		sprite.setScale(-1.0f, 1.0f);
	else
		sprite.setScale(1.0f, 1.0f);
}

void Ente::setGG(Gerenciadores::GerenciadorGrafico* pG) {
	pGG = pG;
}
