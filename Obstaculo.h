#pragma once
#include "Jogador.h"

namespace Entidades {
	namespace Obstaculos {
		class Obstaculo : public Entidade {
			protected:
				bool danoso;
			public:
				Obstaculo( float x, float y) : Entidade(), danoso(false) { }
				Obstaculo() : Entidade(), danoso(false) {}
				virtual ~Obstaculo() {}
				void salvarDataBuffer() {}
				virtual void executar() = 0;
				virtual void salvar() = 0;
				virtual void obstaculizar(Personagens::Jogador* p) = 0;
	
		};
	}
}