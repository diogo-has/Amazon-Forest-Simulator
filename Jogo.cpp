#include "Jogo.h"
#include "Jogador.h" // temporário
#include "Menu.h"
#include <iostream>
using std::cout;
using std::endl;

using Entidades::Personagens::Jogador;

Jogo::Jogo() : gg(), pJog1() {
    Ente::setGG(&gg);
    executar();
}

Jogo::~Jogo() {}

void Jogo::executar() {
    while (gg.janelaAberta()) {
        gg.atualizarDeltaTime();

        sf::Event evento;

        
        while (gg.getJanela()->pollEvent(evento)) {
            switch (evento.type) {
            case sf::Event::Closed:
                gg.getJanela()->close();
                break;
            case sf::Event::KeyPressed:
                switch (evento.key.code) {
                case sf::Keyboard::Escape:
                    gg.getJanela()->close();
                    break;
                }
            }
        }


        pJog1.setAceleracaoX(0.f); // Reset de aceleração, melhor por em outro lugar
        pJog1.setAceleracaoY(2000.f); // Implementacção porca de gravidade

        float velocidade = 2000.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            pJog1.setAceleracaoX(-velocidade);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            pJog1.setAceleracaoX(velocidade);
        // Implementação porca de pulo
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            //pJog1.setVelocidadeY(-500.f);
            pJog1.pular();

        gg.limpar();

        pJog1.executar(); // Mudar pra lista de entidades

        gg.mostrar();
    }
}

