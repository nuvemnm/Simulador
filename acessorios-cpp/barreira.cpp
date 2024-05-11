#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/barreira.hpp"

Barreira::Barreira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Barreira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Barreira::getResistencia() 
{
    return this->resistencia;
}