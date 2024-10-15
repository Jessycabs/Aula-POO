#include <iostream>

using namespace std;

int a, b, c, d, i, j;

int main() {
    i = 1;

cout << ">> Inicio prova P1" << endl;
cout << "Informe 4 valores: " << endl;
cout << "Valor 1: ";
cin >> a;
cout << "Valor 2: ";
cin >> b;
cout << "Valor 3: ";
cin >> c;
cout << "Valor 4: ";
cin >> d;


    cout << "Total de linhas: 4" << endl;
    cout << "Total de colunas: 5" << endl;

    j = 0;

    cout << i << "|";
    while (j < a) {
        cout << " * ";
        j++;
    }
    cout << endl;
    i++;

    j = 0;

    cout << i << "|";
    while (j < b) {
        cout << " * ";
        j++;
    }
    cout << endl;
    i++;

    j = 0;

    cout << i << "|";
    while (j < c) {
        cout << " * ";
        j++;
    }
    cout << endl;
    i++;

    j = 0;

    cout << i << "|";
    while (j < d) {
        cout << " * ";
        j++;
    }
    cout << endl;

    cout << "+  -  -  -  -  -" << endl;
    cout << "0  1  2  3  4  5";
    cout << endl << ">> Fim: prova P1" << endl;
    return 0;
}

