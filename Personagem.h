#pragma once
#include "Entidade.h"
namespace Entidades {
	namespace Personagens {
		class Personagem:public Entidade {
		protected:
			int num_vidas;
			sf::Vector2f velocidade;
			sf::Vector2f aceleracao;
			float friccao;

		public:
			Personagem();
			~Personagem();

			void salvarDataBuffer();
			virtual void executar() = 0;
			virtual void salvar() = 0;
			virtual void mover() = 0;
			virtual void setVelocidadeX(float vx);
			virtual void setVelocidadeY(float vy);
			virtual void setAceleracaoX(float ax);
			virtual void setAceleracaoY(float ay);

		};
	}
}

