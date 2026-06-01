#include "ListaEntidades.h"
#include <iostream>


namespace Listas {
	ListaEntidades::ListaEntidades() : lista() {
		lista.limpar();
	}

	ListaEntidades::~ListaEntidades() {
		lista.limpar();
	}

	void ListaEntidades::incluir(Entidades::Entidade* pE) {
		if (!pE) return;
		lista.incluir(pE);
	}

	void ListaEntidades::percorrer() {
		Lista<Entidades::Entidade>::Iterator<Entidades::Entidade> it;
		for (it = lista.begin(); it != NULL; ++it) {
			(*it)->gravitar();
			(*it)->executar();
		}
		//while (it != NULL) {
		//	(*it)->executar();
		//	(*it)->desenhar();
		//	++it;
		//}
	}

	void ListaEntidades::desenhar() {
		Lista<Entidades::Entidade>::Iterator<Entidades::Entidade> it;
		for (it = lista.begin(); it != NULL; ++it) {
			(*it)->desenhar();
		}
	}


}
	
