#include "volume.h"

#define PI 3.14159265358979323846

float V_Piramide(float A_base, float altura){
    float V_pi = (1/3) * A_base * altura;

    return V_pi;
}

float V_Cubo(float aresta){
    float V_cub = aresta * aresta * aresta;

    return V_cub;
}

float V_Paralelepipedo(float aresta1, float aresta2, float aresta3){
    float areaPara = aresta1 * aresta2 * aresta3;

    return V_para;
}

float V_Esfera(float raio){
    float V_esf = (4/3) * PI * (raio * raio * raio);

    return areaR;
}