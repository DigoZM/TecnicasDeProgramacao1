#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

// início classe código

class Codigo{
private:
        const static int LIMITE = 5;
        static string INVALIDO;
        static string DEFAULT;
        string codigo;
        void validar(string);
public:
        Codigo();
        void setCodigo(string);
        string getCodigo(void);
};

inline string Codigo::getCodigo(){
    return codigo;
}

//fim classe código

//início classe classe

class Classe{
private:
        const static int APARTAMENTO = 1;
        const static int CASA = 2;
        const static int QUARTO = 3;
        const static int DEFAULT = APARTAMENTO;
        int classe;
        void validar(int);
public:
        Classe();
        Classe(int);
        void setClasse(int);
        int getClasse(void);
};

inline int Classe::getClasse(){
    return classe;
}

//fim classe classe

//início classe descrição

class Descricao{
private:
    const static int MINIMO = 5;
    const static int MAXIMO = 30;
    static string DEFAULT;
    string descricao;
    void validar(string);
public:
    Descricao();
    Descricao(string);
    void setDescricao(string);
    string getDescricao();
};

inline string Descricao::getDescricao(){
    return descricao;
}

//fim classe descrição

//início classe número
class Numero{
private:
    const static int MINIMO = 0;
    const static int MAXIMO = 20;
    const static int DEFAULT = 0;
    int numero;
    void validar(int);
public:
    Numero();
    Numero(int);
    void setNumero(int);
    int getNumero();
};

inline int Numero::getNumero(){
    return numero;
}
//fim classe número

#endif // DOMINIOS_H_INCLUDED



/* ---------- CÓDIGO ORIGINAL PROFESSOR ----------
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Exemplos de sintaxe.

class Matricula {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Matricula();
        Matricula(int);
        void setValor(int);
        int getValor();
};

inline void Matricula::setValor(int valor){
    this->valor = valor;
};

inline int Matricula::getValor(){
    return valor;
}

class Senha {
    private:
        static const int INVALIDO = 123;
        int valor;
        bool validar(int);
    public:
        Senha(int);
        bool setValor(int);
        int getValor();
};


// Declaração de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Método responsável por validação.

        void validar(int);

public:
        // Métodos de acesso.

        void setCodigo(int);

        int getCodigo() const {
            return codigo;
        }
};

//-----------------------------------------------------------------------
// Estrutura de classe que pode ser usada na implementação das entidades.
//
// Usar caso não tenha sido desenvolvida biblioteca de domínios.
//
// Para cada domínio, substituir Dominio pelo nome do domínio.

class Dominio {
    private:
            int valor;
    public:
            void setValor(int valor);
            int getValor() const;
};

inline void Dominio::setValor(int valor){
    this->valor = valor;
}

inline int Dominio::getValor() const{
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
*/
