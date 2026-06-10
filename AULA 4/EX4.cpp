#include <iostream>

using namespace std;

int main() {
    const int ANO = 2;
    const int TRIMESTRE = 4;
    
    double despesas[ANO][TRIMESTRE];
    double valorTotalGeral = 0.0;

    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite o valor da despesa para o Ano " << (i + 1) 
                 << ", Trimestre " << (j + 1) << ": ";
            cin >> despesas[i][j];
            
            valorTotalGeral += despesas[i][j];
        }
        cout << endl; 
    }


    cout << "\n================ TABELA DE DESPESAS ================\n";
    cout << "Ano\t\tTrim. 1\t\tTrim. 2\t\tTrim. 3\t\tTrim. 4\n";
    cout << "----------------------------------------------------\n";
    
    for (int i = 0; i < ANO; i++) {
        cout << "Ano " << (i + 1) << "\t\t";
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << despesas[i][j] << "\t\t";
        }
        cout << endl;
    }
    
    cout << "Valor total de despesas acumulado nos dois anos: R$ " << valorTotalGeral << endl;

    return 0;
}