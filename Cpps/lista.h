#ifndef LISTA_H
#define LISTA_H

#include "musica.h"

class Lista {
    private:
        struct Nodo {
            Musica* musica;
            Nodo* proximo;
        };
        Nodo* primeiro;
        Nodo* ultimo;
        int tamanho;
        
    public:
        Lista();
        ~Lista();
        void adicionarNoFim(Musica* musica);
        Musica* obter(int posicao) const;
        int getTamanho() const;
};

#endif
