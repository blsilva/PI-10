#include <iostream>
#include <string>
using namespace std;

string caracteres_comuns(const string& A, const string& B) {
    string C = "";

    for (char charA : A) {
        if (B.find(charA) != string::npos && C.find(charA) == string::npos) {
            C += charA;
        }
    }

    return C;
}

int main() {
    string A, B, C;

    cout << "Digite a primeira string (A): ";
    getline(cin, A);

    cout << "Digite a segunda string (B): ";
    getline(cin, B);

    C = caracteres_comuns(A, B);
    
    if(C.empty()) {
        cout << "Não há caracteres em comum entre as strings." << endl;
    } else {
        cout << "Caracteres em comum: " << C << endl;
    }

    return 0;
}
