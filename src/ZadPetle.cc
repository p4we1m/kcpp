#include <iostream>

void whileExample() {
    int i = 0;
    while (i < 5) {
        std::cout << "Wartość i (while): " << i << std::endl;
        i++; // inkrementacja po wyświetleniu
        // ++i; // inkrementacja przed wyświetleniem
        if (i == 3) {
            break; // przerwij pętlę po osiągnięciu i == 3
        }
    }
}

void doWhileExample() {
    int i = 0;
    do {
        std::cout << "Wartość i (do-while): " << i << std::endl;
        i++; // inkrementacja po wyświetleniu
        // ++i; // inkrementacja przed wyświetleniem
        if (i == 3) {
            return; // zakończ funkcję po osiągnięciu i == 3
        }
    } while (i < 5);
}

void forExample() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Wartość i (for): " << i << std::endl;
        if (i == 3) {
            continue; // przejdź do kolejnej iteracji po osiągnięciu i == 3
        }
    }
}

int main() {
    std::cout << "Przykład użycia pętli while:" << std::endl;
    whileExample();

    std::cout << "\nPrzykład użycia pętli do-while:" << std::endl;
    doWhileExample();

    std::cout << "\nPrzykład użycia pętli for:" << std::endl;
    forExample();

    return 0;
}
