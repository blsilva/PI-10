#include <iostream>
using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
    for(int i = 0; i < qtde; i++) {
        vet[i] *= n;
    }
}

int main() {
    int vet[] = {1, 2, 3, 4, 5};
    int qtde = sizeof(vet) / sizeof(vet[0]);
    int multiplicador;

    cout << "Informe o multiplicador: ";
    cin >> multiplicador;

    multiplica_por_n(vet, qtde, multiplicador);

    cout << "Vetor após multiplicação: ";
    for(int i = 0; i < qtde; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
