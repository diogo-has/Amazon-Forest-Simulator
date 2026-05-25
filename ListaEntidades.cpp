#include "ListaEntidades.h"


namespace Listas {
	ListaEntidades::ListaEntidades(): lista() {
		lista.limpar();
	}

	ListaEntidades::~ListaEntidades() {
		lista.limpar();
	}

	void ListaEntidades::incluir(Entidades::Entidade* pE) {
		lista.incluir(pE);
	}

	void ListaEntidades::percorrer() {
		Lista<Entidades::Entidade>::Elemento<Entidades::Entidade>* it = lista.begin();
		for (it = lista.begin(); it != lista.end(); it++) {
			Entidades::Entidade* pEntidade = static_cast<Entidades::Entidade*>(it->getInfo());
			pEntidade->desenhar();
		}
	}
}
