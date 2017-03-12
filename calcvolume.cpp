#include "calcvolume.h"

void volumeTriangulo(){
    cout << "Qual os valores do Triangulo equilatero?" << endl;
	cout << "Altura: ";
	cin >> alt;
	cout << "Largura: ";
	cin >> larg;

    Triangulo(larg, alt);
}