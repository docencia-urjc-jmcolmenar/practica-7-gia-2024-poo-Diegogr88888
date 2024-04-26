//
// Created by Diego on 26/04/2024.
//

#ifndef PRACTICA7_CUADRADO_H
#define PRACTICA7_CUADRADO_H

#include "Figuras.h"

class Cuadrado : public Figuras{
public:
    Cuadrado(int lado) : Figuras(lado, 4, 0){
        this->lado = lado;
    }
    double area();
};


#endif //PRACTICA7_CUADRADO_H
