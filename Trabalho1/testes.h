#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

class TUCodigo{

private:
    static string CODIGO_VALIDO;
    static string CODIGO_INVALIDO1;
    static string CODIGO_INVALIDO2;
    static string CODIGO_INVALIDO3;

    Codigo *codigo;
    int estado;

    void setUp();
    void tearDown();

    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();

public:
    const static int SUCESSO =  0;
    const static int FALHA = -1;
    int run();
};

class TUClasse{
private:
    const static int CLASSE_VALIDA = 1;
    const static int CLASSE_INVALIDA = 10;

    Classe *classe;
    int estado;

    void setUp();
    void tearDown();

    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA = -1;
    int run();
};

class TUDescricao{
private:
    static string DESCRICAO_VALIDA;
    static string DESCRICAO_INVALIDA;
    static string DESCRICAO_INVALIDA2;
    Descricao *descricao;
    int estado;

    void setUp();
    void tearDown();

    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();

public:
    const static int SUCESSO =  0;
    const static int FALHA = -1;
    int run();
};

#endif // TESTES_H_INCLUDED

/* ---------- CÓDIGO ORIGINAL PROFESSOR -----------

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// Declaração de classe de teste de unidade de domínio.

class TUMatricula {
private:
    const static int VALOR_VALIDO   = 20;
    Matricula *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

// Declaração de classe de teste de unidade de domínio.

class TUCodigo {

private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Referência para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

// Declaração de classe de teste de unidade de entidade.

class TUProjeto {

private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 20;

    // Referência para o objeto a ser testado.

    Projeto *projeto;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

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

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 20;

    // Referência para o objeto a ser testado.

    Entidade *entidade;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenario();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif // TESTES_H_INCLUDED
*/
