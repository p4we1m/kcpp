#include <iostream>
#include <iomanip>

int main() {
    int liczba = 123;
    double liczbaZmiennoprzecinkowa = 3.14159;

    // setw - stawia szerokość pola wyjściowego na n znaków. Funkcja ta działa tylko na następnym wyjściu do strumienia, po czym resetuje się. Użyto std::setw(10), co oznacza, że kolejne wartości będą miały szerokość 10 znaków, a jeśli wartość jest krótsza, zostaną wypełnione spacjami.
    std::cout << "setw:\n";
    std::cout << std::setw(10) << liczba << std::endl;
    std::cout << std::setw(10) << liczbaZmiennoprzecinkowa << std::endl;

    // setprecision - ustawia precyzję (liczbę cyfr po przecinku) dla typów zmiennoprzecinkowych. Użyto std::setprecision(3), co oznacza, że liczba zmiennoprzecinkowa będzie miała trzy cyfry po przecinku.
    std::cout << "setprecision:\n";
    std::cout << std::setprecision(3) << liczbaZmiennoprzecinkowa << std::endl;

    // setfill - ustawia znak wypełnienia dla pól wyjściowych. W przykładzie użyto std::setfill('*'), co oznacza, że pola wyjściowe będą wypełnione znakami '*'.
    std::cout << "setfill:\n";
    std::cout << std::setfill('*') << std::setw(10) << liczba << std::endl;

    // fixed - Ustawia strumień zmiennoprzecinkowy na tryb stałopozycyjny. Oznacza to, że liczba zmiennoprzecinkowa będzie zawsze wyświetlana w notacji dziesiętnej.
    //scientific - Ustawia strumień zmiennoprzecinkowy na tryb naukowy. Oznacza to, że liczba zmiennoprzecinkowa będzie wyświetlana w notacji naukowej.
    std::cout << "fixed i scientific:\n";
    std::cout << std::fixed << liczbaZmiennoprzecinkowa << std::endl;
    std::cout << std::scientific << liczbaZmiennoprzecinkowa << std::endl;

    // hex - Ustawia strumień na tryb szesnastkowy. Wszystkie kolejne liczby całkowite będą wyświetlane jako liczby szesnastkowe.
    // dec - Ustawia strumień na tryb dziesiętny. Wszystkie kolejne liczby całkowite będą wyświetlane jako liczby dziesiętne.
    std::cout << "hex i dec:\n";
    std::cout << std::hex << liczba << std::endl;
    std::cout << std::dec << liczba << std::endl;

    return 0;
}
