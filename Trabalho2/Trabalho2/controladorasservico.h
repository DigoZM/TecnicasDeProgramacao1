#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "containers.h"

//--------------------------------------------------------------------------------------------

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool cadastrarUsuario(Usuario);
};

//--------------------------------------------------------------------------------------------

class CntrServicoPropostaImoveis:public IServicoPropostaImoveis{
    public:
        bool cadastrarImovel(Imovel);
        bool editarImovel(Imovel);
        bool cadastrarProposta(Proposta);
};


#endif // CONTROLADORASSERVICO_H_INCLUDED

        