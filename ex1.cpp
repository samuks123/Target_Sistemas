#include <iostream>
using namespace std;

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    // Loop de soma
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    // Imprimindo resultado
    cout << "O valor da soma é: " << SOMA << endl;

    return 0;
}