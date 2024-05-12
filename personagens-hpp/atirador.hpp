#ifndef ATIRADOR
#define ATIRADOR
#include "../core-simulador-hpp/Personagem.hpp"
class Atirador : public Personagem
{
    public:
        Atirador(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif

