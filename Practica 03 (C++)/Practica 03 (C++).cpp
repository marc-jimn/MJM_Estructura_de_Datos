//  Programa 2: Imprimir arreglos  

#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int numeros[6] = { 10, 20, 30, 40, 50, 60 };
	int n[] = { 3, 4, 5 };   // Declarar un array de 3 elementos
	char c[] = { 'L', 'u', 'i', 's' };   // array de 4 elementos
	char s[] = "Mona Lisa";

	cout << "\n -";
	for (int i = 0; i < 6; i++) {
		cout << " " << numeros[i];
	}

	cout << "\n -";
	for (int i = 0; i < 3; i++) {
		cout << " " << n[i];
	}

	cout << "\n -";
	for (int i = 0; i < 4; i++) {
		cout << " " << c[i];
	}

	cout << "\n - " << s << endl;

	return 0;
}
