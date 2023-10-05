#include <iostream>
#include <cstring>
using namespace std;

int* encontra_posicoes(const string& str, char letra, int* tam) {
    int length = str.length();
    int* posicoes = new int[length];
    *tam = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] == letra) {
            posicoes[(*tam)++] = i;
        }
    }

    int* posicoes_corretas = new int[*tam];
    for (int i = 0; i < *tam; i++) {
        posicoes_corretas[i] = posicoes[i];
    }

    delete[] posicoes;

    return posicoes_corretas;
}

int main() {
    string frase;
    char letra;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Digite uma letra para buscar na frase: ";
    cin >> letra;

    int tamanho;
    int* posicoes = encontra_posicoes(frase, letra, &tamanho);

    if (tamanho == 0) {
        cout << "A letra \"" << letra << "\" não está presente na frase!" << endl;
    } else {
        cout << "A letra '" << letra << "' foi encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            cout << posicoes[i] << " ";
        }
        cout << endl;
    }

    delete[] posicoes;

    return 0;
}
