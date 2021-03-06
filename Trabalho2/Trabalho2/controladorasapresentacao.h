#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

//#include <conio.h>
#include <iostream>
#include <string.h>
#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

#define CLR_SCR system("cls || clear");

//--------------------------------------------------------------------------------------------

class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoPropostaImoveis *cntrApresentacaoPropostaImoveis;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoPessoal(IApresentacaoPessoal*);
        void setCntrApresentacaoPropostaImoveis(IApresentacaoPropostaImoveis*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoPessoal(IApresentacaoPessoal *cntr){
            cntrApresentacaoPessoal = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoPropostaImoveis(IApresentacaoPropostaImoveis *cntr){
    cntrApresentacaoPropostaImoveis = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        IServicoPessoal *cntrServicoPessoal;
        IServicoPropostaImoveis *cntrServicoPropostaImoveis;
    public:
        //void executar();
        void executar(Email);
        void cadastrar();
        void descadastrar(Email);
        void setCntrServicoPessoal(IServicoPessoal*);
        void setCntrServicoPropostaImoveis(IServicoPropostaImoveis*);
};

inline void CntrApresentacaoPessoal::setCntrServicoPessoal(IServicoPessoal *cntr){
    cntrServicoPessoal = cntr;
}

inline void CntrApresentacaoPessoal::setCntrServicoPropostaImoveis(IServicoPropostaImoveis *cntr){
    cntrServicoPropostaImoveis = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoPropostaImoveis:public IApresentacaoPropostaImoveis{
    private:
        IServicoPropostaImoveis *cntr;
        /*void consultarConta();
        void cadastrarProdutoInvestimento();
        void descadastrarProdutoInvestimento();
        void consultarProdutoInvestimento();
        void realizarAplicacao();
        void listarAplicacoes();*/
        void cadastrarI(Email);
        void editarI(Email);
        void cadastrarP(Email);
        void descadastrarI(Email);
        void descadastrarP(Email);
    public:
        void listarImoveisDisponiveis();
        //void executar();
        void executar(Email);
        void setCntrServicoPropostaImoveis(IServicoPropostaImoveis*);
};

inline void CntrApresentacaoPropostaImoveis::setCntrServicoPropostaImoveis(IServicoPropostaImoveis *cntr){
    this->cntr = cntr;
}

#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
