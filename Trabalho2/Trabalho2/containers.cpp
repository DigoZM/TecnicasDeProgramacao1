#include "containers.h"

ContainerUsuario* ContainerUsuario::instancia = nullptr;

ContainerUsuario* ContainerUsuario::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerUsuario();
    return instancia;
}

bool ContainerUsuario::incluir(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmailUsuario().getEmail() == usuario.getEmailUsuario().getEmail()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(usuario);
    return true;
}


bool ContainerUsuario::remover(Email email){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmailUsuario().getEmail() == email.getEmail()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerUsuario::pesquisar(Usuario* usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmailUsuario().getEmail() == usuario->getEmailUsuario().getEmail()){
            // Copia dados do objeto localizado.
            usuario->setNomeUsuario(elemento->getNomeUsuario());
            usuario->setTelefoneUsuario(elemento->getTelefoneUsuario());
            usuario->setSenhaUsuario(elemento->getSenhaUsuario());

            return true;
        }
    }
    return false;
}

bool ContainerUsuario::atualizar(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmailUsuario().getEmail() == usuario.getEmailUsuario().getEmail()){
            elemento->setNomeUsuario(usuario.getNomeUsuario());
            elemento->setTelefoneUsuario(usuario.getTelefoneUsuario());
            elemento->setSenhaUsuario(usuario.getSenhaUsuario());
            return true;
        }
    }
    return false;
}


