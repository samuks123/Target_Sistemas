#include <iostream>
#include <string>

using namespace std;

// Função para inverter uma string
string stringInverter(string &s) {
    string stringInvertida;
    
    // Percorre a string original de trás para frente
    for (int i = s.length() - 1; i >= 0; i--) {
        stringInvertida += s[i];  // Adiciona cada caractere à nova string
    }

    return stringInvertida;
}

int main() {
    string stringOriginal;

    // Entrada do usuário
    cout << "Informe uma string para inverter: ";
    getline(cin, stringOriginal);

    // Chamando a função
    string stringInvertida = stringInverter(stringOriginal);

    // Imprimindo o resultado
    cout << "String original: " << stringOriginal << endl;
    cout << "String invertida: " << stringInvertida << endl;

    return 0;
}