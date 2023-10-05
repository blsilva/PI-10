#include <iostream>
using namespace std;

float calc_serie(int N) {
    float S = 0.0f;

    for(int i = 1; i <= N; i++) {
        S += (float)i / (N - i + 1);
    }

    return S;
}

int main() {
    int N;
    
    cout << "Informe o valor de N: ";
    cin >> N;

    float resultado = calc_serie(N);

    cout << "O valor de S para N = " << N << " é: " << resultado << endl;

    return 0;
}
