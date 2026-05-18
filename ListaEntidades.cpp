#include "ListaEntidades.h"

namespace Listas {
	ListaEntidades::ListaEntidades(): lista() {
		lista.clear();
	}

	ListaEntidades::~ListaEntidades() {
		lista.clear(); // Desalocar?
	}

	void ListaEntidades::incluir(Entidades::Entidade* pE) {
		lista.push_back(pE); // Mudar com o template próprio 
	}

	void ListaEntidades::percorrer() {
		std::list<Entidades::Entidade*>::iterator it;
		for (it = lista.begin(); it != lista.end(); it++) {
			(*it)->desenhar();
		}
	}
}
