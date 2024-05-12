#include "../personagens-hpp/guerreiro.hpp"

Guerreiro::Guerreiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Guerreiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Guerreiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Guerreiro::pegarDescricao() 
{
    return "Minha espada é minha vontade, cortando através da adversidade."
;
}