#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/**
* @brief Entidade que cont&eacute;m as infomar&ccedil;&otilde;es b&aacute;sicas de uma proposta.
* @details A entidade proposta dever&aacute; conter as infomar&ccedil;&otilde;es de c&oacute;digo, data inicial, data final, n&uacute;mero de h&oacute;spedes e o valor.
*/
class Proposta {

    private:
            Codigo codigoProposta;
            Data dataInicialProposta;
            Data dataFinalProposta;
            Numero hospedesProposta;
            Moeda valorProposta;

    public:

            void setCodigoProposta(const Codigo&);
            Codigo getCodigoProposta() const;
            void setDataInicialProposta(const Data&);
            Data getDataInicialProposta() const;
            void setDataFinalProposta(const Data&);
            Data getDataFinalProposta() const;
            void setHospedeProposta(const Numero&);
            Numero getHospedeProposta() const;
            void setValorProposta(const Moeda&);
            Moeda getValorProposta() const;

};

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



#endif // ENTIDADES_H_INCLUDED

/*
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe.

class Projeto {

private:

    Codigo codigo;

public:

    void setCodigo(const Codigo &codigo){
        this->codigo = codigo;
    }

    Codigo getCodigo() const {
        return codigo;
    }
};

//---------------------------------------------------------------------------
// Estrutura de classe entidade.
//
// Para cada entidade, substituir Entidade por nome da entidade.
//
// Para cada atributo, substituir Dominio e nomeAtributo por nomes adequados.

class Entidade {

    private:
            // Declarar cada atributo da classe.

            Dominio nomeAtributo;
    public:
            // Declarar métodos set e get para cada atributo.

            void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;
};

// Implementar métodos set e get.

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}


#endif // ENTIDADES_H_INCLUDED
*/
