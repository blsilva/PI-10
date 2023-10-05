#include <iostream>
#include <string>
using namespace std;

string codifica(const string& input) {
    string output = "";
    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            if (c == 'Z') output += 'A';
            else output += c + 1;
        } else if (c >= 'a' && c <= 'z') {
            if (c == 'z') output += 'a';
            else output += c + 1;
        } else {
            output += c;
        }
    }
    return output;
}

string decodifica(const string& input) {
    string output = "";
    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            if (c == 'A') output += 'Z';
            else output += c - 1;
        } else if (c >= 'a' && c <= 'z') {
            if (c == 'a') output += 'z';
            else output += c - 1;
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    string texto, texto_codificado, texto_decodificado;

    cout << "Digite um texto: ";
    getline(cin, texto);

    texto_codificado = codifica(texto);
    cout << "Texto codificado: " << texto_codificado << endl;

    texto_decodificado = decodifica(texto_codificado);
    cout << "Texto decodificado: " << texto_decodificado << endl;

    return 0;
}
