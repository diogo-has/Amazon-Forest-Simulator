#pragma once
#include "Ente.h"
#include <ostream>

namespace Entidades {
	class Entidade:public Ente {
	protected:
		int x;
		int y;
		//std::ostream buffer;
		void salvarDataBuffer();

	public:
		Entidade();
		virtual ~Entidade();

		virtual void executar() = 0;
		virtual void salvar() = 0;
		
	};
}

