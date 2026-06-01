#pragma once
#include "Ente.h"
#include <ostream>

namespace Entidades {
	class Entidade:public Ente {
	protected:
		sf::Vector2f posicao;
		sf::Vector2f velocidade;
		sf::Vector2f aceleracao;

		bool sofre_gravidade;
		void salvarDataBuffer();

	public:
		Entidade();
		virtual ~Entidade();

		virtual void executar() = 0;
		virtual void salvar() = 0;
		void gravitar();
		virtual void setVelocidadeX(float vx);
		virtual void setVelocidadeY(float vy);
		virtual void setAceleracaoX(float ax);
		virtual void setAceleracaoY(float ay);
		
	};
}

