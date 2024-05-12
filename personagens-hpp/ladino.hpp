#ifndef LADINO
#define LADINO
#include "../core-simulador-hpp/Personagem.hpp"
class Ladino : public Personagem
{
    public:
        Ladino(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif

