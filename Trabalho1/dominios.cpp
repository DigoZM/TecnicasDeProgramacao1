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

/**
* @brief Valida a entrada que ser&aacute; alocada em classe.
* @details Essa fun&ccedil;&atilde;o checa se o valor que ser&aacute; armazenado em classe &eacute; v&aacute;lido, ou seja, &eacute; igual a um dos valores esperados: 1 para apartamento, 2 para casa e 3 para quarto.
* @param classeRecebida Valor que ser&aacute; validado.
*/
void Classe::validar(int classeRecebida){

    if(classeRecebida != APARTAMENTO && classeRecebida != CASA && classeRecebida != QUARTO){
        throw invalid_argument("Argumento invalido");
    }

}

/**
* @brief Atribui o valor de classe a classe.
* @details Fun&ccedil;&atilde;o que atribui o valor a classe Classe se este for v&aacute;lido.
* @param classeRecebida Valor a ser atribuido.
*/

void Classe::setClasse(int classeRecebida){

    validar(classeRecebida);
    this->classe = classeRecebida;

}

/**
* @brief Inicializa o objeto com classe 1 (Apartamento).
*/
Classe::Classe(){
    classe = DEFAULT;
}

/**
* @brief Inicializa o objeto com classe repassada.
* @param classe Valor que ser&aacute; atribuido ao objeto.
*/
Classe::Classe(int classe){
    this->classe = classe;
}
//fim classe Classe


//início classe Descrição
string Descricao::DEFAULT = "Imóvel sem descrição.";

/**
* @brief Valida a entrada que ser&aacute; alocada em descri&ccedil;&atilde;o.
* @details Garante que a string que est&aacute; sendo alocada em descri&ccedil;&atilde;o tem entre 5 e 30 caracteres e que &eacute; terminada em ponto.
* @param descricaoRecebida String que ser&aacute; validada.
*/
void Descricao::validar(string descricaoRecebida){
    int size = descricaoRecebida.length();
    if(size > MAXIMO || size < MINIMO){
        throw out_of_range("fora de limite");
    }
    if(descricaoRecebida[size-1] != '.'){
        throw invalid_argument("Argumento invalido");
    }
}

/**
* @brief Valida e atribui uma string ao par&acirc;metro descri&ccedil;&atilde;o.
* @details Fun&ccedil;&atilde;o que valida e atribui uma string ao par&acirc;metro descri&ccedil;&atilde;o da classe Descri&ccedil;&atilde;o.
* @param descricaoRecebida String a ser atribuida.
*/
void Descricao::setDescricao(string descricaoRecebida){
    validar(descricaoRecebida);
    descricao.assign(descricaoRecebida);
}

/**
* @brief Inicializa o objeto com par&acirc;metro DEFAULT ('Im&oacute;vel sem descri&ccedil;&atilde;o.').
*/
Descricao::Descricao(){
    descricao = DEFAULT;
}

/**
* @brief Inicializa o objeto com descri&ccedil;&atilde;o passada como par&acirc;metro.
* @param descricaoRecebida Valor que ser&aacute; atribuido ao objeto.
*/
Descricao::Descricao(string descricaoRecebida){
    descricao.assign(descricaoRecebida);
}
//fim classe Descrição


string Data::DEFAULT = "01-01-2021";

/**
* @brief Valida a entrada que ser&aacute; alocada em data.
* @details Essa fun&ccedil;&atilde;o checa se o valor que ser&aacute; armazenado em data &eacute; v&aacute;lido, ou seja, possui formato DD-MM-AA, sendo Dia entre 01 e 31, m&ecirc;s entre 01 e 12 e ano entre 21 e 99.
* @param dataRecevida Valor que ser&aacute; validado.
*/

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
    if(dataRecebida[2] != '-' || dataRecebida[5] != '-'){
        throw invalid_argument("Argumento fora do formato esperado.");
    }

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

/**
* @brief Atribui o valor de data a classe.
* @details Fun&ccedil;&atilde;o que atribui o valor a data classe, se este for v&aacute;lido.
* @param dataRecebida Valor a ser atribuido.
*/


void Data::setData(string dataRecebida){

    validar(dataRecebida);
    this->data = dataRecebida;

}

/**
* @brief Inicializa o objeto com data 01-01-2021.
*/

Data::Data(){
    data = DEFAULT;
}

/**
* @brief Inicializa o objeto com data repassada.
* @param data Valor que ser&aacute; atribuido ao objeto.
*/

Data::Data(string data){
    this->data = data;
}

//fim classe Data

//início classe Número

/**
* @brief Valida a entrada que ser&aacute; alocada em n&uacute;mero.
* @details Garante que o inteiro que est&aacute; sendo alocada em n&uacute;mero esteja no intervalo entre 0 e 20.
* @param numeorRecebido Inteiro que ser&aacute; validado.
*/
void Numero::validar(int numeroRecebido){
    if(numeroRecebido < MINIMO || numeroRecebido > MAXIMO){
        throw out_of_range("fora do limite");
    }
}

/**
* @brief Valida e atribui um inteiro ao par&acirc;metro n&uacute;mero.
* @details Fun&ccedil;&atilde;o que valida e atribui um inteiro ao par&acirc;metro n&uacute;mero da classe N&uacute;mero.
* @param numeroRecebido Inteiro a ser atribuido.
*/
void Numero::setNumero(int numeroRecebido){
    validar(numeroRecebido);
    this->numero = numeroRecebido;
}

/**
* @brief Inicializa o objeto com par&acirc;metro DEFAULT (0).
*/
Numero::Numero(){
    numero = DEFAULT;
}

/**
* @brief Inicializa o objeto com n&uacute;mero passado como par&acirc;metro.
* @param numeroRecebido Valor que ser&aacute; atribuido ao objeto.
*/
Numero::Numero(int numeroRecebido){
    this->numero = numeroRecebido;
}
//fim classe Numero



string Nome::DEFAULT = "Fulano da Silva";

/**
* @brief Valida a entrada que ser&aacute; alocada em nome.
* @details Essa fun&ccedil;&atilde;o checa se o valor que ser&aacute; armazenado em nome &eacute; v&aacute;lido, ou seja, possui entre 5 a 25 letras de A a Z, com ponto precedido por letra, sem espa&ccedil;os em sequ&ecirc;ncia e com a primeira letra de casa termo mai&uacute;scula.
* @param nomeRecebido Valor que ser&aacute; validado.
*/

void Nome::validar(string nomeRecebido){
    int charAtual, charAnterior, charProximo;
    int nomeTamanho = nomeRecebido.length();

    if(nomeTamanho < MINIMO || nomeTamanho > MAXIMO){
        throw out_of_range("fora do limite");
    }
    for (int i = 0; i < nomeTamanho; i++){
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
                if(i != nomeTamanho- 1){
                    charProximo = nomeRecebido[i+1];
                    if(charProximo < LETRA_A || charProximo > LETRA_Z){
                        throw invalid_argument("Argumento inválido.");
                    }
                }

            }
        }
    }
}

/**
* @brief Atribui o valor de nome a classe.
* @details Fun&ccedil;&atilde;o que atribui o valor ao nome da classe, se este for v&aacute;lido.
* @param nomeRecebido Valor a ser atribuido.
*/

void Nome::setNome(string nomeRecebido){
    validar(nomeRecebido);
;   this->nome = nomeRecebido;
}

/**
* @brief Inicializa o objeto com nome Fulano da Silva.
*/

Nome::Nome(){
    nome = DEFAULT;
}

/**
* @brief Inicializa o objeto com nome repassado.
* @param nomeRecebido Valor que ser&aacute; atribuido ao objeto.
*/


Nome::Nome(string nomeRecebido){
    this->nome = nomeRecebido;
}
//fim classe Numero

//início classe Email
string Email::DEFAULT = "nome@dominio";

/**
* @brief Valida a entrada que ser&aacute; alocada em email.
* @details Garante que a string que est&aacute; sendo alocada em email &eacute; do tipo 'nome@dom&iacute;nio', tal que, nome tem no m&aacute;ximo 10 caracteres e dom&iacute;nio tem no m&aacute;ximo 20 caracteres. Tamb&eacute;m verifica se cada caractere &eacute; letra('A-Z' ou 'a-z'), d&iacute;gito('0-9') ou ponto, n&atilde;o podendo haver dois ou mais pontos em sequ&ecirc;ncia.
* @param emailRecebido String que ser&aacute; validada.
*/
void Email::validar(string emailRecebido){
    int size = emailRecebido.length();
    int sizeNome = 0;
    int sizeDominio = 0;
    int ponto = 0;
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

/**
* @brief Valida e atribui uma string ao par&acirc;metro email.
* @details Fun&ccedil;&atilde;o que valida e atribui uma string ao par&acirc;metro email da classe Email.
* @param emailRecebido String a ser atribuida.
*/
void Email::setEmail(string emailRecebido){
    validar(emailRecebido);
    email.assign(emailRecebido);
}

/**
* @brief Inicializa o objeto com par&acirc;metro DEFAULT ('nome@dominio').
*/
Email::Email(){
    email = DEFAULT;
}

/**
* @brief Inicializa o objeto com email passado como par&acirc;metro.
* @param emailRecebido Valor que ser&aacute; atribuido ao objeto.
*/
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

//Início Telefone
string Telefone::DEFAULT = "(012)-345678901";
string Telefone::INVALIDO = "(000)-000000000";

/**
* @brief Valida a entrada que ser&aacute; alocada em telefone.
* @details Essa fun&ccedil;&atilde;o checa se o valor que ser&aacute; armazenado em telefone &eacute; v&aacute;lido, ou seja, est&aacute; no formato (XXX)-XXXXXXXXX onde X &eacute; d&iacute;gito de 0 a 9.
* @param nomeRecebido Valor que ser&aacute; validado.
*/

void Telefone::validar(string telefoneRecebido){

    int tamanhoTelefone = telefoneRecebido.length();

    if(tamanhoTelefone != TAMANHO){
        throw out_of_range("Fora do tamanho especificado.");
    }
    if(telefoneRecebido[0] != '(' || telefoneRecebido[4] != ')' || telefoneRecebido[5] != '-'){
        throw invalid_argument("Argumento com formato diferente do padrão.");
    }
    for (int i = 1; i < tamanhoTelefone; i++){
        if(i == 4){
            i = 6; //Pula os caracteres especias na checagem de número
        }
        if(telefoneRecebido[i] < '0' || telefoneRecebido[i] > '9'){
            throw invalid_argument("Argumento com caracter não numérico.");
        }
        if(telefoneRecebido == INVALIDO){
            throw invalid_argument("Argumento (000)-000000000 não é número.");
        }
    }
}

/**
* @brief Atribui o valor de telefone a classe.
* @details Fun&ccedil;&atilde;o que atribui o valor ao telefone da classe, se este for v&aacute;lido.
* @param telefone Valor a ser atribuido.
*/


void Telefone::setTelefone(string telefone){
    validar(telefone);
    this->telefone = telefone;
}


/**
* @brief Inicializa o objeto com telefone repassado.
* @param telefone Valor que ser&aacute; atribuido ao objeto.
*/

Telefone::Telefone(string telefone){
    this->telefone = telefone;
}

/**
* @brief Inicializa o objeto com telefone (012)-345678901.
*/

Telefone::Telefone(){
    this->telefone = DEFAULT;
}

//Fim Telefone

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
