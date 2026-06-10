#include <iostream>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data hoje;

    cout << "Digite o dia atual: ";
    cin >> hoje.dia;

    cout << "Digite o mes atual: ";
    cin >> hoje.mes;

    cout << "Digite o ano atual: ";
    cin >> hoje.ano;

    cout << "\nA data informada eh: " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;

    return 0;
}