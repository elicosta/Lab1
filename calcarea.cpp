#include "calcarea.h"

void calcTriangulo(){
    int alt, larg;
    cout << "Qual os valores do Triangulo equilatero?" << endl;
	cout << "Altura: ";
	cin >> alt;
	cout << "Largura: ";
	cin >> larg;

    Triangulo(larg, alt);
}

void calcRetangulo(){
    int alt, larg;
    cout << "Qual os valores do retangulo?" << endl;
	cout << "Altura: ";
	cin >> alt;
	cout << "Largura: ";
	cin >> larg;

    Retangulo(larg, alt);
}