#pragma once
#include <vector>
#include <list>
#include <set>
//#include "Inimigo.h"
#include "Obstaculo.h"
//#include "Projetil.h"


using std::vector;
using std::list;
using std::set;

using namespace Entidades;

// Tirar tudo isso dps
class Inimigo;
class Projetil;
//
namespace Gerenciadores {
	class GerenciadorColisoes {
	private:
		vector<Personagens::Inimigo*> LIs;
		list<Obstaculos::Obstaculo*> LOs;
		set<Projetil*> LPs;
		Personagens::Jogador* pJog1;
		//Personagens::Jogador* pJog2;

		const bool verificarColisao(Entidade* pe1, Entidade* pe2) const;
		void tratarColisoesJogsInimigs();
		void tratarColisoesJogsObstacs();
		void tratarColisoesJogsProjeteis();

	public:
		GerenciadorColisoes();
		~GerenciadorColisoes();
		void incluirInimigo(Personagens::Inimigo* pi);
		void incluirObstaculo(Obstaculos::Obstaculo* po);
		void incluirProjetil(Projetil* pp);
		void executar();


	};
}

