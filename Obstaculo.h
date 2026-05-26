#pragma once
#include "Jogador.h"

namespace Entidades {
	namespace Obstaculos {
		class Obstaculo : public Entidade {
			private:
				bool danoso;
			public:
				Obstaculo( float x, float y) : Entidade(), danoso(false) {}
				Obstaculo() {}
				virtual ~Obstaculo() {}
				void salvarDataBuffer() {}
				virtual void executar() = 0;
				virtual void salvar() = 0;
				virtual void obstaculizar(Personagens::Jogador* p) = 0;
	
		};
	}
}