#include "Fase.h"
#include "Macaco.h"

namespace Fases {
	void Fase::criarMacacos()
	{
		Entidades::Personagens::Macaco* m1 = new Entidades::Personagens::Macaco;
		m1->setPosicao({ 900.f, 200.f });
		lista_ents.incluir(static_cast<Entidades::Entidade*>(m1));
		GC.incluirInimigo(m1);
	}
	void Fase::criarCenario()
	{
		
	}
	Fase::Fase()
	{
	}
	Fase::~Fase()
	{
	}
}