#include "Menu.h"

Menu::Menu() : Ente(), pJogo(NULL) {
	imagem.loadFromFile("sprites/jogar.png");
	sprite.setTexture(imagem);
	sprite.setTextureRect(sf::IntRect(0, 0, 408, 136));
	sprite.setPosition(275.f, 255.f);
}
Menu::Menu(Jogo* pj) {

	pJogo = pj;
	imagem.loadFromFile("sprites/jogar.png");
	sprite.setTexture(imagem);
	sprite.setTextureRect(sf::IntRect(0, 0, 408, 136));
	sprite.setPosition(275.f, 255.f);
}
Menu::~Menu() {

	pJogo = NULL;
}
void Menu::executar() {
	
	desenhar();
}

void Menu::verificaclique()
{
	sf::Vector2i pixelPos = sf::Mouse::getPosition(*pGG->getJanela());
	sf::Vector2f mundoPos = (*pGG->getJanela()).mapPixelToCoords(pixelPos);
	if (sprite.getGlobalBounds().contains(mundoPos)) {
		pJogo->setAtual(1);
	}
}
