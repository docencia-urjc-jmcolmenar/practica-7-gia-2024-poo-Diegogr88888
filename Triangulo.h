//
// Created by Diego on 26/04/2024.
//

#ifndef PRACTICA7_TRIANGULO_H
#define PRACTICA7_TRIANGULO_H

#include "Figuras.h"

class Triangulo : public Figuras{
public:
    Triangulo(int lado) : Figuras(lado, 3, 0){
        this->lado = lado;
    }
    double area();
};


#endif //PRACTICA7_TRIANGULO_H
