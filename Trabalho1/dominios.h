#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

/**
* @author Amanda dos Santos Pereira - 17/0055906
* @brief C&oacute;digo do im&oacute;vel.
* @details Constitui 5 caracteres, que podem ser letra mai&uacute;scula ou d&iacute;gito, mas n&atilde;o todos zeros.
*/

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

/**
* @brief L&ecirc; o que est&aacute; armazenado no atributo c&oacute;digo.
* @return C&oacute;digo.
*/

inline string Codigo::getCodigo(){
    return codigo;
}




/**
* @author Rodrigo Zamagno Medeiros - 17/0021726
* @brief Classifica&ccedil;&atilde;o do im&oacute;vel.
* @details Esta classe &eacute; uma classifica&ccedil;&atilde;o do imov&eacute;l entre apartamento, casa ou quarto.
*/

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

/**
* @brief L&ecirc; o valor que est&aacute; armazenado na classe.
* @return O valor armazenado classe.
*/

inline int Classe::getClasse(){
    return classe;
}



/**
* @author Vin&iacute;cius Carvalho Gomes - 17/0023494
* @brief Descri&ccedil;&atilde;o do im&oacute;vel.
* @details Esta classe ir&aacute; conter a descri&ccedil;&atilde;o do im&oacute;vel em um string entre 5 e 30 caracteres.
*/
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

/**
* @brief Permite acesso ao atributo descri&ccedil;&atilde;o.
* @return A string armazenada em descri&ccedil;&atilde;o.
*/
inline string Descricao::getDescricao(){
    return descricao;
}



/**
* @author Rodrigo Zamagno Medeiros - 17/0021726
* @brief Datas no formato DD-MM-AA
* @details A classe utilizada para registrar datas em formato dia/m&ecirc;s/ano que considera a ocorr&ecirc;ncia de anos bissextos.
*/

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

/**
* @brief L&ecirc; o valor que est&aacute; armazenado na classe Data.
* @return O valor de data armazenada.
*/


inline string Data::getData(){
    return data;
}



/**
* @author Vin&iacute;cius Carvalho Gomes - 17/0023494
* @brief N&uacute;mero de 0 a 20.
* @details Esta classe ir&aacute; descrever n&uacute;mero de h&oacute;spedes por im&oacute;vel.
*/
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

/**
* @brief Permite acesso ao atributo n&uacute;mero.
* @return O interio armazenada em n&uacute;mero.
*/
inline int Numero::getNumero(){
    return numero;
}



/**
* @author Rodrigo Zamagno Medeiros - 17/0021726
* @brief Nomes de pessoas.
* @details A classe utilizada para registrar nomes, sempre inciados em letra mai&uacute;scula, podendo conter abrevia&ccedil;&otilde;es.
*/
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

/**
* @brief L&ecirc; o valor que est&aacute; armazenado na classe Nome.
* @return O valor de nome armazenado.
*/


inline string Nome::getNome(){
    return nome;
}



/**
* @author Vin&iacute;cius Carvalho Gomes - 17/0023494
* @brief Endere&ccedil;o de email.
* @details Esta classe ir&aacute; descrever endere&ccedil;os de email dos usu&aacute;rios.
*/
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

/**
* @brief Permite acesso ao atributo email.
* @return A string armazenada em email.
*/
inline string Email::getEmail(){
    return email;
}



/**
* @author Amanda dos Santos Pereira - 17/0055906
* @brief Endere&ccedil;o do im&oacute;vel.
* @details Constitui de 5 a 20 caracteres, que podem ser letra, d&iacute;gito, ponto ou espa&ccedil;o.
*/

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

/**
* @brief L&ecirc; o que est&aacute; armazenado no atributo endere&ccedil;o.
* @return Endere&ccedil;o.
*/

inline string Endereco::getEndereco(){
    return endereco;
}



/**
* @author Amanda dos Santos Pereira - 17/0055906
* @brief Informa&ccedil;&atilde;o monet&aacute;ria - valor de di&aacute;ria m&iacute;nimo, valor de di&aacute;ria proposto.
* @details Pode assumir valores de 0,00 a 1.000.000,00.
*/

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
        double converte(string);        // Caso seja necessário realizar comparações numéricas em etapas futuras
};

/**
* @brief L&ecirc; o que est&aacute; armazenado no atributo moeda.
* @return Moeda.
*/

inline string Moeda::getMoeda(){
    return moeda;
}



/**
* @author Amanda dos Santos Pereira - 17/0055906
* @brief Senha de Usu&aacute;rio.
* @details Constitui 6 caracteres, que podem ser letra ou d&iacute;gito e n&atilde;o podem ser repetidos. Deve existir pelo menos uma letra mai&uacute;scula, uma letra min&uacute;scula e um d&iacute;gito.
*/

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

/**
* @brief L&ecirc; o que est&aacute; armazenado no atributo senha.
* @return Senha.
*/

inline string Senha::getSenha(){
    return senha;
}



/**
* @author Rodrigo Zamagno Medeiros - 17/0021726
* @brief Telefones com c&oacute;digo de &aacute;rea.
* @details A classe utilizada para registrar telefones no formato (XXX)-XXXXXXXXX com d&iacute;gitos de 0 a 9.
*/
class Telefone{
    private:
        const static int TAMANHO = 15;
        static string DEFAULT;
        static string INVALIDO;
        string telefone;
        void validar(string);
    public:
        Telefone();
        Telefone(string);
        void setTelefone(string);
        string getTelefone(void);
};

/**
* @brief L&ecirc; o valor que est&aacute; armazenado na classe Telefone.
* @return O valor do telefone armazenado.
*/

inline string Telefone::getTelefone(){
    return telefone;
}

#endif // DOMINIOS_H_INCLUDED
