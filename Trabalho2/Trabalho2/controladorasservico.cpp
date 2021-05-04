#include "controladorasservico.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar m�todos das controladoras de servi�o.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de servi�o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o autentica��o.

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha){

    // ---------------------------------------------------------------------------------------
    // Instanciar container de usu�rios.
    // ---------------------------------------------------------------------------------------

    // ---------------------------------------------------------------------------------------
    // Recuperar senha de usu�rio.
    // ---------------------------------------------------------------------------------------

    // ---------------------------------------------------------------------------------------
    // Retornar resultado.
    // ---------------------------------------------------------------------------------------

    return true;
}


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o pessoal.

bool CntrServicoPessoal::cadastrarUsuario(Usuario usuario){

    // Instancia container de usu�rios.

    ContainerUsuario *container;

    container = ContainerUsuario::getInstancia();

    // Solicita cadastramento de usu�rio e retornar resultado da solicita��o de servi�o.

    return container->incluir(usuario);
}

bool CntrServicoPropostaImoveis::cadastrarImovel(Imovel imovel){

    

    ContainerImovel *container;

    container = ContainerImovel::getInstancia();



    return container->incluir(imovel);
}
/*

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora servi�o produtos financeiros.

*/

