#include "controladorasapresentacao.h"
#include "containers.h"
#include <string>

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos das classes controladoras da camada de apresenta��o.


//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o controle.

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.
    char texto0[]="Bem vindo ao Belas Casas Praianas! \nEncontre o refugio que sempre sonhou.";
    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Descobrir imoveis disponiveis.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de sele��o de servi�o.

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de usuario.";
    char texto8[]="2 - Selecionar servicos de imoveis";
    char texto9[]="3 - Logout";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto0 << endl;
        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.

        campo = getchar() - '0';
        cout << campo << endl;                                                          // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&email)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o.

                            CLR_SCR;                                                            // Limpa janela.

                            cout << texto6 << endl;                                             // Imprime nome do campo.
                            cout << texto7 << endl;                                             // Imprime nome do campo.
                            cout << texto8 << endl;                                             // Imprime nome do campo.
                            cout << texto9 << endl;                                             // Imprime nome do campo.

                            campo = getchar() - '0';                                               // Leitura do campo de entrada e convers�o de ASCII.

                            switch(campo){
                                /*case 1: cntrApresentacaoPessoal->executar(email);                 // Solicita servi�o de pessoal.
                                        break;*/
                                case 2: cntrApresentacaoPropostaImoveis->executar(email);     // Solicita servi�o de proposta e imoveis.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        CLR_SCR;                                                                // Limpa janela.
                        cout << texto10 << endl;                                                // Imprime mensagem.
                        getchar();                                                                // Leitura de caracter digitado.
                    }
                    break;
            case 2: cout << "Case 2" << endl;
                    cntrApresentacaoPessoal->cadastrar();
                    break;
            /*case 3: cntrApresentacaoPropostaImoveis->listarImoveisDisponiveis();
                    break;*/
            case 4: apresentar = false;
                    cout << "Fechando programa" << endl;
                    break;
        }
    }
    return;
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o autentica��o.

bool CntrApresentacaoAutenticacao::autenticar(Email *email){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o email  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";
    char texto4[]="Login realizado com sucesso!";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            email->setEmail(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setSenha(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << texto3 << endl;                                                             // Informa formato incorreto.
            getchar();                                                                            // L� caracter digitado.
        }
    }
    return (cntr->autenticar(*email, senha));                                                     // Solicita servi�o de autentica��o.
}

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos da classe controladora apresenta��o pessoal.
/*
void CntrApresentacaoPessoal::executar(CPF cpf){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

        campo = getchar() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarDadosPessoais();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------
*/
void CntrApresentacaoPessoal::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Email           :";
    char texto4[] ="Senha           :";
    char texto5[] ="Telefone        :";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Usuario cadastrado com sucesso!!!";
    char texto12[]="Falha no cadastramento. Digite algo.";

    string campo1, campo2, campo3, campo4;                                               // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Nome nome;
    Email email;
    Senha senha;
    Telefone telefone;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.
    getchar();
    cout << texto1 << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << texto2 << " ";                                                                     // Imprime nome do campo.
    getline(cin, campo1);
    cout<<campo1<<endl;                                                                             // L� valor do campo.
    cout << texto3 << " ";                                                                     // Imprime nome do campo.
    getline(cin, campo2);                                                                            // L� valor do campo.
    cout << texto4 << " ";                                                                     // Imprime nome do campo.
    getline(cin, campo3);                                                                              // L� valor do campo.
    cout << texto5 << " ";                                                                     // Imprime nome do campo.
    getline(cin, campo4);                                                                               // L� valor do campo.


    try{
        nome.setNome(string(campo1));
        email.setEmail(string(campo2));
        senha.setSenha(string(campo3));
        telefone.setTelefone(string(campo4));
    }
    catch(...){
        cout << texto10 << endl;                                                                // Informa formato incorreto.
        getchar();                                                                                // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    Usuario usuario;

    usuario.setNomeUsuario(nome);
    usuario.setEmailUsuario(email);
    usuario.setSenhaUsuario(senha);
    usuario.setTelefoneUsuario(telefone);

    // Cadastra usu�rio.

    if(cntrServicoPessoal->cadastrarUsuario(usuario)){
        cout << texto11 << endl;                                                                    // Informa sucesso.
        getchar();
        return;
    }

    cout << texto12 << endl;                                                                            // Informa falha.
    getchar();

    return;
}

//--------------------------------------------------------------------------------------------
/*
void CntrApresentacaoPessoal::consultarDadosPessoais(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    char texto[]="Servico consultar dados pessoais nao implementado. Digite algo.";             // Mensagem a ser apresentada.
    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar produto de investimento.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada.

        switch(campo){
            case 1: consultarProdutoInvestimento();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------
*/
void CntrApresentacaoPropostaImoveis::executar(Email email){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Cadastrar Imovel.";
    char texto3[] ="2 - Descadastrar Imovel.";
    char texto4[] ="3 - Editar Informacoes de Imovel.";
    char texto5[] ="4 - Cadastrar Proposta.";
    char texto6[] ="5 - Listar Propostas Recebidas.";
    char texto7[] ="6 - Listar Propostas Feitas.";
    char texto8[] ="7 - Apresentar Dados Proposta.";
    char texto9[] ="8 - Descadastrar Proposta.";
    char texto10[] ="9 - Listar Imoveis Disponiveis.";
    char texto11[] ="10 - Apresentar Dados de Imoveis.";
    char texto12[] ="11 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.
        cout << texto6 << endl;                                                                 // Imprime nome do campo.
        cout << texto7 << endl;                                                                 // Imprime nome do campo.
        cout << texto8 << endl;                                                                 // Imprime nome do campo.
        cout << texto9 << endl;
        cout << texto10 << endl;
        cout << texto11 << endl;


        campo = getchar() - '0';                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: cadastrarI(email);
                    break;
            /*case 2: descadastrarImovel();
                    break; */
            case 3: editarI(email);
                    break; 
           /* case 4: cadastrarP(email);
                    break;
            /* case 5: listarPropostasRecebidas();
                    break;
            case 6: listarPropostasFeitas();
                    break;
            case 7:
            case 8:
            case 9:
            case 10:*/
            case 11: apresentar = false;
                     break;
        }
    }
}

//--------------------------------------------------------------------------------------------
/*
void CntrApresentacaoProdutosFinanceiros::consultarConta(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

//--------------------------------------------------------------------------------------------
*/
void CntrApresentacaoPropostaImoveis::cadastrarI(Email email){
    cout << "entrei" << endl;

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Codigo            :";
    char texto3[] ="Classe: (1)quarto na praia  (2)apartamento de frente para a praia  (3)casa praiana         :";
    char texto4[] ="Descricao(maximo 30 caracteres terminado em ponto)           :";
    char texto5[] ="Endereco(max 20 caracteres)        :";
    char texto6[] ="Data inicial     :";
    char texto7[] ="Data final       :";
    char texto8[] ="Numero de Hospedes :";
    char texto9[] ="Valor minimo desejado:";
    char texto10[] ="Erro. Digite algo.";
    char texto11[]="Imovel cadastrado com sucesso!!!";
    char texto12[]="Falha no cadastramento. Digite algo.";

    string campo1, campo2, campo3, campo4, campo5, campo6, campo7, campo8;       // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Codigo codigo;
    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data dataInicial, dataFinal;
    Numero hospede;
    Moeda valor;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.
    getchar();
    cout << texto1 << endl;
    cout << texto2 << " ";
    getline(cin, campo1);
    cout<<campo1<<endl;
    cout << texto3 << " ";
    getline(cin, campo2);
    cout<<campo2<<endl;
    cout << texto4 << " ";
    getline(cin, campo3);
    cout<<campo3<<endl;
    cout << texto5 << " ";
    getline(cin, campo4);
    cout<<campo4<<endl;
    cout << texto6 << " ";
    getline(cin, campo5);
    cout<<campo5<<endl;
    cout << texto7 << " ";
    getline(cin, campo6);
    cout<<campo6<<endl;
    cout << texto8 << " ";
    getline(cin, campo7);
    cout<<campo7<<endl;
    cout << texto9 << " ";
    getline(cin, campo8);
    cout<<campo8<<endl;


    try{
        codigo.setCodigo(string(campo1));
        classe.setClasse(stoi(campo2));
        descricao.setDescricao(string(campo3));
        endereco.setEndereco(string(campo4));
        dataInicial.setData(string(campo5));
        dataFinal.setData(string(campo6));
        hospede.setNumero(stoi(campo7));
        valor.setMoeda(string(campo8));
    }
    catch(...){
        cout << texto10 << endl;                                                                // Informa formato incorreto.
        getchar();                                                                                // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    Imovel imovel;

    imovel.setCodigoImovel(codigo);
    imovel.setEmailImovel(email);
    imovel.setClasseImovel(classe);
    imovel.setDescricaoImovel(descricao);
    imovel.setEnderecoImovel(endereco);
    imovel.setDataInicialImovel(dataInicial);
    imovel.setDataFinalImovel(dataFinal);
    imovel.setHospedesImovel(hospede);
    imovel.setValorImovel(valor);

    // Cadastra usu�rio.

    if(cntr->cadastrarImovel(imovel)){
        cout << texto11 << endl;                                                                    // Informa sucesso.
        getchar();
        return;
    }

    cout << texto12 << endl;                                                                            // Informa falha.
    getchar();

    return;

}

void CntrApresentacaoPropostaImoveis::editarI(Email email){
    char texto1[] = "Digite o codigo do Imovel que deseja editar: ";
    char texto2[] = "Qual campo deseja editar";
    char texto3[] ="1 - Classe";
    char texto4[] ="2 - Descricao";
    char texto5[] ="3 - Endereco";
    char texto6[] ="4 - Data inicial";
    char texto7[] ="5 - Data final";
    char texto8[] ="6 - Numero de Hospedes";
    char texto9[] ="7 - Valor minimo desejado";
    char texto10[] = "Erro. Digite algo.";
    char texto11[]="Falha no cadastramento. Digite algo.";
    char texto12[] = "imovel atualizado";
    char texto13[] = "nao foi possivel atualizar imovel";

    string campo1, campo3;
    int campo2;   

    Codigo codigoI;

    CLR_SCR;
    getchar();

    cout << texto1 << endl;
    getline(cin, campo1);

    try{
        codigoI.setCodigo(string(campo1));
    }
    catch(...){
        cout << texto10 << endl;
        getchar();
        return;
    }
    Imovel *imovel = new Imovel;
    imovel->setCodigoImovel(codigoI.getCodigo());


    ContainerImovel *container;
    container = ContainerImovel::getInstancia();

    Classe classe;
    Descricao descricao;
    Endereco endereco;
    Data data_inicial;
    Data data_final;
    Numero numero_hospedes;
    Moeda valor;

    if(container->pesquisar(imovel)){
        
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;
        cout << texto5 << endl;
        cout << texto6 << endl;
        cout << texto7 << endl;
        campo2 = getchar() - '0';
        getchar();

        switch (campo2){
        case 1:
            cout << "Digite a nova classe: " << endl;
            getline(cin, campo3);
            try
            {
                classe.setClasse(stoi(campo3));
            }
            catch(...)
            {
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setClasseImovel(classe);
            break;
        case 2:
            cout << "Digite a nova descricao: " << endl;
            getline(cin, campo3);
            try{
                descricao.setDescricao(campo3);
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setDescricaoImovel(descricao);
            break;
        case 3:
            cout << "Digite o novo endereço: " << endl;
            getline(cin, campo3);
            try{
                endereco.setEndereco(campo3);
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setEnderecoImovel(endereco);
            break;
        case 4:
            cout << "Digite a nova data inicial: " << endl;
            getline(cin, campo3);
            try{
                data_inicial.setData(campo3);
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setDataInicialImovel(data_inicial);
            break;
        case 5:
            cout << "Digite a nova data final: " << endl;
            getline(cin, campo3);
            try{
                data_final.setData(campo3);
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setDataFinalImovel(data_final);
            break;
        case 6:
            cout << "Digite novo numero maximo de hospedes: " << endl;
            getline(cin, campo3);
            try{
                numero_hospedes.setNumero(stoi(campo3));
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setHospedesImovel(numero_hospedes);
            break;
        case 7:
            cout << "Digite novo numero valor minimo do imovel: " << endl;
            getline(cin, campo3);
            try{
                valor.setMoeda(campo3);
            }catch(...){
                cout << texto10 << endl;
                getchar();
                return;
            }
            imovel->setValorImovel(valor);
            break;
        }
        

    }else{
        cout << "Codigo de Imovel Invalido" << endl;
        cout << texto11 << endl;
        getchar();
        return;
    }

    if(container->atualizar(*imovel)){
        cout << texto12 << endl;                                                                    // Informa sucesso.
        getchar();
        return;
    }

    cout << texto13 << endl;                                                                            // Informa falha.
    getchar();

    return;

    
    
}

void CntrApresentacaoPropostaImoveis::cadastrarP(Email email){

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Codigo Imovel:      ";
    char texto3[] ="Codigo Proposta:    ";
    char texto4[] ="Data inicial:       ";
    char texto5[] ="Data final:         ";
    char texto6[] ="Numero de Hospedes: ";
    char texto7[] ="Valor da proposta:  ";
    char texto8[] ="Erro. Digite algo.";
    char texto9[] ="Proposta cadastrada com sucesso!!!";
    char texto10[]="Falha no cadastramento. Digite algo.";

    string campo1, campo2, campo3, campo4, campo5, campo6;

    Codigo codigoI;
    Codigo codigoP;
    Data dataInicial, dataFinal;
    Numero hospede;
    Moeda valor;

    CLR_SCR;
    getchar();
    cout << texto1 << endl;
    cout << texto2 << " ";
    getline(cin, campo1);
    cout << texto3 << " ";
    getline(cin, campo2);
    cout << texto4 << " ";
    getline(cin, campo3);
    cout << texto5 << " ";
    getline(cin, campo4);
    cout << texto6 << " ";
    getline(cin, campo5);
    cout << texto7 << " ";
    getline(cin, campo6);

    try{
        codigoI.setCodigo(string(campo1));
        codigoP.setCodigo(string(campo2));
        dataInicial.setData(string(campo3));
        dataFinal.setData(string(campo4));
        hospede.setNumero(stoi(campo5));
        valor.setMoeda(string(campo6));
    }
    catch(...){
        cout << texto8 << endl;
        getchar();
        return;
    }

    Imovel *imovel = new Imovel;
    imovel->setCodigoImovel(codigoI.getCodigo());
    cout << imovel->getCodigoImovel().getCodigo() << endl;

    
    ContainerImovel *container;
    container = ContainerImovel::getInstancia();

    if(container->pesquisar(imovel)){

        //Datas
        string data_inicialrefstr, data_finalrefstr, data_inicialpropstr, data_finalpropstr;
        string data_inicial_imovel, data_final_imovel;
        data_inicial_imovel = imovel->getDataInicialImovel().getData();
        data_final_imovel = imovel->getDataFinalImovel().getData();

        for(int i = 0; i<6; i++){
            if(i==0 || i==1){
                data_inicialpropstr[i] = campo3[i+6];
                data_finalpropstr[i] = campo4[i+6];
                data_inicialrefstr[i] = data_inicial_imovel[i+6];
                data_finalrefstr[i] = data_final_imovel[i+6];
            }
            if(i==2 || i==3){
                data_inicialpropstr[i] = campo3[i+1];
                data_finalpropstr[i] = campo4[i+1];
                data_inicialrefstr[i] = data_inicial_imovel[i+1];
                data_finalrefstr[i] = data_final_imovel[i+1];
            }
            if(i==4 || i==5){
                data_inicialpropstr[i] = campo3[i-4];
                data_finalpropstr[i] = campo4[i-4];
                data_inicialrefstr[i] = data_inicial_imovel[i-4];
                data_finalrefstr[i] = data_final_imovel[i-4];
            }
        }

        int data_inicialref, data_finalref, data_inicialprop, data_finalprop;
        data_inicialprop = stoi(data_inicialpropstr);
        data_finalprop = stoi(data_finalpropstr);
        data_inicialref = stoi(data_inicialrefstr);
        data_finalref = stoi(data_finalrefstr);
        if(data_inicialprop >= data_finalprop){
            cout << "Data final anterior a data final." << endl;
            cout << texto10 << endl;
            getchar();
            return;
        }

        if(data_inicialprop < data_inicialref || data_finalprop > data_finalref){
            cout << "Data fora da disponibilidade, tente escolher novas datas!" << endl;
            cout << texto10 << endl;
            getchar();
            return;
        }
    
   
        //Hospedes
        if(imovel->getHospedesImovel().getNumero() < hospede.getNumero()){
            cout << "Numero de hospedes maior que o limite permitido no imovel" << endl;
            cout << texto10 << endl;
            getchar();
            return;
        }



        //Valor
        double valorPropostaD, valorImovelD;
        Moeda valorImovel;
        valorImovel = imovel->getValorImovel().getMoeda();
        valorPropostaD = valor.converte(valor.getMoeda());
        valorImovelD = valorImovel.converte(valorImovel.getMoeda());
        if(valorImovelD > valorPropostaD){
            cout << "Valor de proposta eh menor do que o minimo aceito pelo proprietario." << endl;
            cout << texto10 << endl;
            getchar();
            return;
        }
        
    }else{
        cout << "Codigo de Imovel Invalido" << endl;
        cout << texto10 << endl;
        getchar();
        return;
    }

    Proposta proposta;
    cout << "vai setar as coisas" << endl;
    proposta.setCodigoImovel(codigoI);
    proposta.setCodigoProposta(codigoP);
    proposta.setDataInicialProposta(dataInicial);
    proposta.setDataFinalProposta(dataFinal);
    proposta.setHospedeProposta(hospede);
    proposta.setValorProposta(valor);
    proposta.setEmailInquilino(email);

    if(cntr->cadastrarProposta(proposta)){
        cout << texto9 << endl;
        getchar();
        return;
    }

    cout << texto10 << endl;
    getchar();

    return;

}
/*
//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico descadastrar produto investimento nao implementado. Digite algo.";    // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico realizar aplicacao nao implementado. Digite algo.";                   // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico listar aplicacoes nao implementado. Digite algo.";                    // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();

}

*/
