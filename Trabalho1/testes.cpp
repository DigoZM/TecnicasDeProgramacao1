#include "testes.h"


// Defini��es de m�todos de teste de unidade de dom�nio.

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


// Defini��es de m�todos de teste de unidade de dom�nio.

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

// Defini��es de m�todos de teste de unidade de dom�nio.

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
