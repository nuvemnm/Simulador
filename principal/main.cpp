#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/adaga.hpp"
#include "../acessorios-hpp/arco.hpp"
#include "../acessorios-hpp/armadura.hpp"
#include "../acessorios-hpp/barreira.hpp"
#include "../acessorios-hpp/cajado.hpp"
#include "../acessorios-hpp/machado.hpp"
#include "../acessorios-hpp/espada.hpp"
#include "../acessorios-hpp/manopla.hpp"
#include "../acessorios-hpp/manto.hpp"
#include "../acessorios-hpp/porta.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/atirador.hpp"
#include "../personagens-hpp/mago.hpp"
#include "../personagens-hpp/guerreiro.hpp"
#include "../personagens-hpp/tanque.hpp"
#include "../personagens-hpp/ladino.hpp"
#include "../core-simulador-hpp/Simulador.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma0  = new Adaga("Adaga de Nashor",0,40);
    ArmaAtaque* arma1 = new Arco("Arco de Ventis",0,50);
    ArmaAtaque* arma2 = new Espada("Lâmina do vazio",0,30);
    ArmaAtaque* arma3 = new Machado("Divisor de mundos",0,20);
    ArmaAtaque* arma4 = new Cajado("Conjurador Arcano",0,60);
    ArmaAtaque* arma5 = new Colher("Colher de Prata",0,10);

    ArmaDefesa* escudo0 = new Manopla("Mão invisivel do mercado", 10);
    ArmaDefesa* escudo1 = new Barreira("Barreira de Espinhos", 8);
    ArmaDefesa* escudo2 = new Armadura("Armadura do Rei caido", 12);
    ArmaDefesa* escudo3 = new Porta("Portão do Cofre Gélido", 20);
    ArmaDefesa* escudo4 = new Manto("Véu Lunar", 14);
     ArmaDefesa* escudo5 = new Escudo("Latão", 10);
    
    Personagem* p1 = new Ladino(1, "Alma", 100, arma0, escudo0);
    Personagem* p3 = new Atirador(2, "Grimm", 80, arma1, escudo1);
    Personagem* p2 = new Guerreiro(3, "Seth", 120, arma2, escudo2);
    Personagem* p4 = new Tanque(4, "Dragunov", 160, arma3, escudo3);
    Personagem* p5 = new Mago(5, "Hameline", 60, arma4, escudo4);
    Personagem* p6 = new Chaves(6, "Chaves", 20, arma5, escudo5);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}