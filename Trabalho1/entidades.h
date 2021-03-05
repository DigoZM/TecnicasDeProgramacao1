/* ---------- CÓDIGO ORIGINAL PROFESSOR ----------- 
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe.

class Projeto {

private:

    Codigo codigo;

public:

    void setCodigo(const Codigo &codigo){
        this->codigo = codigo;
    }

    Codigo getCodigo() const {
        return codigo;
    }
};

//---------------------------------------------------------------------------
// Estrutura de classe entidade.
//
// Para cada entidade, substituir Entidade por nome da entidade.
//
// Para cada atributo, substituir Dominio e nomeAtributo por nomes adequados.

class Entidade {

    private:
            // Declarar cada atributo da classe.

            Dominio nomeAtributo;
    public:
            // Declarar métodos set e get para cada atributo.

            void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;
};

// Implementar métodos set e get.

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}


#endif // ENTIDADES_H_INCLUDED
*/