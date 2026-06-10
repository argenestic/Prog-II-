#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lista;
    int opcao;

    do {
        cout << "\n1 - Inserir no inicio";
        cout << "\n2 - Inserir no final";
        cout << "\n3 - Remover valor";
        cout << "\n4 - Exibir lista";
        cout << "\n5 - Exibir tamanho";
        cout << "\n0 - Sair";
        cout << "\nOpcao: ";
        cin >> opcao;

        int valor;

        switch (opcao) {
            case 1:
                cin >> valor;
                lista.push_front(valor);
                break;

            case 2:
                cin >> valor;
                lista.push_back(valor);
                break;

            case 3:
                cin >> valor;
                lista.remove(valor);
                break;

            case 4:
                for (int v : lista)
                    cout << v << " ";
                cout << endl;
                break;

            case 5:
                cout << lista.size() << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}