#include <iostream>

void OperatoryArytmetyczne() {
    int a = 10;
    int b = 5;

    // Przykłady operatorów arytmetycznych
    int dodawanie = a + b;
    int odejmowanie = a - b;
    int mnozenie = a * b;
    int dzielenie = a / b;
    int reszta = a % b;

    std::cout << "Dodawanie: " << dodawanie << std::endl;
    std::cout << "Odejmowanie: " << odejmowanie << std::endl;
    std::cout << "Mnożenie: " << mnozenie << std::endl;
    std::cout << "Dzielenie: " << dzielenie << std::endl;
    std::cout << "Reszta z dzielenia: " << reszta << std::endl;
}

void OperatoryPrzypisania() {
    int a = 10;
    int b = 5;

    // Przykłady operatorów przypisania
    a += b; // a = a + b;
    std::cout << "a += b: " << a << std::endl;

    a -= b; // a = a - b;
    std::cout << "a -= b: " << a << std::endl;

    a *= b; // a = a * b;
    std::cout << "a *= b: " << a << std::endl;

    a /= b; // a = a / b;
    std::cout << "a /= b: " << a << std::endl;

    a %= b; // a = a % b;
    std::cout << "a %= b: " << a << std::endl;
}

int main() {
    std::cout << "Przykłady operatorów arytmetycznych:\n";
    OperatoryArytmetyczne();

    std::cout << "\nPrzykłady operatorów przypisania:\n";
    OperatoryPrzypisania();

    return 0;
}
