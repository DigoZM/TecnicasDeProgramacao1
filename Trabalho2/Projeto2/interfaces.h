#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"


/*class IApresentacaoAutenticacao {
    public:
        //virtual bool autenticar(Email*) = 0;
        //virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};*/

class IApresentacaoPessoal{
    public:
        virtual void cadastrar() = 0;
        virtual ~IApresentacaoPessoal(){}
};

#endif // INTERFACES_H_INCLUDED
