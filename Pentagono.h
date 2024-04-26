//
// Created by Diego on 26/04/2024.
//

#ifndef PRACTICA7_PENTAGONO_H
#define PRACTICA7_PENTAGONO_H

#include "Figuras.h"

class Pentagono : public Figuras{
public:
    Pentagono(int lado) : Figuras(lado, 5, lado/1.45){
        this->lado = lado;
    }
    double area();
};


#endif //PRACTICA7_PENTAGONO_H
