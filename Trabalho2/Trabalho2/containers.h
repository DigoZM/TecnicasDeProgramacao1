#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <list>

using namespace std;

class ContainerUsuario{
    private:
        list<Usuario> container;
        static ContainerUsuario *instancia;
        ContainerUsuario(){};
    public:
        static  ContainerUsuario* getInstancia();
        bool incluir(Usuario);
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
        bool remover(Email);
        bool pesquisar(Imovel*);
        bool atualizar(Imovel);
        bool listar();
};

class ContainerProposta{
    private:
        list<Proposta> container;
        static ContainerProposta *instancia;
        ContainerProposta(){};
    public:
        static  ContainerProposta* getInstancia();
        bool incluir(Proposta);
        bool removerP(Codigo);
        bool removerI(Codigo);
        bool remover(Email);
        bool pesquisar(Proposta*);
};

#endif // CONTROLADORAS_H_INCLUDED
