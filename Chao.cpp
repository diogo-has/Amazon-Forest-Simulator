#include "Chao.h"

namespace Entidades {
	Chao::Chao(): Entidade() {
		imagem.loadFromFile("sprites/chao.png");
		imagem.setRepeated(true);
		sprite.setTexture(imagem);
		sprite.setTextureRect(sf::IntRect(0, 0, LARGURA_TELA, imagem.getSize().y));
		sprite.setScale(2, 2);
		sprite.setPosition(0, ALTURA_TELA+5);
	}

	Chao::~Chao() {
	}

	void Chao::executar() {}

	void Chao::colidir(Personagens::Jogador* pJog) {
		pJog->setNoChao(true);
		pJog->setVelocidadeY(0.f);
		pJog->setPosicaoY(sprite.getGlobalBounds().top);
	}
	void Chao::salvar() {
	}
}



