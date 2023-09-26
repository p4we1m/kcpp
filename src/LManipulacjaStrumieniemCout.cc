#include <iostream>
#include <iomanip>

int main() {
    double x = 3.14159;
    double result = 2.71828;

    std::cout << "==================================================" << std::endl;

    std::cout << "Wynik naszego działania: " << std::setw(8) << std::fixed << std::setprecision(5) << x
              << " jest niepoprawny ale:" << std::endl;

    std::cout << std::setfill(' ') << std::setw(10) << "output:" << std::setw(8) << std::fixed << std::setprecision(3) << x
              << "   T: " << std::setw(8) << std::fixed << std::setprecision(3) << x << std::endl;

    std::cout << std::setfill(' ') << std::setw(10) << "output1:" << std::setw(7) << std::fixed << std::setprecision(4) << x
              << "   T: " << std::setw(8) << std::fixed << std::setprecision(5) << result << std::endl;

    std::cout << std::setfill(' ') << std::setw(10) << "output2:" << std::setw(7) << std::fixed << std::setprecision(4) << x
              << "   T: " << std::setw(9) << std::fixed << std::setprecision(6) << result << std::endl;

    std::cout << "---------------------------------" << std::endl;

    double average = (x + result) / 2.0;

    std::cout << std::setfill(' ') << std::setw(10) << "average:" << std::setw(7) << std::fixed << std::setprecision(4) << average
              << "   T: " << std::setw(9) << std::fixed << std::setprecision(6) << result << std::endl;

    std::cout << "==================================================" << std::endl;

    return 0;
}


// setw - stawia szerokość pola wyjściowego na n znaków. Funkcja ta działa tylko na następnym wyjściu do strumienia, po czym resetuje się. Użyto std::setw(10), co oznacza, że kolejne wartości będą miały szerokość 10 znaków, a jeśli wartość jest krótsza, zostaną wypełnione spacjami.
// setprecision - ustawia precyzję (liczbę cyfr po przecinku) dla typów zmiennoprzecinkowych. Użyto std::setprecision(3), co oznacza, że liczba zmiennoprzecinkowa będzie miała trzy cyfry po przecinku.
// setfill - ustawia znak wypełnienia dla pól wyjściowych. W przykładzie użyto std::setfill('*'), co oznacza, że pola wyjściowe będą wypełnione znakami '*'.
// fixed - Ustawia strumień zmiennoprzecinkowy na tryb stałopozycyjny. Oznacza to, że liczba zmiennoprzecinkowa będzie zawsze wyświetlana w notacji dziesiętnej.
//scientific - Ustawia strumień zmiennoprzecinkowy na tryb naukowy. Oznacza to, że liczba zmiennoprzecinkowa będzie wyświetlana w notacji naukowej.
// hex - Ustawia strumień na tryb szesnastkowy. Wszystkie kolejne liczby całkowite będą wyświetlane jako liczby szesnastkowe.
// dec - Ustawia strumień na tryb dziesiętny. Wszystkie kolejne liczby całkowite będą wyświetlane jako liczby dziesiętne.
