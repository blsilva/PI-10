#include <iostream>
using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main() {
    int val1, val2;

    cout << "Informe 2 números inteiros:" << endl;
    cin >> val1 >> val2;

    calcula(val1, val2);

    cout << "Resultado após a operação:" << endl;
    cout << "X (soma): " << val1 << endl;
    cout << "Y (subtração): " << val2 << endl;

    return 0;
}
