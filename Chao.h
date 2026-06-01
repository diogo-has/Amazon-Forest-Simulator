#pragma once
#include "Entidade.h"
#include "Jogador.h"

namespace Entidades {
	class Chao :public Entidade {
	public:
		Chao();
		~Chao();

		void executar();
		void colidir(Personagens::Jogador* pJog);
		void salvar();
	};
}

