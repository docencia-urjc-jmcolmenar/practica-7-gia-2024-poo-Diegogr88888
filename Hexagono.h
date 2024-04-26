//
// Created by Diego on 26/04/2024.
//

#ifndef PRACTICA7_HEXAGONO_H
#define PRACTICA7_HEXAGONO_H

#include "Figuras.h"

class Hexagono : public Figuras{
public:
    Hexagono(int lado) : Figuras(lado, 6, lado/1.15){
        this->lado = lado;
    }
    double area();
};


#endif //PRACTICA7_HEXAGONO_H
