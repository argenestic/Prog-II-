#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> palavras;
    int opcao;

    do {
        cout << "\n1 - Digitar palavra";
        cout << "\n2 - Desfazer ultima palavra";
        cout << "\n3 - Mostrar ultima palavra";
        cout << "\n0 - Sair";
        cout << "\nOpcao: ";
        cin >> opcao;

        string palavra;

        switch (opcao) {
            case 1:
                cin >> palavra;
                palavras.push(palavra);
                break;

            case 2:
                if (!palavras.empty()) {
                    cout << palavras.top() << endl;
                    palavras.pop();
                }
                break;

            case 3:
                if (!palavras.empty())
                    cout << palavras.top() << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}