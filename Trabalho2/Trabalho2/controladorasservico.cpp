#include "controladorasservico.h"
#include <string>

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha){
    
    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();
    
    Usuario usuario;

    usuario.setEmailUsuario(email);

    if(container->pesquisar(&usuario)){
        if(!(senha.getSenha().compare(usuario.getSenhaUsuario().getSenha()))){
            return true;
        }
    }

    return false;
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

bool CntrServicoPropostaImoveis::editarImovel(Imovel imovel){

    ContainerImovel *container;

    container = ContainerImovel::getInstancia();

    return container->atualizar(imovel);

}
