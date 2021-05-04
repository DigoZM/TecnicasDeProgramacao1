#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <list>

using namespace std;

// Declara��o de classe container de usu�rios.

// Implementa��o adota padr�o de projeto Singleton.

class ContainerUsuario{
    private:
        list<Usuario> container;                        // Lista de usu�rios.
        static ContainerUsuario *instancia;             // Ponteiro para inst�ncia da classe.
        ContainerUsuario(){};                           // Construtor.
    public:
        static  ContainerUsuario* getInstancia();       // M�todo para instanciar a classe.
        bool incluir(Usuario);                          // M�todos respons�veis por presta��o de servi�o.
        bool remover(Email);
        bool pesquisar(Usuario*);
        bool atualizar(Usuario);
};

class ContainerImovel{
    private:
        list<Imovel> container;                        
        static ContainerImovel *instancia;             
        ContainerImovel(){};                           
    public:
        static  ContainerImovel* getInstancia();       
        bool incluir(Imovel);                          
        bool remover(Codigo);
        bool pesquisar(Imovel*);
        bool atualizar(Imovel);
};


#endif // CONTROLADORAS_H_INCLUDED
