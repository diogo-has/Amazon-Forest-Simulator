#pragma once
#include "Obstaculo.h"

namespace Entidades {
	namespace Obstaculos {
		class Formigueiro :public Obstaculo {
			private:
				int dano;
			public:
				Formigueiro( float x, float y) : Obstaculo(x,y), dano(1) { danoso = true; }
				Formigueiro() : Obstaculo(), dano(1) { danoso = true; }
				~Formigueiro() {}
				void executar() {
					imagem.loadFromFile("sprites/Formigueiro.png"); //temporario
					sprite.setTexture(imagem);
					sprite.setPosition(400.f, 500.f); //mudar depois

				}
				void obstaculizar(Personagens::Jogador* p) {}//TODO
				void salvar() {}//TODO
				void salvarDataBuffer() {}

		};

	}

}