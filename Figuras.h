//
// Created by Diego on 26/04/2024.
//

#ifndef PRACTICA7_FIGURAS_H
#define PRACTICA7_FIGURAS_H


class Figuras {
protected:
    int numLados;
    double lado;
    double apotema;
public:
    Figuras(double lado, int numLados, double apotema){
        this->lado = lado;
        this->numLados = numLados;
        this->apotema = apotema;
    }
    double perimetro();
    double area();
};


#endif //PRACTICA7_FIGURAS_H
