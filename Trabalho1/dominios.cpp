#include "dominios.h"

// Exemplos de sintaxe.

Matricula::Matricula(){
    valor = DEFAULT;
}

Matricula::Matricula(int valor){
    this->valor = valor;
}

Senha::Senha(int valor){
    this->valor = valor;
}

bool Senha::validar(int valor){
    if (valor == INVALIDO)
        return false;
    return true;
}

bool Senha::setValor(int valor) {
    if (!validar(valor))
        return false;
    this->valor = valor;
    return true;
}


//Defini��es de m�todos.

void Codigo::validar(int codigo){

    // Lan�a exce��o se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo){
    validar(codigo);
    this->codigo = codigo;
}
