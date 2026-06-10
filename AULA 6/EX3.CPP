#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> documentos;
    int opcao;

    do {
        cout << "\n1 - Adicionar documento";
        cout << "\n2 - Processar documento";
        cout << "\n3 - Exibir proximo documento";
        cout << "\n0 - Sair";
        cout << "\nOpcao: ";
        cin >> opcao;

        string doc;

        switch (opcao) {
            case 1:
                cin >> doc;
                documentos.push(doc);
                break;

            case 2:
                if (!documentos.empty()) {
                    cout << documentos.front() << endl;
                    documentos.pop();
                }
                break;

            case 3:
                if (!documentos.empty())
                    cout << documentos.front() << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}