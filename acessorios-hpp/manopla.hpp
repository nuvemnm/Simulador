#ifndef MANOPLA
#define MANOPLA

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Manopla : public ArmaDefesa
{
    public:
        Manopla(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif