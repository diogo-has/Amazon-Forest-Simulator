#pragma once
#include "Obstaculo.h"

namespace Entidades {
	namespace Obstaculos {
		class Plataforma : public Obstaculo {

			private:
				int altura;
			public:
				Plataforma(float x, float y) : Obstaculo(x, y) { executar(); }
				Plataforma():Obstaculo(), altura(1) {}
				~Plataforma() {}
				void executar () {
					imagem.loadFromFile("plataforma.png"); //temporario
					sprite.setTexture(imagem);
					sprite.setPosition(400.f,550.f);
				
				}
				void obstaculizar( Personagens::Jogador* p) {}
				void salvar(){}

		};
	}
}