#include "Jogador.h"

namespace Entidades {
	namespace Personagens {
		Jogador::Jogador() {
		}
		Jogador::~Jogador() {
		}
		void Jogador::colidir(Inimigo* pIn) {
		}
		void Jogador::executar() {
			sprite.setPosition(x, y);
			desenhar();
		}
		void Jogador::salvar() {
		}
		void Jogador::mover() {
		}
	}
}