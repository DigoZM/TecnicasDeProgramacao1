#include "dominios.h"


// Inicio - CODIGO
string Codigo::INVALIDO = "00000";
string Codigo::DEFAULT = "XXXXX";

void Codigo::validar(string codigoRecebido){

    int tamanhoC = int(codigoRecebido.length());

    if(tamanhoC != TAMANHO)
        throw length_error("Fora do tamanho especificado.");

    for(int i = 0; i < TAMANHO; i++){
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

    codigo.assign(DEFAULT);

}

Codigo::Codigo(string codigoRecebido){

    codigo.assign(codigoRecebido);

}
// Fim - CODIGO

//início classe Classe
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
//fim classe Classe

//início classe Descrição
string Descricao::DEFAULT = "Imóvel sem descrição.";

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
//fim classe Descrição

//início classe Data
string Data::DEFAULT = "01-01-2021";
void Data::validar(string dataRecebida){
    const int JANEIRO = 1;
    const int FEVEREIRO = 2;
    const int MARCO = 3;
    const int ABRIL = 4;
    const int MAIO = 5;
    const int JUNHO = 6;
    const int JULHO = 7;
    const int AGOSTO = 8;
    const int SETEMBRO = 9;
    const int OUTUBRO = 10;
    const int NOVEMBRO = 11;
    const int DEZEMBRO = 12;
    int dia, mes, ano;

    if(dataRecebida.length() != LIMITE)
        throw out_of_range("Fora do limite.");
    dia = stoi(dataRecebida.substr(0,2));
    mes = stoi(dataRecebida.substr(3,2));
    ano = stoi(dataRecebida.substr(6,2));
    if(dia < DIA_MININO || mes < MES_MINIMO || ano < ANO_MINIMO || mes > MES_MAXIMO || ano > ANO_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }
    if(mes == JANEIRO || mes == MARCO || mes == MAIO || mes == JULHO || mes == AGOSTO || mes == OUTUBRO || mes == DEZEMBRO){
        if(dia > DIA_MAXIMO1){
            throw invalid_argument("Argumento inválido.");
        }
    }
    else if (mes == ABRIL || mes == JUNHO || mes == SETEMBRO || mes == NOVEMBRO){
        if(dia > DIA_MAXIMO2){
            throw invalid_argument("Argumento inválido.");
        }
    } else if (mes == FEVEREIRO){
        if (ano % ANO_BISSEXTO_DIV == 0){
            if(dia > DIA_MAXIMO_BISSEXTO){
                throw invalid_argument("Argumento inválido.");
            }
        }
        else {
            if(dia > DIA_MAXIMO3){
                throw invalid_argument("Argumento inválido.");
            }
        }
    }

}

void Data::setData(string dataRecebida){

    validar(dataRecebida);
    this->data = dataRecebida;

}

Data::Data(){
    data = DEFAULT;
}

Data::Data(string data){
    this->data = data;
}

//fim classe Data

//início classe Número
void Numero::validar(int numeroRecebido){
    if(numeroRecebido < MINIMO || numeroRecebido > MAXIMO){
        throw out_of_range("fora do limite");
    }
}

void Numero::setNumero(int numeroRecebido){
    validar(numeroRecebido);
    this->numero = numeroRecebido;
}

Numero::Numero(){
    numero = DEFAULT;
}

Numero::Numero(int numeroRecebido){
    this->numero = numeroRecebido;
}
//fim classe Numero

//início classe Nome
string Nome::DEFAULT = "Fulano da Silva";
void Nome::validar(string nomeRecebido){
    int charAtual, charAnterior, charProximo;
    if(nomeRecebido.length() < MINIMO || nomeRecebido.length() > MAXIMO){
        throw out_of_range("fora do limite");
    }
    for (int i = 0; i < nomeRecebido.length(); i++){
        charAtual = nomeRecebido[i];
        if(i == 0){
            if(charAtual < LETRA_A || charAtual > LETRA_Z){
                throw invalid_argument("Argumento inválido.");
            }
        }
        else {
            charAnterior = nomeRecebido[i-1];
            if((charAtual < LETRA_A || charAtual > LETRA_Z) && (charAtual < LETRA_a || charAtual > LETRA_z) && charAtual != ESPACO && charAtual != PONTO){
                throw invalid_argument("Argumento inválido.");
            }
            if(charAtual == PONTO){
                if((charAnterior < LETRA_A || charAnterior > LETRA_Z) && (charAnterior < LETRA_a || charAnterior > LETRA_z)){
                    throw invalid_argument("Argumento inválido");
                }
            }
            if(charAtual == ESPACO){
                if(charAnterior == ESPACO){
                    throw invalid_argument("Argumento inválido.");
                }
                if(i != nomeRecebido.length() - 1){
                    charProximo = nomeRecebido[i+1];
                    if(charProximo < LETRA_A || charProximo > LETRA_Z){
                        throw invalid_argument("Argumento inválido.");
                    }
                }

            }
        }
    }
}

void Nome::setNome(string nomeRecebido){
    validar(nomeRecebido);
;   this->nome = nomeRecebido;
}

Nome::Nome(){
    nome = DEFAULT;
}

Nome::Nome(string nomeRecebido){
    this->nome = nomeRecebido;
}
//fim classe Numero

//início classe Email
string Email::DEFAULT = "nome@dominio";
void Email::validar(string emailRecebido){
    int size = emailRecebido.length();
    int sizeNome = 0;
    int sizeDominio = 0;
    int ponto;
    for(int i=0; i < size; i++){
        if(emailRecebido[i]=='@')
            sizeNome = i;
        if(emailRecebido[i] == '.'){
            ponto = ponto + 1;
        }else{
            ponto = 0;
        }
        if(ponto == 2)
            throw invalid_argument("argumento invalido");
    }
    sizeDominio = size - sizeNome - 1;
    if(sizeNome < 1 || sizeNome>MAX_NOME)
        throw invalid_argument("argumento invalido");
    if(sizeDominio < 1 || sizeDominio>MAX_DOMINIO)
        throw invalid_argument("argumento invalido");
    for(int i=0; i<size; i++){
        if(i!=sizeNome){
            if(emailRecebido[i]<'a' || emailRecebido[i]>'z')
                if(emailRecebido[i]<'A' || emailRecebido[i]>'Z')
                    if(emailRecebido[i]<'0' || emailRecebido[i]>'9')
                        if(emailRecebido[i]!= '.')
                            throw invalid_argument("argumento invalido");
        }
    }
}

void Email::setEmail(string emailRecebido){
    validar(emailRecebido);
    email.assign(emailRecebido);
}

Email::Email(){
    email = DEFAULT;
}

Email::Email(string emailRecebido){
    email.assign(emailRecebido);
}
//fim classe Email


// Inicio - ENDERECO
string Endereco::DEFAULT = "XXXXX";

void Endereco::validar(string enderecoRecebido){

    int tamanhoE = int(enderecoRecebido.length());

    if((tamanhoE < LIMITE_INFERIOR)||(tamanhoE > LIMITE_SUPERIOR))
        throw length_error("Fora do tamanho especificado.");

    for(int i = 0; i < tamanhoE; i++){
        if(!((enderecoRecebido[i] == '.')||(enderecoRecebido[i] == ' ') ||
            ((enderecoRecebido[i] >= 'a')&&(enderecoRecebido[i] <= 'z'))||
            ((enderecoRecebido[i] >= 'A')&&(enderecoRecebido[i] <= 'Z'))||
            ((enderecoRecebido[i] >= '0')&&(enderecoRecebido[i] <= '9'))))
            throw invalid_argument("Argumento invalido.");
    }

}

void Endereco::setEndereco(string enderecoRecebido){

    validar(enderecoRecebido);
    endereco.assign(enderecoRecebido);

}

Endereco::Endereco(){

    endereco.assign(DEFAULT);

}

Endereco::Endereco(string enderecoRecebido){

    endereco.assign(enderecoRecebido);

}
// Fim - Endereco

// Inicio - Moeda
string Moeda::DEFAULT = "0,00";

void Moeda::validar(string moedaRecebida){

    int tamanhoM = int(moedaRecebida.length());

    if((tamanhoM < LIMITE_INFERIOR)||(tamanhoM > LIMITE_SUPERIOR))
        throw length_error("Fora do tamanho especificado.");

    if((tamanhoM == TAMANHO_INVALIDO1)||(tamanhoM == TAMANHO_INVALIDO2))
        throw length_error("Tamanho invalido.");

    for(int i = (tamanhoM-1); i >= 0; i--){
        if((i == (tamanhoM-1))||(i == (tamanhoM-2))||(i == (tamanhoM-4))||
           (i == (tamanhoM-5))||(i == (tamanhoM-6))||(i == (tamanhoM-8))||
           (i == (tamanhoM-9))||(i == (tamanhoM-10))){
            if(!((moedaRecebida[i] >= '0')&&(moedaRecebida[i] <= '9')))
                throw invalid_argument("Argumento invalido.");
        }
        if(i == (tamanhoM-3)){
            if(moedaRecebida[i] != ',')
                throw invalid_argument("Argumento invalido.");
        }
        if((i == (tamanhoM-7))||(i == (tamanhoM-11))){
            if(moedaRecebida[i] != '.')
                throw invalid_argument("Argumento invalido.");
        }
        if(i == (tamanhoM-12)){
            if(!((moedaRecebida[i] == '1')&&(moedaRecebida[i+2] == '0')&&(moedaRecebida[i+3] == '0')&&
                 (moedaRecebida[i+4] == '0')&&(moedaRecebida[i+6] == '0')&&(moedaRecebida[i+7] == '0')&&
                 (moedaRecebida[i+8] == '0')&&(moedaRecebida[i+10] == '0')&&(moedaRecebida[i+11] == '0')))
                throw invalid_argument("Argumento invalido.");
        }
    }

}

double Moeda::converte(string moedaRecebida){

    const double FALHA = -1.0;
    double valor = FALHA;
    int tamanhoM = int(moedaRecebida.length());
    int zeroASCII = 48;

    try{
        validar(moedaRecebida);
    }
    catch(length_error &excecao1){
        return FALHA;
    }
    catch(invalid_argument &excecao2){
        return FALHA;
    }

    switch(tamanhoM){

    case 4:
        valor = ((int(moedaRecebida[0])-zeroASCII)*1.0)+
                ((int(moedaRecebida[2])-zeroASCII)*0.1)+
                ((int(moedaRecebida[3])-zeroASCII)*0.01);
        break;
    case 5:
        valor = ((int(moedaRecebida[0])-zeroASCII)*10.0)+
                ((int(moedaRecebida[1])-zeroASCII)*1.0)+
                ((int(moedaRecebida[3])-zeroASCII)*0.1)+
                ((int(moedaRecebida[4])-zeroASCII)*0.01);
        break;
    case 6:
        valor = ((int(moedaRecebida[0])-zeroASCII)*100.0)+
                ((int(moedaRecebida[1])-zeroASCII)*10.0)+
                ((int(moedaRecebida[2])-zeroASCII)*1.0)+
                ((int(moedaRecebida[4])-zeroASCII)*0.1)+
                ((int(moedaRecebida[5])-zeroASCII)*0.01);
        break;
    case 8:
        valor = ((int(moedaRecebida[0])-zeroASCII)*1000.0)+
                ((int(moedaRecebida[2])-zeroASCII)*100.0)+
                ((int(moedaRecebida[3])-zeroASCII)*10.0)+
                ((int(moedaRecebida[4])-zeroASCII)*1.0)+
                ((int(moedaRecebida[6])-zeroASCII)*0.1)+
                ((int(moedaRecebida[7])-zeroASCII)*0.01);
        break;
    case 9:
        valor = ((int(moedaRecebida[0])-zeroASCII)*10000.0)+
                ((int(moedaRecebida[1])-zeroASCII)*1000.0)+
                ((int(moedaRecebida[3])-zeroASCII)*100.0)+
                ((int(moedaRecebida[4])-zeroASCII)*10.0)+
                ((int(moedaRecebida[5])-zeroASCII)*1.0)+
                ((int(moedaRecebida[7])-zeroASCII)*0.1)+
                ((int(moedaRecebida[8])-zeroASCII)*0.01);
        break;
    case 10:
        valor = ((int(moedaRecebida[0])-zeroASCII)*100000.0)+
                ((int(moedaRecebida[1])-zeroASCII)*10000.0)+
                ((int(moedaRecebida[2])-zeroASCII)*1000.0)+
                ((int(moedaRecebida[4])-zeroASCII)*100.0)+
                ((int(moedaRecebida[5])-zeroASCII)*10.0)+
                ((int(moedaRecebida[6])-zeroASCII)*1.0)+
                ((int(moedaRecebida[8])-zeroASCII)*0.1)+
                ((int(moedaRecebida[9])-zeroASCII)*0.01);
        break;
    case 12:
        valor = ((int(moedaRecebida[0])-zeroASCII)*1000000.0)+
                ((int(moedaRecebida[2])-zeroASCII)*100000.0)+
                ((int(moedaRecebida[3])-zeroASCII)*10000.0)+
                ((int(moedaRecebida[4])-zeroASCII)*1000.0)+
                ((int(moedaRecebida[6])-zeroASCII)*100.0)+
                ((int(moedaRecebida[7])-zeroASCII)*10.0)+
                ((int(moedaRecebida[8])-zeroASCII)*1.0)+
                ((int(moedaRecebida[10])-zeroASCII)*0.1)+
                ((int(moedaRecebida[11])-zeroASCII)*0.01);
        break;
    }

    return valor;

}

void Moeda::setMoeda(string moedaRecebida){

    validar(moedaRecebida);
    moeda.assign(moedaRecebida);

}

Moeda::Moeda(){

    moeda.assign(DEFAULT);

}

Moeda::Moeda(string moedaRecebida){

    moeda.assign(moedaRecebida);

}
// Fim - MOEDA

// Inicio - SENHA
string Senha::DEFAULT = "XXXXXX";

void Senha::validar(string senhaRecebida){

    int tamanhoS = int(senhaRecebida.length());
    int cont1 = 0;
    int cont2;
    bool MAIUSCULA = false;
    bool MINUSCULA = false;
    bool DIGITO = false;

    if(tamanhoS != TAMANHO)
        throw length_error("Fora do tamanho especificado.");

    for(int i = 0; i < TAMANHO; ++i){
        if(!(((senhaRecebida[i] >= 'a')&&(senhaRecebida[i] <= 'z')) ||
             ((senhaRecebida[i] >= 'A')&&(senhaRecebida[i] <= 'Z')) ||
             ((senhaRecebida[i] >= '0')&&(senhaRecebida[i] <= '9'))))
            throw invalid_argument("Argumento invalido.");
        if((senhaRecebida[i] >= 'a')&&(senhaRecebida[i] <= 'z'))
            MINUSCULA = true;
        if((senhaRecebida[i] >= 'A')&&(senhaRecebida[i] <= 'Z'))
            MAIUSCULA = true;
        if((senhaRecebida[i] >= '0')&&(senhaRecebida[i] <= '9'))
            DIGITO = true;
    }

    if(!(MINUSCULA && MAIUSCULA && DIGITO))
        throw invalid_argument("Ausencia de letra minuscula ou letra maiscula ou digito.");

    while(cont1 < (TAMANHO-1)){
        cont2 = cont1+1;
        while(cont2 < TAMANHO){
            if(senhaRecebida[cont1] == senhaRecebida[cont2])
                throw invalid_argument("Caracteres repetidos.");
            ++cont2;
        }
        ++cont1;
    }

}

void Senha::setSenha(string senhaRecebida){

    validar(senhaRecebida);
    senha.assign(senhaRecebida);

}

Senha::Senha(){

    senha.assign(DEFAULT);

}

Senha::Senha(string senhaRecebida){

    senha.assign(senhaRecebida);

}
// Fim - SENHA

/* ---------- CÓDIGO ORIGINAL PROFESSOR ----------
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


//Definições de métodos.

void Codigo::validar(int codigo){

    // Lança exceção se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo){
    validar(codigo);
    this->codigo = codigo;
}
*/
