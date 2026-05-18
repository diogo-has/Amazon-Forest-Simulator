#pragma once
#include "Personagem.h"
namespace Entidades {
	namespace Personagens {
		class Inimigo; //talvez mude pra include
		class Jogador:public Personagem {
		protected:
			int pontos; //talvez nem use?

		public:
			Jogador();
			~Jogador();
			void colidir(Inimigo* pIn);
			void executar();
			void salvar();		
			void mover();
		};
	}
}


