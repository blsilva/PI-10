#include <iostream>
using namespace std;

void ordenar(float &a, float &b, float &c, float &d) {
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(a > d) swap(a, d);
    if(b > c) swap(b, c);
    if(b > d) swap(b, d);
    if(c > d) swap(c, d);
}

int main() {
    float val1, val2, val3, val4;

    cout << "Informe 4 números float:" << endl;
    cin >> val1 >> val2 >> val3 >> val4;

    ordenar(val1, val2, val3, val4);

    cout << "Números ordenados: " << val1 << ", " << val2 << ", " << val3 << ", " << val4 << endl;

    return 0;
}
