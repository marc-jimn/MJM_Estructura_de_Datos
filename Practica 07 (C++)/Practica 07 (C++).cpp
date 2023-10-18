// Marcela Jimenez Mendez
// Practica 07: Pila

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	const int capacidad = 10;
	vector<int>elementos(capacidad);
	int cima = -1;

	cout << "\n Elemento de la pila: (termina con: -1)\n";

	int x = 0;
	const int CLAVE = -1;

	while (x != CLAVE) {
		cout << " ";
		std::string entrada;
		std::cin >> entrada;
		try {
			x = std::stoi(entrada); // Convertimos de cadena string a enteros
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else {
				cout << " Pila LLena\n";
				break;
			}
		}
		catch (const std::invalid_argument&) {
			cout << " Entrada NO valida\n";
		}
	}
	if (cima >= 0) {
		// std::cout << cima << " ";
		cout << " Elementos de la pila: \n";
		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			cout << " " << x << " ";
		}
	}
	else {
		cout << " Pila Vacia\n";
	}

	return 0;
}