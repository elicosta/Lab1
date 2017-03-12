#include "area.h"

#define PI 3.14159265358979323846

float Triangulo(float base, float altura){
    float areaT = (base * altura)/2;

    return areaT;
}

float Retangulo(float base, float altura){
    float areaR = base * altura;

    return areaR;
}

float Quadrado(float lado){
    float areaQ = lado * lado;

    return areaQ;
}

float Circulo(float raio){
    float areaC = PI * (raio*raio);

    return areaC;
}

float Piramide(float A_base, float A_lateral){
    float areaPi = A_base * A_lateral;

    return areaR;
}

float Cubo(float aresta){
    float areaCubo = 6 * (aresta*aresta);

    return areaCubo;
}

float Paralelepipedo(float aresta1, float aresta2, float aresta3){
    float areaPara = (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);

    return areaR;
}

float Esfera(float raio){
    float areaE = 4 * PI * (raio*raio);

    return areaR;
}