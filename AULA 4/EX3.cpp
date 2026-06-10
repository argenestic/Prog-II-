#include <iostream>

using namespace std;

inline double converterParaReais(double dolares, double taxaCambio) {
    return dolares * taxaCambio;
}

int main() {
    double quantiaDolares;
    const double TAXA_ATUAL = 5.25;

    cout << "Digite a quantia em dolares (USD): ";
    cin >> quantiaDolares;

    double quantiaReais = converterParaReais(quantiaDolares, TAXA_ATUAL);

    cout << "Quantia convertida em reais: R$ " << quantiaReais << endl;

    return 0;
}