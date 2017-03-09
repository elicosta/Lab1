#include <iostream>

using namespace std;

int main(){
	
	int op, alt, larg, comp, raio;

	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circulo" << endl;
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	
	switch (op){
        	case 1:
            		cout << "Qual os valores do Triangulo equilatero?" << endl;
			cout << "Altura: ";
			cin >> alt;
			cout << "Largura: ";
			cin >> larg;
            		break;
        	case 2:
            		cout << "Qual os valores do Retangulo?" << endl;
			cout << "Altura: ";
			cin >> alt;
			cout << "Largura: ";
			cin >> larg;
            		break;
        	case 3:
            		cout << "Qual os valores do Quadradro?" << endl;
			cout << "Altura: ";
			cin >> alt;
            		break;
		case 4:
			cout << "Qual os valores do Circulo?" << endl;
			cout << "Raio: ";
			cin >> raio;
            		break;
		case 5:
			cout << "Qual os valores do Piramide com base quadrangular?" << endl;
            		break;
		case 6:
			cout << "Qual os valores do Cubo?" << endl;
			//Aresta usando variavel de altura
			cout << "Aresta: "; 
			cin >> alt;
            		break;
		case 7:
			cout << "Qual os valores do Paralelepipedo?" << endl;
			cout << "Altura: ";
			cin >> alt;
			cout << "Largura: ";
			cin >> larg;
			cout << "Comprimento: ";
			cin >> comp;
            		break;
		case 8:
			cout << "Qual os valores da Esfera?" << endl;
			cout << "Raio: ";
			cin >> raio;
            		break;
		default:
			cout << "Opção inválida!" << endl;
			break;
    	}

	return 0;
}
