#include "perimetro.h"

#define PI 3.14159265358979323846

float P_Triangulo(float lado1, float lado2, float lado3){
    float P_tri = lado1 + lado2 + lado3;

    return P_tri;
}

float P_Retangulo(float base, float altura){
    float P_retan = 2 * base * altura;

    return P_retan;
}

float P_Quadrado(float lado){
    float P_quad = 4 * lado;

    return P_quad;
}

float P_Circulo(float raio){
    float P_circ = 2 * PI * raio;

    return P_circ;
}