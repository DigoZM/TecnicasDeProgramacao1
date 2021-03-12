#include <iostream>
#include <string>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main (){

    TUClasse testeB;
    TUDescricao testeC;
    TUData testeD;
    TUNumero testeE;
    TUEmail testeF;
    TUCodigo testeG;
    TUEndereco testeH;
    TUMoeda testeI;
    TUSenha testeJ;

    switch(testeB.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA:   cout << "FALHA  -  CLASSE" << endl;
                                break;
    }

    switch(testeC.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA:   cout << "FALHA  -  DESCRICAO" << endl;
                                break;
    }

    switch(testeD.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA:   cout << "FALHA  -  DATA" << endl;
                                break;
    }

    switch(testeE.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA:   cout << "FALHA  -  NUMERO" << endl;
                                break;
    }

    switch(testeF.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA:   cout << "FALHA  -  EMAIL" << endl;
                                break;
    }

    switch(testeG.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA:   cout << "FALHA  -  CODIGO" << endl;
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

  return 0;
}
/* ---------- C�DIGO ORIGINAL PROFESSOR ----------

// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    TUCodigo testeA;

    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


    TUProjeto testeB;

    switch(testeB.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

    //---------------------------------------------------------------------------
    // Estrutura para teste de unidade de entidade.
    //
    // Para cada entidade subtituir nome TUEntidade.

    TUEntidade testeC;

    switch(testeC.run()){
        case TUEntidade::SUCESSO: cout << "SUCESSO - ENTIDADE" << endl;
                                break;
        case TUEntidade::FALHA  : cout << "FALHA   - ENTIDADE" << endl;
                                break;
    }

    return 0;
}
*/
