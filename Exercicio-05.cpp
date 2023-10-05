#include <iostream>
using namespace std;

int insere_meio(int *vetor, int qtde, int elemento) {
    int meio = qtde / 2; 

    for(int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[meio] = elemento;

    return qtde + 1;  
}

int main() {
    const int MAX_TAM = 100; 
    int vetor[MAX_TAM] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    qtde = insere_meio(vetor, qtde, 100);

    cout << "Vetor após inserção: ";
    for(int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
