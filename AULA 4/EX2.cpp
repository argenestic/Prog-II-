#include <iostream>

using namespace std;

int soma(int val1, int val2) {
    return val1 + val2;
}

int main() {
    int n1, n2;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> n1;

    cout << "Digite o segundo valor inteiro: ";
    cin >> n2;

    int resultado = soma(n1, n2);

    cout << "A soma dos valores e: " << resultado << endl;

    return 0;
}