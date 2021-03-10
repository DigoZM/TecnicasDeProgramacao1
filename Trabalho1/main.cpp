#include <iostream>
#include <string>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main (){

    TUCodigo testeA;
    TUClasse testeB;

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

  return 0;
}



/* ---------- CÓDIGO ORIGINAL PROFESSOR ----------

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
