#include "../personagens-hpp/ladino.hpp"

Ladino::Ladino(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Ladino::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Ladino::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Ladino::pegarDescricao() 
{
    return "Nas sombras, sou o espectro da morte, ceifando vidas sem piedade.";
}