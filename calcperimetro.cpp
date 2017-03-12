#include "calcperimetro.h"

void calcPTriangulo(){
    float lado;
    cout << "Qual o valor dos Triangulo equilatero?" << endl;
	cout << "lado: ";
	cin >> lado;

    P_Triangulo(lado);
}

void calcPRetangulo(){
    float alt, larg;
    cout << "Quais os valores do Triangulo equilatero?" << endl;
	cout << "Base: ";
	cin >> larg;
    cout << "Altura: ";
	cin >> alt;

    P_Retangulo(larg, alt);
}