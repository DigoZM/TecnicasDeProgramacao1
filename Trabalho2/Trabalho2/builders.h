#ifndef BUILDERS_H_INCLUDED
#define BUILDERS_H_INCLUDED

#include "interfaces.h"
#include "controladorasapresentacao.h"
#include "controladorasservico.h"
//#include "stubs.h"

class BuilderSistema {
    private:
        CntrApresentacaoControle *cntrApresentacaoControle;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoPropostaImoveis *cntrApresentacaoPropostaImoveis;
        IServicoAutenticacao *cntrServicoAutenticacao;
        IServicoPessoal *cntrServicoPessoal;
        IServicoPropostaImoveis *cntrServicoPropostaImoveis;
    public:
        CntrApresentacaoControle* construir();
        ~BuilderSistema();
};

#endif // BUILDERS_H_INCLUDED
