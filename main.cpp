#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"

int main() {
    const int lado = 3;

    Triangulo *t = new Triangulo(lado);
    std::cout << "Triangulo de lado " << lado << std::endl;
    std::cout << "El area del triangulo es: " << t->area() << std::endl;
    std::cout << "El perimetro del triangulo es: " << t->perimetro() << std::endl << std::endl;
    delete t;

    Cuadrado *c = new Cuadrado(lado);
    std::cout << "Cuadrado de lado " << lado << std::endl;
    std::cout << "El area del cuadrado es: " << c->area() << std::endl;
    std::cout << "El perimetro del cuadrado es: " << c->perimetro() << std::endl << std::endl;
    delete c;

    Pentagono *p = new Pentagono(lado);
    std::cout << "Pentagono de lado " << lado << std::endl;
    std::cout << "El area del pentagono es: " << p->area() << std::endl;
    std::cout << "El perimetro del pentagono es: " << p->perimetro() << std::endl << std::endl;
    delete p;

    Hexagono *h = new Hexagono(lado);
    std::cout << "Hexagono de lado " << lado << std::endl;
    std::cout << "El area del hexagono es: " << h->area() << std::endl;
    std::cout << "El perimetro del hexagono es: " << h->perimetro() << std::endl;
    delete h;

    return 0;
}
