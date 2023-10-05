#include <iostream>
using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *vetorIntercalado = new int[tam1 + tam2];
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        vetorIntercalado[k++] = vet1[i++];
        vetorIntercalado[k++] = vet2[j++];
    }

    while (i < tam1) {
        vetorIntercalado[k++] = vet1[i++];
    }

    while (j < tam2) {
        vetorIntercalado[k++] = vet2[j++];
    }

    return vetorIntercalado;
}

int main() {
    int vet1[] = {1, 3, 5};
    int tam1 = sizeof(vet1) / sizeof(vet1[0]);

    int vet2[] = {2, 4, 6, 8, 10};
    int tam2 = sizeof(vet2) / sizeof(vet2[0]);

    int *vetorIntercalado = intercala(vet1, tam1, vet2, tam2);

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tam1 + tam2; i++) {
        cout << vetorIntercalado[i] << " ";
    }

    delete[] vetorIntercalado;  
    cout << endl;
    return 0;
}
