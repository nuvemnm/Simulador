#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/adaga.hpp"

Adaga::Adaga(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Adaga::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Adaga::gerarRuidoAtaque()
{
    return "cush cush";
}
