// Marcela Jimenez Mendez

#include<iostream>

using namespace std;

int main() {
	string vector[100] = { "Leon", "Elefante", "Cabra", "Jirafa" };

	cout << "\n Animales: "<<endl;
	for (int i = 0; i <= 3; i++) {
		cout << " - " << vector[i]<<endl;
	}

	// Insertar valores al vector
	int n;
	cout << "\n - Cantidad de elementos a agregar: "; cin >> n;
	cout << "\n";
	for (int i = 4; i <= (3 + n); i++) {
		cout << " - Nombre de Animal: "; cin >> vector[i];
	}
	cout << "\n";
	cout << "\n Animales: " << endl;
	for (int i = 0; i <= (3+n); i++) {
		cout << " - " << vector[i] << endl;
	}

}