#include <iostream>

using namespace std;

int main() {
    double a[100];
    int quantidade;

    cout << "Quantos valores deseja digitar (maximo 100)? ";
    cin >> quantidade;

    if (quantidade > 100 || quantidade <= 0) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    for (int j = 0; j < quantidade; j++) {
        cout << "Digite o valor para a posicao [" << j << "]: ";
        cin >> *(a + j);
    }

    double soma = 0.0;
    double *aPtr = a;

    for (int j = 0; j < quantidade; j++) {
        soma += *(aPtr + j);
    }

    double media = soma / quantidade;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Soma dos valores: " << soma << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}