#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

//inicio TU classe Codigo
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
//fim TU classe Codigo

//in�cio TU classe Classe
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
//fim TU classe Classe

//in�cio TU classe Descri��o
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
//fim TU classe Descri��o

//in�cio TU classe N�mero
class TUNumero{
private:
    const static int NUMERO_VALIDO = 14;
    const static int NUMERO_INVALIDO_MIN = -1;
    const static int NUMERO_INVALIDO_MAX = 21;
    Numero *numero;
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
//fim TU classe N�mero

//in�cio TU classe Email
class TUEmail{
private:
    static string EMAIL_VALIDO;
    static string EMAIL_INVALIDO;
    static string EMAIL_INVALIDO2;
    static string EMAIL_INVALIDO3;
    static string EMAIL_INVALIDO4;
    static string EMAIL_INVALIDO5;
    static string EMAIL_INVALIDO6;
    Email *email;
    int estado;

    void setUp();
    void tearDown();

    void testarCenarioSucesso();
    void testarCenarioFalha();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
    void testarCenarioFalha5();
    void testarCenarioFalha6();

public:
    const static int SUCESSO =  0;
    const static int FALHA = -1;
    int run();
};
//fim TU classe Email

#endif // TESTES_H_INCLUDED

/* ---------- C�DIGO ORIGINAL PROFESSOR -----------

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
*/
