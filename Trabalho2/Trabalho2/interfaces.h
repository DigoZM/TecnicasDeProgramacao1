#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

class IServicoAutenticacao;
class IServicoPessoal;
class IServicoPropostaImoveis;

//--------------------------------------------------------------------------------------------

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        //virtual void executar() = 0;
        //virtual void executar(Email) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoPropostaImoveis(IServicoPropostaImoveis*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoPropostaImoveis{
    public:
        virtual void cadastrarI(Email) = 0;
        virtual void cadastrarP(Email) = 0;
        //virtual void executar() = 0;
        virtual void executar(Email) = 0;
        //virtual void listarImoveisDisponiveis() = 0;
        virtual void setCntrServicoPropostaImoveis(IServicoPropostaImoveis*) = 0;
        virtual ~IApresentacaoPropostaImoveis(){}
};

//--------------------------------------------------------------------------------------------

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
    public:
        virtual bool cadastrarUsuario(Usuario) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoPropostaImoveis{
    public:
        virtual bool cadastrarImovel(Imovel) = 0;
        /*virtual bool descadastrarImovel(Codigo) = 0;
        virtual bool editarImovel(Codigo) = 0; */
        virtual bool cadastrarProposta(Proposta) = 0;
        /* virtual bool listarPropostasRecebidas(Codigo) = 0;
        virtual bool listarPropostasFeitas(Email) = 0;
        virtual bool apresentarPropostaRecebida(Codigo) = 0;
        virtual bool descadastrarProposta(Codigo) = 0;
        virtual bool listarImoveisDisponiveis() = 0;
        virtual bool apresentarImovel(Codigo) = 0;*/
        virtual ~IServicoPropostaImoveis(){}
};

#endif // INTERFACES_H_INCLUDED
