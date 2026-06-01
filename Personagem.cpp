#include "Personagem.h"

namespace Entidades {
	namespace Personagens {
		Personagem::Personagem(): Entidade(), num_vidas(3) {
			sofre_gravidade = true;
			// Define a origem do sprite como sendo parte de baixo da imagem, alinhado ao centro
			sf::FloatRect bounds = sprite.getLocalBounds();
			sprite.setOrigin(bounds.width / 2.0f, bounds.height);
		}
		Personagem::~Personagem() {
		}
		void Personagem::salvarDataBuffer() {
		}
	}
}
