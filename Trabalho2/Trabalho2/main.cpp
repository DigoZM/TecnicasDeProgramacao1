#include <string.h>
#include <stdexcept>
#include <iostream>

#include "builders.h"
#include "controladorasapresentacao.h"

using namespace std;

int main()
{
    // Instancia Builder.

    BuilderSistema *builder;
    builder = new BuilderSistema();

    // Constroi sistema.

    CntrApresentacaoControle *cntrApresentacaoControle;
    cntrApresentacaoControle = builder->construir();

    // Solicita serviço de apresentacao.

    cntrApresentacaoControle->executar();

    // Destroi builder.

    delete builder;
    CntrApresentacaoControle ctra;
    ctra.executar();
    return 0;
}
