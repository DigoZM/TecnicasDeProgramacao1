/*#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
//#include "containers.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de serviço.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de serviços.

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço autenticação.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool autenticar(CPF, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço pessoal.

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool cadastrarUsuario(Usuario);
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
};


#endif // CONTROLADORASSERVICO_H_INCLUDED */
