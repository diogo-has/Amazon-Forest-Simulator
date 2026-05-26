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
		Lista<Entidades::Entidade*>::Iterator it = lista.begin();
		for (it = lista.begin(); it != lista.end(); it++) {
			Entidades::Entidade* pEntidade = it.getAtual();
			pEntidade->executar();
			pEntidade->desenhar();
		}
	}
}
