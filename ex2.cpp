#include <iostream>
using namespace std;

bool isInFibonacci(int num) {
    int a = 0, b = 1, next = 0;

    if (num == 0 || num == 1) {
        return true; // Valores triviais
    }

    // Gerando a sequência de Fibonacci
    while (next < num) {
        next = a + b;
        a = b;
        b = next;
    }

    return (next == num); // Retorna true se o número for encontrado na sequência
}

int main() {
    int number;

    cout << "Informe um número: ";
    cin >> number;

    // Verificando se o número está na sequência de Fibonacci
    if (isInFibonacci(number)) {
        cout << "O número " << number << " pertence à sequência de Fibonacci.\n";
    } else {
        cout << "O número " << number << " não pertence à sequência de Fibonacci.\n";
    }

    return 0;
}