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


ContainerImovel* ContainerImovel::instancia = nullptr;

ContainerImovel* ContainerImovel::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerImovel();
    return instancia;
}

bool ContainerImovel::incluir(Imovel imovel){
    for(list<Imovel>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoImovel().getCodigo() == imovel.getCodigoImovel().getCodigo()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(imovel);
    return true;
}


bool ContainerImovel::remover(Codigo codigo){
    for(list<Imovel>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoImovel().getCodigo() == codigo.getCodigo()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerImovel::pesquisar(Imovel* imovel){
    for(list<Imovel>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoImovel().getCodigo() == imovel->getCodigoImovel().getCodigo()){
            // Copia dados do objeto localizado.
            imovel->setClasseImovel(elemento->getClasseImovel());
            imovel->setDescricaoImovel(elemento->getDescricaoImovel());
            imovel->setEmailImovel(elemento->getEmailImovel());
            imovel->setEnderecoImovel(elemento->getEnderecoImovel());
            imovel->setDataInicialImovel(elemento->getDataInicialImovel());
            imovel->setDataFinalImovel(elemento->getDataFinalImovel());
            imovel->setHospedesImovel(elemento->getHospedesImovel());
            imovel->setValorImovel(elemento->getValorImovel());

            return true;
        }
    }
    return false;
}

bool ContainerImovel::atualizar(Imovel imovel){
    for(list<Imovel>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoImovel().getCodigo() == imovel.getCodigoImovel().getCodigo()){
            imovel.setClasseImovel(elemento->getClasseImovel());
            imovel.setDescricaoImovel(elemento->getDescricaoImovel());
            imovel.setEmailImovel(elemento->getEmailImovel());
            imovel.setEnderecoImovel(elemento->getEnderecoImovel());
            imovel.setDataInicialImovel(elemento->getDataInicialImovel());
            imovel.setDataFinalImovel(elemento->getDataFinalImovel());
            imovel.setHospedesImovel(elemento->getHospedesImovel());
            imovel.setValorImovel(elemento->getValorImovel());
            return true;
        }
    }
    return false;
}



