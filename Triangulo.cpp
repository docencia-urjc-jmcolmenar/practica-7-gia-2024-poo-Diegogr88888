//
// Created by Diego on 26/04/2024.
//

#include "Triangulo.h"
#include <math.h>

double Triangulo::area() {
    return (sqrt(3) / 4) * lado*lado;
}