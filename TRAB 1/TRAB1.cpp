#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    int sumReferencia = 0;
    bool sumIguais = true;


    //laço de repetição para preencher a matriz 
    cout << "Digite os valores da matriz 3x3:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    //laço para soma da primeira linha da martriz como referencia 
    for (int j=0; j < 3; j++){
        sumReferencia += matriz[0][j];
    }

    //laço para comparar a soma de referencia com a soma das outras linhas
    for (int linha=1; linha <3; linha++){
        int sumLinha = 0;
        for (int coluna=0; coluna < 3; coluna++){
            sumLinha += matriz[linha][coluna];
        }
        if (sumLinha != sumReferencia){
            sumIguais = false;
        } 
    }

    //laço para comparar a soma de referencia com a soma das colunas
    for (int coluna=0; coluna < 3; coluna++){
        int sumColuna = 0;
        for (int linha=0; linha < 3; linha++){
            sumColuna += matriz[linha][coluna];
        }
        if (sumColuna != sumReferencia){
            sumIguais = false;
        } 
    }   

    //laço para comparar a soma de referencia com a soma das diagonais
    int sumDiagonalPrincipal = 0;
    int sumDiagonalSecundaria = 0;  
    for (int i=0; i < 3; i++){
        sumDiagonalPrincipal += matriz[i][i];
        sumDiagonalSecundaria += matriz[i][2 - i];
    }
    if (sumDiagonalPrincipal != sumReferencia || sumDiagonalSecundaria != sumReferencia){
        sumIguais = false;
    }

    cout << "A matriz eh um quadrado magico?\n" << (sumIguais ? "> Sim" : "> Nao") << endl;
}