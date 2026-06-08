#include "Fase.h"
#include "Boitata.h"
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
	void Fase::criarBoitatas()
	{
		Entidades::Personagens::Boitata* b1 = new Entidades::Personagens::Boitata();
		b1->setPosicao({ 1200.f, 500.f });
		lista_ents.incluir(b1);
		GC.incluirInimigo(b1);
	}
	Fase::Fase()
	{

	}
	Fase::~Fase()
	{
	}


}