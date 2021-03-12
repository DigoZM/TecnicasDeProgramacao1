#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <iostream>

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


//início classe data

class Data{
private:
    const static int LIMITE = 8;
    const static int DIA_MININO = 1;
    const static int DIA_MAXIMO1 = 31;
    const static int DIA_MAXIMO2 = 30;
    const static int DIA_MAXIMO3 = 28;
    const static int DIA_MAXIMO_BISSEXTO = 29;
    const static int MES_MINIMO = 1;
    const static int MES_MAXIMO = 12;
    const static int ANO_MINIMO = 21;
    const static int ANO_MAXIMO = 99;
    const static int ANO_BISSEXTO_DIV = 4;
    static string DEFAULT;
    string data;
    void validar(string);
public:
    Data();
    Data(string);
    void setData(string);
    string getData();
};

inline string Data::getData(){
    return data;
}

//fim classe data

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

//início classe nome
class Nome{
private:
    const static int MINIMO = 5;
    const static int MAXIMO = 25;
    const static int LETRA_A = 'A';
    const static int LETRA_Z = 'Z';
    const static int LETRA_a = 'a';
    const static int LETRA_z = 'z';
    const static int ESPACO = ' ';
    const static int PONTO = '.';
    static string DEFAULT;
    string nome;
    void validar(string);
public:
    Nome();
    Nome(string);
    void setNome(string);
    string getNome();
};

inline string Nome::getNome(){
    return nome;
}
//fim classe nome

//início classe Email
class Email{
private:
    const static int MAX_NOME = 10;
    const static int MAX_DOMINIO = 20;
    static string DEFAULT;
    string email;
    void validar(string);
public:
    Email();
    Email(string);
    void setEmail(string);
    string getEmail();
};

inline string Email::getEmail(){
    return email;
}
//fim classe Email

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
