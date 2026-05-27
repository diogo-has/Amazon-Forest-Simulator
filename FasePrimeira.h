#pragma once

#include "Fase.h"

namespace Fases {
	class FasePrimeira:public Fase {
	protected:
		void criarInimigos();
		void criarObstaculos();

	public:
		FasePrimeira();
		~FasePrimeira();
	};
}

