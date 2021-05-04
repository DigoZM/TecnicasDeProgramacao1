#include "controladorasservico.h"

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha){

    // ---------------------------------------------------------------------------------------
    // Instanciar container de usuarios.
    // ---------------------------------------------------------------------------------------

    // ---------------------------------------------------------------------------------------
    // Recuperar senha de usuario.
    // ---------------------------------------------------------------------------------------

    // ---------------------------------------------------------------------------------------
    // Retornar resultado.
    // ---------------------------------------------------------------------------------------

    return true;
}

bool CntrServicoPessoal::cadastrarUsuario(Usuario usuario){

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    return container->incluir(usuario);
}

bool CntrServicoPropostaImoveis::cadastrarImovel(Imovel imovel){

    ContainerImovel *container;

    container = ContainerImovel::getInstancia();

    return container->incluir(imovel);
}

bool CntrServicoPropostaImoveis::cadastrarProposta(Proposta proposta){

    ContainerProposta *container;

    container = ContainerProposta::getInstancia();

    return container->incluir(proposta);
}
