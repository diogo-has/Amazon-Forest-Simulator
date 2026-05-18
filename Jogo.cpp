#include "Jogo.h"
#include "Jogador.h" // temporário

using Entidades::Personagens::Jogador;

Jogo::Jogo() : gg(), pJog1() {
    Ente::setGG(&gg);
	executar();
}

Jogo::~Jogo() {}

void Jogo::executar() {
    while (gg.janelaAberta()) {

        sf::Event evento;

        while (gg.getJanela()->pollEvent(evento)) {
            if (evento.type == sf::Event::Closed)
                gg.getJanela()->close();
        }

        gg.limpar();

        pJog1.executar(); // Mudar pra lista de entidades

        gg.mostrar();
    }
}

