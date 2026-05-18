#pragma once
#include <list>
#include "Entidade.h"

namespace Listas {
	class ListaEntidades {
	private:
		std::list<Entidades::Entidade*> lista; // Depois tem que fazer template lista próprio

	public:
		ListaEntidades();
		~ListaEntidades();
		void incluir(Entidades::Entidade* pE);
		void percorrer();
	};
}

