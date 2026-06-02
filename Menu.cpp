#include "Menu.h"

Menu::Menu() : Ente(), pJogo(NULL) {
	imagem.loadFromFile("sprites/jogar.png");
	sprite.setTexture(imagem);
	sprite.setTextureRect(sf::IntRect(0, 0, 408, 136));
	sprite.setPosition(225.f, 255.f);
}

Menu::Menu(Jogo* pj): hitbox_jogar(225,225,200,50) //hitbox_opcoes(0.f, 0.f, 200.f, 200.f) {
{
	pJogo = pj;
	imagem.loadFromFile("sprites/jogar.png");
	sprite.setTexture(imagem);
	sprite.setTextureRect(sf::IntRect(0, 0, 408, 136));
	sprite.setPosition(215.f, 255.f);
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
	if (hitbox_jogar.contains(mundoPos) ){
		pJogo->setAtual(1);
	}
}

