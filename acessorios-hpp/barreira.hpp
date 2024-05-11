#ifndef BARREIRA
#define BARREIRA

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Barreira : public ArmaDefesa
{
    public:
        Barreira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif