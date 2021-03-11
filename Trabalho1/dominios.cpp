#include "dominios.h"

string Codigo::INVALIDO = "00000";
string Codigo::DEFAULT = "XXXXX";

void Codigo::validar(string codigoRecebido){

    if(codigoRecebido.length() > LIMITE)
        throw out_of_range("Fora do limite.");

    for(int i = 0; i < LIMITE; i++){
        if(!(((codigoRecebido[i] >= 'A')&&(codigoRecebido[i] <= 'Z')) ||
             ((codigoRecebido[i] >= '0')&&(codigoRecebido[i] <= '9'))))
            throw invalid_argument("Argumento invalido.");
    }

    if(codigoRecebido == INVALIDO)
        throw invalid_argument("Argumento invalido");

}

void Codigo::setCodigo(string codigoRecebido){

    validar(codigoRecebido);
    codigo.assign(codigoRecebido);

}

Codigo::Codigo(){

    codigo = DEFAULT;

}

void Classe::validar(int classeRecebida){

    if(classeRecebida != APARTAMENTO && classeRecebida != CASA && classeRecebida != QUARTO){
        throw invalid_argument("Argumento invalido");
    }

}

void Classe::setClasse(int classeRecebida){

    validar(classeRecebida);
    this->classe = classeRecebida;

}

Classe::Classe(){
    classe = DEFAULT;
}

Classe::Classe(int classe){
    this->classe = classe;
}

string Descricao::DEFAULT = "Im�vel sem descri��o.";

void Descricao::validar(string descricaoRecebida){
    int size = descricaoRecebida.length();
    if(size > MAXIMO || size < MINIMO){
        throw out_of_range("fora de limite");
    }
    if(descricaoRecebida[size-1] != '.'){
        throw invalid_argument("Argumento invalido");
    }
}

void Descricao::setDescricao(string descricaoRecebida){
    validar(descricaoRecebida);
    descricao.assign(descricaoRecebida);
}

Descricao::Descricao(){
    descricao = DEFAULT;
}

Descricao::Descricao(string descricaoRecebida){
    descricao.assign(descricaoRecebida);
}
/* ---------- C�DIGO ORIGINAL PROFESSOR ----------
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
*/
