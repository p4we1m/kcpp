#include <iostream>

// Funkcja sprawdzająca parzystość liczby za pomocą operacji bitowych
bool isEvenBitwise(int number) {
    // 5 & 1 daje 101 & 001 = 001
    // Skoro wynik jest różny od zera, to liczba jest nieparzysta
    return (number & 1) == 0;
}

// Funkcja sprawdzająca parzystość liczby za pomocą operatora modulo
bool isEvenModulo(int number) {
    // 6 % 2 daje 0, czyli reszta z dzielenia wynosi zero
    // Skoro reszta z dzielenia jest zero, to liczba jest parzysta
    return number % 2 == 0;
}

// Funkcja sprawdzająca parzystość liczby za pomocą operatora warunkowego
bool isEvenConditional(int number) {
    // 7 % 2 daje 1, czyli reszta z dzielenia wynosi jeden
    // Warunek (1 ? 0 : 1) zwróci 1, czyli liczbę nieparzystą
    return (number % 2) ? false : true;
}

int main() {
    int number;
    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    int choice;
    std::cout << "Wybierz metodę sprawdzania parzystości:" << std::endl;
    std::cout << "1. Metoda bitowa" << std::endl;
    std::cout << "2. Metoda modulo" << std::endl;
    std::cout << "3. Metoda warunkowa" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            if (isEvenBitwise(number)) {
                std::cout << "Liczba jest parzysta." << std::endl;
            } else {
                std::cout << "Liczba jest nieparzysta." << std::endl;
            }
            break;

        case 2:
            if (isEvenModulo(number)) {
                std::cout << "Liczba jest parzysta." << std::endl;
            } else {
                std::cout << "Liczba jest nieparzysta." << std::endl;
            }
            break;

        case 3:
            if (isEvenConditional(number)) {
                std::cout << "Liczba jest parzysta." << std::endl;
            } else {
                std::cout << "Liczba jest nieparzysta." << std::endl;
            }
            break;

        default:
            std::cout << "Nieprawidłowy wybór." << std::endl;
    }

    return 0;
}
