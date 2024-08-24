#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    float ganha;
    string mes;
    int horas;
    float salario;

    cout << "Quanto voce ganha por hora?\n";
    cin >> ganha;
    cout << "Qual mes voce quer calcular?\n";
    cin >> mes;
    cout << "Quantas horas voce trabalhou no mes informado?\n";
    cin >> horas;

    salario = ganha * horas;

    cout << fixed << setprecision(2);

    cout << "Em " << mes << " seu salario sera R$ " << salario << endl;

    return 0;
}
