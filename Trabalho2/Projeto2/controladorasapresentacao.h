#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

//#include <conio.h>
#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

class CntrApresentacaoControle{
    private:
        //IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
    public:
        void executar();
};


class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    public:
        //void executar();
        //void executar(Email);
        void cadastrar();
        //void setCntrServicoPessoal(IServicoPessoal*);
        //void setCntrServicoPropostaImoveis(IServicoPropostaImoveis*);
};

#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED