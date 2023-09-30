// Marcela Jiménez Méndez
// Programa 04: Arreglo Bidimensional

#include<iostream>
#include<cstdlib>

#define maxf 3
#define maxc 5

using namespace std;

int main(int argc, char* argv[]) {
    float a[maxf][maxc];
    int f, c;

    // leer el array

    cout << "\n";
    for (f = 0; f < maxf; f++) {
        for (c = 0; c < maxc; c++) {
            cout << " Ingrese un dato: ";
            cin >> a[f][c];
        }
    }
    // escribir el array

    cout << "\n";
    for (f = 0; f < maxf; f++) {
        cout << " ";
        for (c = 0; c < maxc; c++) {
            cout << a[f][c];
            cout << " ";
        }
        cout << endl;
    }
    cout << "\n";

    system("PAUSE");
    return 0;
}