#include <iostream>
#include <string>

bool isEvenBitwise(std::string word) {
    return (word.length() % 2) == 0;
}

bool isEvenModulo(std::string word) {
    return word.length() % 2 == 0;
}

bool isEvenConditional(std::string word) {
    return (word.length() % 2) ? false : true;
}

int main() {
    std::string word;
    std::cout << "Podaj słowo: ";
    std::cin >> word;

    int choice;
    std::cout << "Wybierz metodę sprawdzania parzystości:" << std::endl;
    std::cout << "1. Metoda bitowa" << std::endl;
    std::cout << "2. Metoda modulo" << std::endl;
    std::cout << "3. Metoda warunkowa" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            if (isEvenBitwise(word)) {
                std::cout << "Słowo ma parzystą liczbę znaków." << std::endl;
            } else {
                std::cout << "Słowo ma nieparzystą liczbę znaków." << std::endl;
            }
            break;

        case 2:
            if (isEvenModulo(word)) {
                std::cout << "Słowo ma parzystą liczbę znaków." << std::endl;
            } else {
                std::cout << "Słowo ma nieparzystą liczbę znaków." << std::endl;
            }
            break;

        case 3:
            if (isEvenConditional(word)) {
                std::cout << "Słowo ma parzystą liczbę znaków." << std::endl;
            } else {
                std::cout << "Słowo ma nieparzystą liczbę znaków." << std::endl;
            }
            break;

        default:
            std::cout << "Nieprawidłowy wybór." << std::endl;
    }

    return 0;
}
