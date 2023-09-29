#include "ZadKcpp.h"
#include "ZadBin2Dec.h"
#include "ZadParzysta.h"
#include "ZadPrzekazywanieTablic.h"
#include "ZadDec2Bin.h"
#include <iostream>
#include <vector>

ZadKcpp::ZadKcpp() {}

void ZadKcpp::menu() {
    int choice;
    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Konwersja z binarnej na dziesiętną\n";
        std::cout << "2. Sprawdzanie parzystości liczby\n";
        std::cout << "3. Przekazywanie tablic\n";
        std::cout << "4. Konwersja z dziesiętnej na binarną\n";
        std::cout << "5. Sprawdzanie parzystości liczby (MODULO)\n";
        std::cout << "0. Wyjście\n";
        std::cout << "Wybierz opcję: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                {
                    int binary;
                    std::cout << "Podaj liczbę binarną: ";
                    std::cin >> binary;
                    std::vector<int> decimal = ZadBin2Dec::binaryToDecimal(binary);
                    std::cout << "Wartość dziesiętna: ";
                    ZadBin2Dec::printDecimal(decimal);
                }
                break;
            case 2:
                {
                    int number;
                    std::cout << "Podaj liczbę do sprawdzenia parzystości: ";
                    std::cin >> number;
                    if (ZadParzysta::isEvenBitwise(number)) {
                        std::cout << "Liczba jest parzysta." << std::endl;
                    } else {
                        std::cout << "Liczba jest nieparzysta." << std::endl;
                    }
                }
                break;
            case 3:
                {
                    int arr[] = {1, 2, 3, 4, 5};
                    int size = sizeof(arr) / sizeof(arr[0]);

                    std::cout << "Tablica przed zmianą: ";
                    printArray(arr, size);

                    multiplyArrayBy2(arr, size);
                    std::cout << "Tablica po zmianie: ";
                    printArray(arr, size);
                }
                break;
            case 4:
                {
                    int decimal;
                    std::cout << "Podaj liczbę dziesiętną: ";
                    std::cin >> decimal;
                    std::vector<int> binary = ZadDec2Bin::decimalToBinary(decimal);
                    std::cout << "Wartość binarna: ";
                    ZadBin2Dec::printDecimal(binary);
                }
                break;
            case 5:
                {
                    int number;
                    std::cout << "Podaj liczbę do sprawdzenia parzystości: ";
                    std::cin >> number;
                    if (ZadParzysta::isEvenModulo(number)) {
                        std::cout << "Liczba jest parzysta." << std::endl;
                    } else {
                        std::cout << "Liczba jest nieparzysta." << std::endl;
                    }
                }
                break;
            case 0:
                std::cout << "Wyjście z programu.\n";
                return;
            default:
                std::cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
        }
    }
}
