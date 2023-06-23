#include <iostream>

int main() {
    int liczba1, liczba2;
    std::cout << "Podaj dwie liczby: ";
    std::cin >> liczba1 >> liczba2;

    int suma = liczba1 + liczba2;
    std::cout << "Suma: " << suma << std::endl;

    int roznica = liczba1 - liczba2;
    std::cout << "Roznica: " << roznica << std::endl;

    int iloczyn = liczba1 * liczba2;
    std::cout << "Iloczyn: " << iloczyn << std::endl;

    int iloraz = liczba1 / liczba2;  // Potencjalne niebezpieczeństwo dzielenia przez zero
    std::cout << "Iloraz: " << iloraz << std::endl;

    int modulo = liczba1 % liczba2;  // Potencjalne niebezpieczeństwo dzielenia przez zero
    std::cout << "Modulo: " << modulo << std::endl;

    // Przykład błędu - odwołanie do niezainicjalizowanej zmiennej
    int niezainicjalizowanaZmienna;
    std::cout << "Niezainicjalizowana zmienna: " << niezainicjalizowanaZmienna << std::endl;

    return 0;
}
