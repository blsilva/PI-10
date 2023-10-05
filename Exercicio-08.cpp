#include <iostream>
using namespace std;

bool eh_primo(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int conta_primos(int *vet, int qtde) {
    int count = 0;
    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) count++;
    }
    return count;
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = sizeof(vet) / sizeof(vet[0]);

    int num_primos = conta_primos(vet, qtde);

    cout << "Quantidade de números primos no vetor: " << num_primos << endl;

    return 0;
}
