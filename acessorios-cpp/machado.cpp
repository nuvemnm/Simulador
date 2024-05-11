#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/machado.hpp"

Machado::Machado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Machado::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Machado::gerarRuidoAtaque()
{
    return "cush cush";
}
