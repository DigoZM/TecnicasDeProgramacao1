#include "testes.h"


// Inicio - TESTE CODIGO
string TUCodigo::CODIGO_VALIDO = "ABC12";
string TUCodigo::CODIGO_INVALIDO = "FORA.DO.LIMITE";

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(CODIGO_VALIDO);
        if(codigo->getCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(length_error &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(length_error &excecao1){
        if(codigo->getCodigo() == CODIGO_INVALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if(codigo->getCodigo() == CODIGO_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// Fim - TESTE CODIGO

//início TU classe Classe
void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(CLASSE_VALIDA);
        if (classe->getClasse() != CLASSE_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(CLASSE_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == CLASSE_INVALIDA)
            estado = FALHA;
        return;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//fim TU classe Classe

//início TU classe Descrição
string TUDescricao::DESCRICAO_VALIDA = "Esta é uma descrição válida.";
string TUDescricao::DESCRICAO_INVALIDA = "Esta é uma descrição inválida";
string TUDescricao::DESCRICAO_INVALIDA2 = "inv.";

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(DESCRICAO_VALIDA);
        if (descricao->getDescricao() != DESCRICAO_VALIDA)
            estado = FALHA;
    }
    catch(out_of_range &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha1(){
    try{
        descricao->setDescricao(DESCRICAO_INVALIDA);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (descricao->getDescricao() == DESCRICAO_INVALIDA)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (descricao->getDescricao() == DESCRICAO_INVALIDA)
            estado = FALHA;
        return;
    }
}

void TUDescricao::testarCenarioFalha2(){
    try{
        descricao->setDescricao(DESCRICAO_INVALIDA2);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (descricao->getDescricao() == DESCRICAO_INVALIDA2)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (descricao->getDescricao() == DESCRICAO_INVALIDA2)
            estado = FALHA;
        return;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    tearDown();
    return estado;
}
//fim TU classe Descrição

//início TU classe Data
string TUData::DATA_VALIDA = "12-07-21";
string TUData::DATA_INVALIDA = "29-02-21";
string TUData::DATA_INVALIDA2 = "03-14-50";

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(DATA_VALIDA);
        if (data->getData() != DATA_VALIDA)
            estado = FALHA;
    }
    catch(out_of_range &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha1(){
    try{
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (data->getData() == DATA_INVALIDA)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (data->getData() == DATA_INVALIDA)
            estado = FALHA;
        return;
    }
}

void TUData::testarCenarioFalha2(){
    try{
        data->setData(DATA_INVALIDA2);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (data->getData() == DATA_INVALIDA2)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (data->getData() == DATA_INVALIDA2)
            estado = FALHA;
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    tearDown();
    return estado;
}
//fim TU classe Data

//início TU classe Número
void TUNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUNumero::tearDown(){
    delete numero;
}

void TUNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(NUMERO_VALIDO);
        if (numero->getNumero() != NUMERO_VALIDO)
            estado = FALHA;
    }
    catch(out_of_range &excecao){
        estado = FALHA;
    }
}

void TUNumero::testarCenarioFalha1(){
    try{
        numero->setNumero(NUMERO_INVALIDO_MIN);
        estado = FALHA;
    }
    catch(out_of_range &excecao){
        if (numero->getNumero() == NUMERO_INVALIDO_MIN)
            estado = FALHA;
        return;
    }
}

void TUNumero::testarCenarioFalha2(){
    try{
        numero->setNumero(NUMERO_INVALIDO_MAX);
        estado = FALHA;
    }
    catch(out_of_range &excecao){
        if (numero->getNumero() == NUMERO_INVALIDO_MAX)
            estado = FALHA;
        return;
    }
}

int TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    tearDown();
    return estado;
}
//fim TU classe Número

//início TU classe Nome
string TUNome::NOME_VALIDO = "Beltrano A. Souza";
string TUNome::NOME_INVALIDO = "Cicrano afonso";

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO)
            estado = FALHA;
    }
    catch(out_of_range &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (nome->getNome() == NOME_INVALIDO)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (nome->getNome() == NOME_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//fim TU classe Nome

//início TU classe Email
string TUEmail::EMAIL_VALIDO = "nome@dominio.com";
string TUEmail::EMAIL_INVALIDO = "nome@dominio..com";
string TUEmail::EMAIL_INVALIDO2 = "@dominio.com";
string TUEmail::EMAIL_INVALIDO3 = "nome@";
string TUEmail::EMAIL_INVALIDO4 = "nome@dominio.com#";
string TUEmail::EMAIL_INVALIDO5 = "nomeForaDeRange@dominio.com";
string TUEmail::EMAIL_INVALIDO6 = "nome@dominioForaDeRange.com";

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(EMAIL_VALIDO);
        if (email->getEmail() != EMAIL_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(EMAIL_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO)
            estado = FALHA;
        return;
    }
}

void TUEmail::testarCenarioFalha2(){
    try{
        email->setEmail(EMAIL_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO2)
            estado = FALHA;
        return;
    }
}

void TUEmail::testarCenarioFalha3(){
    try{
        email->setEmail(EMAIL_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO3)
            estado = FALHA;
        return;
    }
}

void TUEmail::testarCenarioFalha4(){
    try{
        email->setEmail(EMAIL_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO4)
            estado = FALHA;
        return;
    }
}

void TUEmail::testarCenarioFalha5(){
    try{
        email->setEmail(EMAIL_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO5)
            estado = FALHA;
        return;
    }
}

void TUEmail::testarCenarioFalha6(){
    try{
        email->setEmail(EMAIL_INVALIDO6);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == EMAIL_INVALIDO6)
            estado = FALHA;
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    testarCenarioFalha5();
    testarCenarioFalha6();
    tearDown();
    return estado;
}
//fim TU classe Email

// Inicio - TESTE ENDERECO
string TUEndereco::ENDERECO_VALIDO = "R. Douglas Adams 42";
string TUEndereco::ENDERECO_INVALIDO = "R. dos Alfeneiros, 4";

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(ENDERECO_VALIDO);
        if(endereco->getEndereco() != ENDERECO_VALIDO)
            estado = FALHA;
    }
    catch(length_error &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(ENDERECO_INVALIDO);
        estado = FALHA;
    }
    catch(length_error &excecao1){
        if(endereco->getEndereco() == ENDERECO_INVALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if(endereco->getEndereco() == ENDERECO_INVALIDO)
            estado = FALHA;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// Fim - TESTE ENDERECO

// Inicio - TESTE MOEDA
string TUMoeda::MOEDA_VALIDA = "8.500,49";
string TUMoeda::MOEDA_INVALIDA = "85.00,49";

void TUMoeda::setUp(){
    moeda = new Moeda();
    estado = SUCESSO;
}

void TUMoeda::tearDown(){
    delete moeda;
}

void TUMoeda::testarCenarioSucesso(){
    try{
        moeda->setMoeda(MOEDA_VALIDA);
        if(moeda->getMoeda() != MOEDA_VALIDA)
            estado = FALHA;
    }
    catch(length_error &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUMoeda::testarCenarioFalha(){
    try{
        moeda->setMoeda(MOEDA_INVALIDA);
        estado = FALHA;
    }
    catch(length_error &excecao1){
        if(moeda->getMoeda() == MOEDA_INVALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if(moeda->getMoeda() == MOEDA_INVALIDA)
            estado = FALHA;
    }
}

int TUMoeda::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// Fim - TESTE MOEDA

// Inicio - TESTE SENHA
string TUSenha::SENHA_VALIDA = "RU5e20";
string TUSenha::SENHA_INVALIDA = "UnB.s2";

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(SENHA_VALIDA);
        if(senha->getSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(length_error &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(length_error &excecao1){
        if(senha->getSenha() == SENHA_INVALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        if(senha->getSenha() == SENHA_INVALIDA)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// Fim - TESTE SENHA

//início TU classe Telefone
string TUTelefone::TELEFONE_VALIDO = "(061)-984563521";
string TUTelefone::TELEFONE_INVALIDO = "(000)-000000000";

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(TELEFONE_VALIDO);
        if (telefone->getTelefone() != TELEFONE_VALIDO)
            estado = FALHA;
    }
    catch(out_of_range &excecao1){
        estado = FALHA;
    }
    catch(invalid_argument &excecao2){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(TELEFONE_INVALIDO);
        estado = FALHA;
    }
    catch(out_of_range &excecao1){
        if (telefone->getTelefone() == TELEFONE_INVALIDO)
            estado = FALHA;
        return;
    }
    catch(invalid_argument &excecao2){
        if (telefone->getTelefone() == TELEFONE_INVALIDO)
            estado = FALHA;
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//fim TU classe Telefone

//Inicio TU Entidade Proposta
string TUProposta::CODIGO_VALIDO = "ABCDE";
string TUProposta::DATA_INICIAL_VALIDA = "01-03-21";
string TUProposta::DATA_FINAL_VALIDA = "12-07-22";
int TUProposta::HOSPEDE_VALIDO = 10;
string TUProposta::VALOR_VALIDO = "100,00";

void TUProposta::setUp(){
    proposta = new Proposta();
    estado = SUCESSO;
}

void TUProposta::tearDown(){
    delete proposta;
}

void TUProposta::testarCenario(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    proposta->setCodigoProposta(codigo);
    if(proposta->getCodigoProposta().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Data dataInicial;
    dataInicial.setData(DATA_INICIAL_VALIDA);
    proposta->setDataInicialProposta(dataInicial);
    if(proposta->getDataInicialProposta().getData() != DATA_INICIAL_VALIDA)
        estado = FALHA;

    Data dataFinal;
    dataFinal.setData(DATA_FINAL_VALIDA);
    proposta->setDataFinalProposta(dataFinal);
    if(proposta->getDataFinalProposta().getData() != DATA_FINAL_VALIDA)
        estado = FALHA;

    Numero hospede;
    hospede.setNumero(HOSPEDE_VALIDO);
    proposta->setHospedeProposta(hospede);
    if(proposta->getHospedeProposta().getNumero() != HOSPEDE_VALIDO)
        estado = FALHA;

    Moeda valor;
    valor.setMoeda(VALOR_VALIDO);
    proposta->setValorProposta(valor);
    if(proposta->getValorProposta().getMoeda() != VALOR_VALIDO)
        estado = FALHA;
}

int TUProposta::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
//Fim TU Entidade Proposta

// Inicio TU Entidade Imovel
string TUImovel::CODIGO_VALIDO = "MNO98";
int TUImovel::CLASSE_VALIDA = 1;
string TUImovel::DESCRICAO_VALIDA = "Essa é uma descrição válida.";
string TUImovel::ENDERECO_VALIDO = "R. Douglas Adams 42";
string TUImovel::DATA_INICIAL_VALIDA = "01-05-21";
string TUImovel::DATA_FINAL_VALIDA = "25-12-22";
int TUImovel::HOSPEDE_VALIDO = 8;
string TUImovel::VALOR_VALIDO = "79,90";

void TUImovel::setUp(){
    imovel = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete imovel;
}

void TUImovel::testarCenario(){
    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    imovel->setCodigoImovel(codigo);
    if(imovel->getCodigoImovel().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Classe classe;
    classe.setClasse(CLASSE_VALIDA);
    imovel->setClasseImovel(classe);
    if(imovel->getClasseImovel().getClasse() != CLASSE_VALIDA)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    imovel->setDescricaoImovel(descricao);
    if(imovel->getDescricaoImovel().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;

    Endereco endereco;
    endereco.setEndereco(ENDERECO_VALIDO);
    imovel->setEnderecoImovel(endereco);
    if(imovel->getEnderecoImovel().getEndereco() != ENDERECO_VALIDO)
        estado = FALHA;

    Data dataInicial;
    dataInicial.setData(DATA_INICIAL_VALIDA);
    imovel->setDataInicialImovel(dataInicial);
    if(imovel->getDataInicialImovel().getData() != DATA_INICIAL_VALIDA)
        estado = FALHA;

    Data dataFinal;
    dataFinal.setData(DATA_FINAL_VALIDA);
    imovel->setDataFinalImovel(dataFinal);
    if(imovel->getDataFinalImovel().getData() != DATA_FINAL_VALIDA)
        estado = FALHA;

    Numero hospede;
    hospede.setNumero(HOSPEDE_VALIDO);
    imovel->setHospedesImovel(hospede);
    if(imovel->getHospedesImovel().getNumero() != HOSPEDE_VALIDO)
        estado = FALHA;

    Moeda valor;
    valor.setMoeda(VALOR_VALIDO);
    imovel->setValorImovel(valor);
    if(imovel->getValorImovel().getMoeda() != VALOR_VALIDO)
        estado = FALHA;
}

int TUImovel::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
// Fim TU Entidade Imovel

//Início TU Entidade Usuario
string TUUsuario::NOME_VALIDO = "Nome Do Usuario";
string TUUsuario::EMAIL_VALIDO = "email@dominio.com";
string TUUsuario::SENHA_VALIDA = "ABcd56";
string TUUsuario::TELEFONE_VALIDO = "(061)-998765432";

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenario(){
    Nome nome;
    nome.setNome(NOME_VALIDO);
    usuario->setNomeUsuario(nome);
    if(usuario->getNomeUsuario().getNome() != NOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmail(EMAIL_VALIDO);
    usuario->setEmailUsuario(email);
    if(usuario->getEmailUsuario().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDA);
    usuario->setSenhaUsuario(senha);
    if(usuario->getSenhaUsuario().getSenha() != SENHA_VALIDA)
        estado = FALHA;

    Telefone telefone;
    telefone.setTelefone(TELEFONE_VALIDO);
    usuario->setTelefoneUsuario(telefone);
    if(usuario->getTelefoneUsuario().getTelefone() != TELEFONE_VALIDO)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
//Fim TU entidade Usuário
