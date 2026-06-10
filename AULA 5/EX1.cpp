#include <iostream>

using namespace std;

int main() {
    int x = 11;
    int y = 22;

    cout << "Conteudo de x: " << x << endl;
    cout << "Conteudo de y: " << y << endl;
    
    cout << "-----------------------------------" << endl;

    cout << "Endereco de memoria de x: " << &x << endl;
    cout << "Endereco de memoria de y: " << &y << endl;

    return 0;
}