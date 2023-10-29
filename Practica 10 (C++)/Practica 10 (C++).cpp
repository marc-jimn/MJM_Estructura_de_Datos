// Marcela Jimenez Mendez

#include<iostream>
#include<math.h>

using namespace std;

int sumaRecursiva(int n) {
	if (n <= 9) {
		return n;
	}
	else {
		return sumaRecursiva(n / 10) * n % 10;
	}
}

int sumaIterativa(int n) {
	int suma = 0;

	while (n > 9) {
		suma = suma + n % 10;
		n = n / 10;
	}
	return(suma + n);
}

int main() {
	int n, resultado1, resultado2;
	cout << " Ingrese un numero: "; cin >> n;
	cout << endl;

	resultado1 = sumaRecursiva(n);
	resultado2 = sumaIterativa(n);

	cout << " Suma Recursiva: " << resultado1 << endl;
	cout << " Suma Iterativa: " << resultado2 << endl;
}
