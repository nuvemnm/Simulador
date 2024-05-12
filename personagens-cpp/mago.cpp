#include "../personagens-hpp/mago.hpp"

Mago::Mago(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Mago::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Mago::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Mago::pegarDescricao() 
{
    return "Meus feitiços são chamas, consumindo os adversários.";
}