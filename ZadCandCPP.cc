#include <stdio.h>

// Operacje w języku C
void performOperationsInC() {
    int a = 5;
    int b = 10;
    int c;

    c = a + b;
    printf("Wynik dodawania w C: %d\n", c);

    c = a - b;
    printf("Wynik odejmowania w C: %d\n", c);

    c = a * b;
    printf("Wynik mnożenia w C: %d\n", c);
}

// Operacje w języku C++
void performOperationsInCpp() {
    int a = 5;
    int b = 10;
    int c;

    c = a + b;
    printf("Wynik dodawania w C++: %d\n", c);

    c = a - b;
    printf("Wynik odejmowania w C++: %d\n", c);

    c = a * b;
    printf("Wynik mnożenia w C++: %d\n", c);
}

int main() {
    printf("Operacje w języku C:\n");
    performOperationsInC();

    printf("\n");

    printf("Operacje w języku C++:\n");
    performOperationsInCpp();

    return 0;
}
