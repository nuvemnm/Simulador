#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/manto.hpp"

Manto::Manto(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Manto::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Manto::getResistencia() 
{
    return this->resistencia;
}