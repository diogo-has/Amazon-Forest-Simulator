#pragma once

#include "Ente.h"
#include "ListaEntidades.h"

// Professor sugeriu fazer a relação "fase - geren. col." ser bidirecional para fazer o tratamento do chão
// Chefão tem que atirar
namespace Fases {
	
	class Fase:public Ente {
	protected:
		Listas::ListaEntidades lista_ents;
		//GerenciadorColisoes GC;

		//void criarInimFaceis();
		//void criarPlataformas();

		virtual void criarInimigos() = 0;
		virtual void criarObstaculos() = 0;
		
		void criarCenario();

	public:
		Fase();
		~Fase();
		virtual void executar();
	};
}