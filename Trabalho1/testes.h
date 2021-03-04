#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declara��o de classe de teste de unidade de dom�nio.

class TUMatricula {
private:
    const static int VALOR_VALIDO   = 20;
    Matricula *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

// Declara��o de classe de teste de unidade de dom�nio.

class TUCodigo {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Refer�ncia para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declara��o de classe de teste de unidade de entidade.

class TUProjeto {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 20;

    // Refer�ncia para o objeto a ser testado.

    Projeto *projeto;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

//---------------------------------------------------------------------------
// Estrutura de classe de teste de unidade de entidade.
//
// Para cada entidade, substituir Entidade por nome da entidade.
//
// Para cada atributo, substituir Dominio e nomeAtributo por nomes adequados.

class TUEntidade {

private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 20;

    // Refer�ncia para o objeto a ser testado.

    Entidade *entidade;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenario();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif // TESTES_H_INCLUDED
