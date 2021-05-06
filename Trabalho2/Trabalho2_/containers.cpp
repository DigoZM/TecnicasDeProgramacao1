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

bool ContainerImovel::listar(){
    int i = 0;
    for(list<Imovel>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        cout << "Codigo:       " << elemento->getCodigoImovel().getCodigo() << endl;
        cout << "Classe:       " << elemento->getClasseImovel().getClasse() << endl;
        cout << "Descricao:    " << elemento->getDescricaoImovel().getDescricao() << endl;
        cout << "Email:        " << elemento->getEmailImovel().getEmail() << endl;
        cout << "Endereco      " << elemento->getEnderecoImovel().getEndereco() << endl;
        cout << "Data inicial: " << elemento->getDataInicialImovel().getData() << endl;
        cout << "Data final:   " << elemento->getDataFinalImovel().getData() << endl;
        cout << "Numero maximo de hospedes: " << elemento->getHospedesImovel().getNumero() << endl;
        cout << "Valor minimo: " << elemento->getValorImovel().getMoeda() << endl;
        cout << endl << endl;
        i++; 
    }
    if(i==0)
        return false;
    return true;
    
}

ContainerProposta* ContainerProposta::instancia = nullptr;

ContainerProposta* ContainerProposta::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerProposta();
    return instancia;
}

bool ContainerProposta::incluir(Proposta proposta){
    for(list<Proposta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProposta().getCodigo() == proposta.getCodigoProposta().getCodigo()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(proposta);
    return true;
}


bool ContainerProposta::remover(Codigo codigo){
    for(list<Proposta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProposta().getCodigo() == codigo.getCodigo()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerProposta::pesquisar(Proposta* proposta){
    for(list<Proposta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigoProposta().getCodigo() == proposta->getCodigoProposta().getCodigo()){
            // Copia dados do objeto localizado.
            proposta->setCodigoImovel(elemento->getCodigoImovel());
            proposta->setEmailInquilino(elemento->getEmailInquilino());
            proposta->setDataInicialProposta(elemento->getDataInicialProposta());
            proposta->setDataFinalProposta(elemento->getDataFinalProposta());
            proposta->setDataFinalProposta(elemento->getDataFinalProposta());
            proposta->setHospedeProposta(elemento->getHospedeProposta());
            proposta->setValorProposta(elemento->getValorProposta());

            return true;
        }
    }
    return false;
}
