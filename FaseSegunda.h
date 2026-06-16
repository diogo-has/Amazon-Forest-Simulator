#pragma once
#include "Fase.h"
namespace Fases {
	class FaseSegunda : public Fase {
	private:
		const int maxBoitatas;
		const int maxTroncos;

	protected:
		void criarInimigos();
		void criarBoitatas(); //imimigo difícil
		void criarObstaculos();
		void criarTroncos();

	public:
		FaseSegunda(Entidades::Personagens::Jogador* pj1, Entidades::Personagens::Jogador* pj2 = nullptr);
		~FaseSegunda();
		void executar();
	};
}

