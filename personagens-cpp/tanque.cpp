#include "../personagens-hpp/tanque.hpp"

Tanque::Tanque(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Tanque::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Tanque::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Tanque::pegarDescricao() 
{
    return "Minha armadura é impenetrável, minha determinação inabalável.";
}