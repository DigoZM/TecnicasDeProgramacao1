#include "builders.h"

CntrApresentacaoControle* BuilderSistema::construir(){

    // Instancia controladoras da camada de apresentacao.

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoPropostaImoveis = new CntrApresentacaoPropostaImoveis();

    // Instancia controladoras da camada de servico.

    cntrServicoPessoal = new CntrServicoPessoal();
    cntrServicoAutenticacao = new CntrServicoAutenticacao();
    cntrServicoPropostaImoveis = new CntrServicoPropostaImoveis();

    // Interliga as controladoras.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoPropostaImoveis(cntrApresentacaoPropostaImoveis);
    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoPessoal->setCntrServicoPessoal(cntrServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoPropostaImoveis(cntrServicoPropostaImoveis);
    cntrApresentacaoPropostaImoveis->setCntrServicoPropostaImoveis(cntrServicoPropostaImoveis);

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
