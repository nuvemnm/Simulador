#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/cajado.hpp"

Cajado::Cajado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Cajado::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Cajado::gerarRuidoAtaque()
{
    return "cush cush";
}
