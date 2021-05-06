#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/**
* @author Rodrigo Zamagno Medeiros - 17/0021726
* @brief Entidade que cont&eacute;m as infomar&ccedil;&otilde;es b&aacute;sicas de uma proposta.
* @details A entidade proposta dever&aacute; conter as infomar&ccedil;&otilde;es de c&oacute;digo, data inicial, data final, n&uacute;mero de h&oacute;spedes e o valor.
*/
class Proposta {

    private:
            Codigo codigoImovel;
            Codigo codigoProposta;
            Email emailInquilino;
            Data dataInicialProposta;
            Data dataFinalProposta;
            Numero hospedesProposta;
            Moeda valorProposta;

    public:
            void setCodigoImovel(const Codigo&);
            Codigo getCodigoImovel() const;
            void setCodigoProposta(const Codigo&);
            Codigo getCodigoProposta() const;
            void setEmailInquilino(const Email&);
            Email getEmailInquilino() const;
            void setDataInicialProposta(const Data&);
            Data getDataInicialProposta() const;
            void setDataFinalProposta(const Data&);
            Data getDataFinalProposta() const;
            void setHospedeProposta(const Numero&);
            Numero getHospedeProposta() const;
            void setValorProposta(const Moeda&);
            Moeda getValorProposta() const;

};

inline void Proposta::setCodigoImovel(const Codigo &codigoImovel){
    this->codigoImovel = codigoImovel;
}


inline Codigo Proposta::getCodigoImovel() const{
    return codigoImovel;
}

/**
* @brief Atribui o valor do c&oacute;digo &agrave; proposta.
* @details Fun&ccedil;&atilde;o que atribui o valor do c&oacute;digo &agrave; proposta se este for v&aacute;lido.
* @param codigoProposta Valor a ser atribuido.
*/

inline void Proposta::setCodigoProposta(const Codigo &codigoProposta){
    this->codigoProposta = codigoProposta;
}

/**
* @brief L&ecirc; o valor de c&oacute;digo que est&aacute; armazenado na proposta.
* @return O c&oacute;digo armazenado na proposta.
*/


inline Codigo Proposta::getCodigoProposta() const{
    return codigoProposta;
}

inline void Proposta::setEmailInquilino(const Email &emailInquilino){
    this->emailInquilino = emailInquilino;
}

inline Email Proposta::getEmailInquilino() const{
    return emailInquilino;
}

/**
* @brief Atribui o valor da data inicial &agrave; proposta.
* @details Fun&ccedil;&atilde;o que atribui o valor da data inicial &agrave; proposta se esta for v&aacute;lida.
* @param dataInicialProposta Valor a ser atribuido.
*/

inline void Proposta::setDataInicialProposta(const Data &dataInicialProposta){
    this->dataInicialProposta = dataInicialProposta;
}

/**
* @brief L&ecirc; o valor da data inicial que est&aacute; armazenada na proposta.
* @return A data inicial armazenada na proposta.
*/

inline Data Proposta::getDataInicialProposta() const{
    return dataInicialProposta;
}

/**
* @brief Atribui o valor da data final &agrave; proposta.
* @details Fun&ccedil;&atilde;o que atribui o valor da data final &agrave; proposta se esta for v&aacute;lida.
* @param dataFinalProposta Valor a ser atribuido.
*/

inline void Proposta::setDataFinalProposta(const Data &dataFinalProposta){
    this->dataFinalProposta = dataFinalProposta;
}

/**
* @brief L&ecirc; o valor da data final que est&aacute; armazenada na proposta.
* @return A data final armazenada na proposta.
*/

inline Data Proposta::getDataFinalProposta() const{
    return dataFinalProposta;
}

/**
* @brief Atribui o valor do n&uacute;mero de h&oacute;spedes &agrave; proposta.
* @details Fun&ccedil;&atilde;o que atribui o valor do n&uacute;mero de h&oacute;spedes &agrave; proposta se este for v&aacute;lido.
* @param hospedeProposta Valor a ser atribuido.
*/

inline void Proposta::setHospedeProposta(const Numero &hospedeProposta){
    this->hospedesProposta = hospedeProposta;
}

/**
* @brief L&ecirc; o valor do n&uacute;mero de h&oacute;spedes que est&aacute; armazenado na proposta.
* @return O n&uacute;mero de h&oacute;spedes armazenado na proposta.
*/

inline Numero Proposta::getHospedeProposta() const{
    return hospedesProposta;
}

/**
* @brief Atribui o valor do custo &agrave; proposta.
* @details Fun&ccedil;&atilde;o que atribui o valor do custo &agrave; proposta se este for v&aacute;lido.
* @param valorProposta Valor a ser atribuido.
*/

inline void Proposta::setValorProposta(const Moeda &valorProposta){
    this->valorProposta = valorProposta;
}

/**
* @brief L&ecirc; o valor do custo que est&aacute; armazenado na proposta.
* @return O custo armazenado na proposta.
*/

inline Moeda Proposta::getValorProposta() const{
    return valorProposta;
}



/**
* @author Vin&iacute;cius Carvalho Gomes - 17/0023494
* @brief Entidade que cont&eacute;m as infomar&ccedil;&otilde;es b&aacute;sicas de um usu&aacute;rio.
* @details A entidade proposta dever&aacute; conter as infomar&ccedil;&otilde;es de Nome, Email, Senha e Telefone.
*/
class Usuario{

    private:
            Nome NomeUsuario;
            Email EmailUsuario;
            Senha SenhaUsuario;
            Telefone TelefoneUsuario;

    public:
            void setNomeUsuario(const Nome&);
            Nome getNomeUsuario() const;
            void setEmailUsuario(const Email&);
            Email getEmailUsuario() const;
            void setSenhaUsuario(const Senha&);
            Senha getSenhaUsuario() const;
            void setTelefoneUsuario(const Telefone&);
            Telefone getTelefoneUsuario() const;
};


/**
* @brief Atribui um nome ao usu&aacute;rio.
* @details Esta fun&ccedil;&atilde;o ir&aacute; definir o dom&iacute;nio Nome relacionado com a entidade Usu&aacute;rio.
* @param NomeUsuario Valor a ser atribuido.
*/
inline void Usuario::setNomeUsuario(const Nome &NomeUsuario){
    this->NomeUsuario = NomeUsuario;
}

/**
* @brief Retorna o nome relacionado com o usu&aacute;rio.
* @return O nome armazenado em Usu&aacute;rio.
*/
inline Nome Usuario::getNomeUsuario() const{
    return NomeUsuario;
}

/**
* @brief Atribui um email ao usu&aacute;rio.
* @details Esta fun&ccedil;&atilde;o ir&aacute; definir o dom&iacute;nio Email relacionado com a entidade Usu&aacute;rio.
* @param EmailUsuario Valor a ser atribuido.
*/
inline void Usuario::setEmailUsuario(const Email &EmailUsuario){
    this->EmailUsuario = EmailUsuario;
}

/**
* @brief Retorna o email relacionado com o usu&aacute;rio.
* @return O email armazenado em Usu&aacute;rio.
*/
inline Email Usuario::getEmailUsuario() const{
    return EmailUsuario;
}

/**
* @brief Atribui uma senha ao usu&aacute;rio.
* @details Esta fun&ccedil;&atilde;o ir&aacute; definir o dom&iacute;nio Senha relacionado com a entidade Usu&aacute;rio.
* @param SenhaUsuario Valor a ser atribuido.
*/
inline void Usuario::setSenhaUsuario(const Senha &SenhaUsuario){
    this->SenhaUsuario = SenhaUsuario;
}

/**
* @brief Retorna a senha relacionado com o usu&aacute;rio.
* @return A senha armazenado em Usu&aacute;rio.
*/
inline Senha Usuario::getSenhaUsuario() const{
    return SenhaUsuario;
}

/**
* @brief Atribui um telefone ao usu&aacute;rio.
* @details Esta fun&ccedil;&atilde;o ir&aacute; definir o dom&iacute;nio Telefone relacionado com a entidade Usu&aacute;rio.
* @param TelefoneUsuario Valor a ser atribuido.
*/
inline void Usuario::setTelefoneUsuario(const Telefone &TelefoneUsuario){
    this->TelefoneUsuario = TelefoneUsuario;
}

/**
* @brief Retorna o telefone relacionado com o usu&aacute;rio.
* @return O telefone armazenado em Usu&aacute;rio.
*/
inline Telefone Usuario::getTelefoneUsuario() const{
    return TelefoneUsuario;
}



/**
* @author Amanda dos Santos Pereira - 17/0055906
* @brief Entidade que cont&eacute;m as infomar&ccedil;&otilde;es de um im&oacute;vel.
* @details A entidade Imovel dever&aacute; conter as infomar&ccedil;&otilde;es de c&oacute;digo, classe, descri&ccedil;&atilde;o, endere&ccedil;o, data inicial e final da hospedagem, n&uacute;mero de h&oacute;spedes e valor.
*/

class Imovel{
    private:
        Codigo codigoImovel;
        Classe classeImovel;
        Descricao descricaoImovel;
        Endereco enderecoImovel;
        Data dataInicialImovel;
        Data dataFinalImovel;
        Numero hospedesImovel;
        Moeda valorImovel;
        Email emailImovel;
    public:
        void setCodigoImovel(const Codigo&);
        Codigo getCodigoImovel() const;
        void setClasseImovel(const Classe&);
        Classe getClasseImovel() const;
        void setDescricaoImovel(const Descricao&);
        Descricao getDescricaoImovel() const;
        void setEnderecoImovel(const Endereco&);
        Endereco getEnderecoImovel() const;
        void setDataInicialImovel(const Data&);
        Data getDataInicialImovel() const;
        void setDataFinalImovel(const Data&);
        Data getDataFinalImovel() const;
        void setHospedesImovel(const Numero&);
        Numero getHospedesImovel() const;
        void setValorImovel(const Moeda&);
        Moeda getValorImovel() const;
        void setEmailImovel(const Email&);
        Email getEmailImovel() const;
 };

/**
* @brief Atribui o valor do c&oacute;digo &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor do c&oacute;digo &agrave; im&oacute;vel se este for v&aacute;lido.
* @param codigoImovel Valor a ser atribuido.
*/

 inline void Imovel::setCodigoImovel(const Codigo &codigoImovel){
    this->codigoImovel = codigoImovel;
}

/**
* @brief L&ecirc; o valor de c&oacute;digo que est&aacute; armazenado no im&oacute;vel.
* @return O c&oacute;digo armazenado no im&oacute;vel.
*/

inline Codigo Imovel::getCodigoImovel() const{
    return codigoImovel;
}

/**
* @brief Atribui o valor de classe &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor do classe &agrave; im&oacute;vel se este for v&aacute;lido.
* @param classeImovel Valor a ser atribuido.
*/

inline void Imovel::setClasseImovel(const Classe &classeImovel){
    this->classeImovel = classeImovel;
}

/**
* @brief L&ecirc; o valor de classe que est&aacute; armazenado no im&oacute;vel.
* @return A classe armazenada no im&oacute;vel.
*/

inline Classe Imovel::getClasseImovel() const{
    return classeImovel;
}

/**
* @brief Atribui o valor de descri&ccedil;&atilde;o &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor de descri&ccedil;&atilde;o &agrave; im&oacute;vel se este for v&aacute;lido.
* @param descricaoImovel Valor a ser atribuido.
*/

inline void Imovel::setDescricaoImovel(const Descricao &descricaoImovel){
    this->descricaoImovel = descricaoImovel;
}

/**
* @brief L&ecirc; o valor de descri&ccedil;&atilde;o que est&aacute; armazenado no im&oacute;vel.
* @return A descri&ccedil;&atilde;o armazenada no im&oacute;vel.
*/

inline Descricao Imovel::getDescricaoImovel() const{
    return descricaoImovel;
}

/**
* @brief Atribui o valor de endere&ccedil;o &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor de endere&ccedil;o &agrave; im&oacute;vel se este for v&aacute;lido.
* @param enderecoImovel Valor a ser atribuido.
*/

inline void Imovel::setEnderecoImovel(const Endereco &enderecoImovel){
    this->enderecoImovel = enderecoImovel;
}

/**
* @brief L&ecirc; o valor de endere&ccedil;o que est&aacute; armazenado no im&oacute;vel.
* @return O endere&ccedil;o armazenada no im&oacute;vel.
*/

inline Endereco Imovel::getEnderecoImovel() const{
    return enderecoImovel;
}

/**
* @brief Atribui o valor de data inicial &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor de data inicial &agrave; im&oacute;vel se este for v&aacute;lido.
* @param dataInicialImovel Valor a ser atribuido.
*/

inline void Imovel::setDataInicialImovel(const Data &dataInicialImovel){
    this->dataInicialImovel = dataInicialImovel;
}

/**
* @brief L&ecirc; o valor de data inicial que est&aacute; armazenado no im&oacute;vel.
* @return A data inicial armazenada no im&oacute;vel.
*/

inline Data Imovel::getDataInicialImovel() const{
    return dataInicialImovel;
}

/**
* @brief Atribui o valor de data final &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor de data final &agrave; im&oacute;vel se este for v&aacute;lido.
* @param dataFinalImovel Valor a ser atribuido.
*/

inline void Imovel::setDataFinalImovel(const Data &dataFinalImovel){
    this->dataFinalImovel = dataFinalImovel;
}

/**
* @brief L&ecirc; o valor de data final que est&aacute; armazenado no im&oacute;vel.
* @return A data final armazenada no im&oacute;vel.
*/

inline Data Imovel::getDataFinalImovel() const{
    return dataFinalImovel;
}

/**
* @brief Atribui o valor de h&oacute;spedes &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor de h&oacute;spedes &agrave; im&oacute;vel se este for v&aacute;lido.
* @param hospedesImovel Valor a ser atribuido.
*/

inline void Imovel::setHospedesImovel(const Numero &hospedesImovel){
    this->hospedesImovel = hospedesImovel;
}

/**
* @brief L&ecirc; o valor de h&oacute;spedes que est&aacute; armazenado no im&oacute;vel.
* @return O n&uacute;mero de h&oacute;spedes armazenado no im&oacute;vel.
*/

inline Numero Imovel::getHospedesImovel() const{
    return hospedesImovel;
}

/**
* @brief Atribui o valor do custo &agrave; im&oacute;vel.
* @details Fun&ccedil;&atilde;o que atribui o valor do custo &agrave; im&oacute;vel se este for v&aacute;lido.
* @param valorImovel Valor a ser atribuido.
*/

inline void Imovel::setValorImovel(const Moeda &valorImovel){
    this->valorImovel = valorImovel;
}

/**
* @brief L&ecirc; o valor do custo que est&aacute; armazenado no im&oacute;vel.
* @return O custo armazenado no im&oacute;vel.
*/

inline Moeda Imovel::getValorImovel() const{
    return valorImovel;
}

inline void Imovel::setEmailImovel(const Email &emailImovel){
    this->emailImovel = emailImovel;
}

inline Email Imovel::getEmailImovel() const{
    return emailImovel;
}

        

#endif // ENTIDADES_H_INCLUDED
