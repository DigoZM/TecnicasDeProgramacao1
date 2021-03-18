#include <iostream>
#include <string>
#include "dominios.h"
#include "testes.h"
#include "entidades.h"

using namespace std;

int main (){

    // Unidades
    TUCodigo testeA;
    TUClasse testeB;
    TUDescricao testeC;
    TUData testeD;
    TUNumero testeE;
    TUNome testeF;
    TUEmail testeG;
    TUEndereco testeH;
    TUMoeda testeI;
    TUSenha testeJ;
    TUTelefone testeK;
    // Entidades
    TUImovel testeL;
    TUProposta testeM;
    TUUsuario testeN;

    cout << "\nTestes de Unidade:\n" << endl;

    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    switch(testeB.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }

    switch(testeC.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    switch(testeD.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    switch(testeE.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    switch(testeF.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    switch(testeG.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

    switch(testeH.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA:   cout << "FALHA  -  ENDERECO" << endl;
                                break;
    }

    switch(testeI.run()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA:   cout << "FALHA  -  MOEDA" << endl;
                                break;
    }

    switch(testeJ.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA:   cout << "FALHA  -  SENHA" << endl;
                                break;
    }

    switch(testeK.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA:   cout << "FALHA  -  TELEFONE" << endl;
                                break;
    }

    cout << "\nTestes de Entidade:" << endl;

    switch(testeL.run()){
        case TUImovel::SUCESSO: cout << "\nSUCESSO - IMOVEL" << endl;
                                break;
        case TUImovel::FALHA:   cout << "FALHA  -  IMOVEL" << endl;
                                break;
    }

    switch(testeM.run()){
        case TUProposta::SUCESSO: cout << "SUCESSO - PROPOSTA" << endl;
                                break;
        case TUProposta::FALHA:   cout << "FALHA  -  PROPOSTA" << endl;
                                break;
    }

    switch(testeN.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
                                break;
        case TUUsuario::FALHA:   cout << "FALHA  -  USUARIO" << endl;
                                break;
    }

  return 0;
}
