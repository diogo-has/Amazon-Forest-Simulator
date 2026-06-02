#include "Jogo.h"
#include "Menu.h"
#include "Plataforma.h"
#include "Formigueiro.h"
#include "ListaEntidades.h"
#include "Macaco.h"
#include "Cacador.h"
#include "Tronco.h"
#include "FasePrimeira.h"
#include <iostream>
using std::cout;
using std::endl;

using Entidades::Personagens::Jogador;

Jogo::Jogo() : gg(), pJog1(), atual(0) {
    Ente::setGG(&gg);
    listaEnt.incluir(static_cast<Entidades::Entidade*>(&pJog1));
    executar();
}

Jogo::~Jogo() {}

void Jogo::executar() {
    Menu menu(this);
    

           
    //temporario
    Fases::FasePrimeira fase1(&pJog1);
    //fase1.setJog(&pJog1);
    //
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
        //pJog1.setAceleracaoY(2000.f); // Implementacção porca de gravidade

        float velocidade = 2000.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            pJog1.setAceleracaoX(-velocidade);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            pJog1.setAceleracaoX(velocidade);
        // Implementação porca de pulo
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            //pJog1.setVelocidadeY(-500.f);
            pJog1.pular();
        if (evento.type == sf::Event::MouseButtonPressed) {
            if (evento.mouseButton.button == sf::Mouse::Left) {
                menu.verificaclique();

            }
        }
        gg.limpar();
        switch (atual) {
            case 0:
                cout << "executando menu" << endl;
                menu.executar();
                
                break;
            case 1:
                cout<< "aqui" << endl;
                fase1.executar();
                //listaEnt.percorrer();
                break;
        }
        gg.mostrar();
    }
}

void Jogo::setAtual(short int a)
{
    if (a >= 0 && a <= 4) {

        atual = a;
    }
}



