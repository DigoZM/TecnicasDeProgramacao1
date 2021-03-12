#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//in�cio classe classe

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

//in�cio classe descri��o

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

//fim classe descri��o

//in�cio classe data

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

//in�cio classe n�mero
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
//fim classe n�mero

//in�cio classe Email
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

// Inicio Codigo
class Codigo{
    private:
            const static int TAMANHO = 5;
            static string INVALIDO;
            static string DEFAULT;
            string codigo;
            void validar(string);
    public:
            Codigo();
            Codigo(string);
            void setCodigo(string);
            string getCodigo(void);
};

inline string Codigo::getCodigo(){
    return codigo;
}
// Fim Codigo

// Inicio Endereco
class Endereco{
    private:
        const static int LIMITE_INFERIOR = 5;
        const static int LIMITE_SUPERIOR = 20;
        static string DEFAULT;
        string endereco;
        void validar(string);
    public:
        Endereco();
        Endereco(string);
        void setEndereco(string);
        string getEndereco(void);
};

inline string Endereco::getEndereco(){
    return endereco;
}
// Fim Endereco

// Inicio Moeda
class Moeda{
    private:
        const static int LIMITE_INFERIOR = 4;
        const static int LIMITE_SUPERIOR = 12;
        const static int TAMANHO_INVALIDO1 = 7;     // .123,45     (exemplo)
        const static int TAMANHO_INVALIDO2 = 11;    // .123.456,78 (exemplo)
        static string DEFAULT;
        string moeda;
        void validar(string);
    public:
        Moeda();
        Moeda(string);
        void setMoeda(string);
        string getMoeda(void);
        double converte(string);        // Caso seja necess�rio realizar compara��es num�ricas em etapas futuras
};

inline string Moeda::getMoeda(){
    return moeda;
}
// Fim Moeda

// Inicio Senha
class Senha{
    private:
        const static int TAMANHO = 6;
        static string DEFAULT;
        string senha;
        void validar(string);
    public:
        Senha();
        Senha(string);
        void setSenha(string);
        string getSenha(void);
};

inline string Senha::getSenha(){
    return senha;
}
// Fim senha

#endif // DOMINIOS_H_INCLUDED

/* ---------- C�DIGO ORIGINAL PROFESSOR ----------
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


// Declara��o de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // M�todo respons�vel por valida��o.

        void validar(int);

public:
        // M�todos de acesso.

        void setCodigo(int);

        int getCodigo() const {
            return codigo;
        }
};

//-----------------------------------------------------------------------
// Estrutura de classe que pode ser usada na implementa��o das entidades.
//
// Usar caso n�o tenha sido desenvolvida biblioteca de dom�nios.
//
// Para cada dom�nio, substituir Dominio pelo nome do dom�nio.

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
