#pragma once
#include "Entidade.h"

namespace Entidades {
    class Fireball : public Entidade
    {
        protected:
            bool ativo;
            int tamanho;
            float timer_vida;
            float tempo_vida;

        public:
            Fireball();
            ~Fireball();
            void executar();
            void salvar();//TODO
            void salvarDataBuffer();
            void setTamanho(int tam);
    };
}

