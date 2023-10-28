//  Marcela Jiménez Méndez 

#include<iostream>
#include<string>

using namespace std;

int main() {
	int t = 1, i = 1, resul;
	string linea;

	cout << "\n Cuantas Tablas: ";
	getline(cin, linea);
	cout << endl;
	int num = stoi(linea);

	while (t <= num) {
		i = 10;
		while (!(i < 1)) {
			resul = t * i;
			cout << " " << t << " * " << i << " = " << resul;
			i = i - 1;
			cout << endl;
		}
		t = t + 1;
		cout << endl;
	}
}