#include "builders.h"

CntrApresentacaoControle* BuilderSistema::construir(){

    // Instancia controladoras da camada de apresenta��o.

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoPropostaImoveis = new CntrApresentacaoPropostaImoveis();

    // Instancia controladoras da camada de servi�o.

    cntrServicoPessoal = new CntrServicoPessoal();

    // --------------------------------------------------------------------------------------------
    // Substituir instancia de stub de CntrServicoAutenticacao por inst�ncia da controladora.
    // --------------------------------------------------------------------------------------------

    cntrServicoAutenticacao = new CntrServicoAutenticacao();

    // ---------------------------------------------------------------------------------------------
    // Substituir instancia de stub de CntrServicoProdutosFinanceiros por inst�ncia da controladora.
    // ---------------------------------------------------------------------------------------------

    cntrServicoPropostaImoveis = new CntrServicoPropostaImoveis();

    // Interliga as controladoras.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoPropostaImoveis(cntrApresentacaoPropostaImoveis);
    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoPessoal->setCntrServicoPessoal(cntrServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoPropostaImoveis(cntrServicoPropostaImoveis);
    cntrApresentacaoPropostaImoveis->setCntrServicoPropostaImoveis(cntrServicoPropostaImoveis);

    // Retorna refer�ncia para inst�ncia de CntrApresentacaoControle.

    return cntrApresentacaoControle;
}

BuilderSistema::~BuilderSistema(){
        delete cntrApresentacaoControle;
        delete cntrApresentacaoAutenticacao;
        delete cntrApresentacaoPessoal;
        delete cntrApresentacaoPropostaImoveis;
        delete cntrServicoAutenticacao;
        delete cntrServicoPessoal;
        delete cntrServicoPropostaImoveis;
}
