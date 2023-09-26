#include <iostream>

// Zastosowanie dyrektywy preprocesora #ifdef i #else
#define DEBUG

int main() {
#ifdef DEBUG
    std::cout << "Tryb DEBUG" << std::endl;
#else
    std::cout << "Tryb RELEASE" << std::endl;
#endif

    // Zastosowanie dyrektywy preprocesora #ifndef
#ifndef VERBOSE
    std::cout << "Brak trybu VERBOSE" << std::endl;
#endif

    // Zastosowanie dyrektywy preprocesora #define wraz z użyciem makra
#define PI 3.14159
    double radius = 5.0;
    double area = PI * radius * radius;
    std::cout << "Pole koła: " << area << std::endl;

    // Zastosowanie dyrektywy preprocesora wraz z użyciem operatora #
#define STR(x) #x
    std::cout << "Wartość PI: " << STR(PI) << std::endl;

    // Zastosowanie dyrektywy preprocesora wraz z użyciem operatora ##
#define CONCAT(x, y) x##y
    int number1 = 10;
    int number2 = 20;
    int result = CONCAT(number, 1) + CONCAT(number, 2);
    std::cout << "Wynik: " << result << std::endl;

    std::cout << "\nBez dyrektywy preprocesora" << std::endl;
    // Bez dyrektywy preprocesora
    bool debugMode = true;
    bool verboseMode = false;
    const double PIValue = 3.14159;
    
    if (debugMode) {
        std::cout << "Tryb DEBUG" << std::endl;
    } else {
        std::cout << "Tryb RELEASE" << std::endl;
    }
    
    if (!verboseMode) {
        std::cout << "Brak trybu VERBOSE" << std::endl;
    }
    
    double radiusValue = 5.0;
    double areaValue = PIValue * radiusValue * radiusValue;
    std::cout << "Pole koła: " << areaValue << std::endl;
    
    std::cout << "Wartość PI: " << PIValue << std::endl;
    
    int number1Value = 10;
    int number2Value = 20;
    int resultValue = number1Value + number2Value;
    std::cout << "Wynik: " << resultValue << std::endl;
    
    return 0;
}
