#include "testes.h"

string TUCodigo::CODIGO_VALIDO = "ABC12";
string TUCodigo::CODIGO_INVALIDO1 = "FORADOLIMITE";
string TUCodigo::CODIGO_INVALIDO2 = "abc12";
string TUCodigo::CODIGO_INVALIDO3 = "00000";

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(CODIGO_VALIDO);
        if(codigo->getCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(out_of_range &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha1(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO1);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (codigo->getCodigo() == CODIGO_INVALIDO1)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if (codigo->getCodigo() == CODIGO_INVALIDO1)
            estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha2(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO2);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (codigo->getCodigo() == CODIGO_INVALIDO2)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if (codigo->getCodigo() == CODIGO_INVALIDO2)
            estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha3(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO3);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (codigo->getCodigo() == CODIGO_INVALIDO3)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if (codigo->getCodigo() == CODIGO_INVALIDO3)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    tearDown();
    return estado;
}

void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(CLASSE_VALIDA);
        if (classe->getClasse() != CLASSE_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(CLASSE_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == CLASSE_INVALIDA)
            estado = FALHA;
        return;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/* ---------- CÓDIGO ORIGINAL PROFESSOR ----------
#include "testes.h"


// Definições de métodos de teste de unidade de domínio.

void TUMatricula::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUMatricula::run(){
    dominio = new Matricula();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}


// Definições de métodos de teste de unidade de domínio.

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos de teste de unidade de domínio.

void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO);
    projeto->setCodigo(codigo);
    if(projeto->getCodigo().getCodigo() != VALOR_VALIDO)
        estado = FALHA;
}

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//---------------------------------------------------------------------------
// Estrutura de classe de teste de unidade de entidade.
//
// Para cada entidade, substituir Entidade por nome da entidade.
//
// Para cada atributo, substituir Dominio e nomeAtributo por nomes adequados.

void TUEntidade::setUp(){
    entidade = new Entidade();
    estado = SUCESSO;
}

void TUEntidade::tearDown(){
    delete entidade;
}

void TUEntidade::testarCenario(){
    Dominio dominio;
    dominio.setValor(VALOR_VALIDO);
    entidade->setnomeAtributo(dominio);
    if(entidade->getnomeAtributo().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUEntidade::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
*/
