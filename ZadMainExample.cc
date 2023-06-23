#include <iostream>
#include <vector>

// Deklaracja funkcji zadeklarowanych jako "extern C"
extern "C" void funkcjaC();
extern "C" void funkcjaC2();

// Pozostałe funkcje
void funkcja1() {
    std::cout << "Wywołano funkcję 1" << std::endl;
}

void funkcja2() {
    std::cout << "Wywołano funkcję 2" << std::endl;
}

void funkcja3() {
    std::cout << "Wywołano funkcję 3" << std::endl;
}

void funkcja4() {
    std::cout << "Wywołano funkcję 4" << std::endl;
}

void funkcja5() {
    std::cout << "Wywołano funkcję 5" << std::endl;
}

int main() {
    // Lista argumentów określających, które funkcje mają zostać wykonane
    std::vector<int> argumenty = {1, 2, 4};

    for (int arg : argumenty) {
        switch (arg) {
            case 1:
                funkcja1();
                break;
            case 2:
                funkcja2();
                break;
            case 3:
                funkcja3();
                break;
            case 4:
                funkcja4();
                break;
            case 5:
                funkcja5();
                break;
            default:
                std::cout << "Nieznany argument: " << arg << std::endl;
        }
    }

    // Wywołanie funkcji zadeklarowanych jako "extern C"
    funkcjaC();
    funkcjaC2();

    return 0;
}

// Definicja funkcji zadeklarowanych jako "extern C"
extern "C" void funkcjaC() {
    std::cout << "Wywołano funkcję C" << std::endl;
}

extern "C" void funkcjaC2() {
    std::cout << "Wywołano funkcję C2" << std::endl;
}
