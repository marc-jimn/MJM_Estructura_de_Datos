//  Marcela Jiménez Méndez 

#include<iostream>
#include<string>

using namespace std;

int main() {
	int i = 1, resul;
	string linea;

	cout << "\n Digite un numero: ";
	getline(cin, linea);
	cout << endl;
	int num = stoi(linea);

	while (i <= 12) {
		resul = num * i;
		cout << " " << num << " * " << i << " = " << resul;
		i = i + 1;
		cout << endl;
	}
}