#include <iostream>
using namespace std;


void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = vetor[0]; 
    minimo = vetor[0]; 

    for(int i = 1; i < n; i++) {
        if(vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if(vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    int vetor[n];
    cout << "Digite os elementos do vetor:\n";
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, n, maximo, minimo);

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}
