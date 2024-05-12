#include "../personagens-hpp/atirador.hpp"

Atirador::Atirador(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Atirador::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Atirador::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Atirador::pegarDescricao() 
{
    return "Meus tiros são certeiros, perfurando o véu da escuridão";
}