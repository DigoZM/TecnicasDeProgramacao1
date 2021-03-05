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
        int oi;
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
