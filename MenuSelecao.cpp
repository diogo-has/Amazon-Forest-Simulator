#include "MenuSelecao.h"

MenuSelecao::MenuSelecao(Jogo* pj): Menu(pj), numbotoes(5), numplayer(1), fase(1)
{
	
	imagem.loadFromFile("sprites/selfase.png");
	sprite.setTexture(imagem);
	sprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
	sprite.setPosition(0.f, 0.f);
}

MenuSelecao::~MenuSelecao()
{
}
void MenuSelecao::executar()
{
	desenhar();
}

void MenuSelecao::verificarhitboxes()
{
}
