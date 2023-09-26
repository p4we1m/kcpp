#include <iostream>

struct MyStruct {
    // Domyślny konstruktor
    MyStruct() {
        std::cout << "Wywołano domyślny konstruktor" << std::endl;
        // Inicjalizacja zmiennych standardowa
        intValue = 0;
        floatValue = 0.0f;
        stringValue = "default";
    }

    // Konstruktor z niepustą liczbą zmiennych argumentów
    MyStruct(int intValue, float floatValue, std::string stringValue)
        : intValue(intValue), floatValue(floatValue), stringValue(stringValue) {
        std::cout << "Wywołano konstruktor z argumentami" << std::endl;
    }

    // Domyślny destruktor
    ~MyStruct() {
        std::cout << "Wywołano destruktor" << std::endl;
    }

    int intValue;
    float floatValue;
    std::string stringValue;
};

int main() {
    // Użycie domyślnego konstruktora
    MyStruct obj1;

    // Użycie konstruktora z argumentami
    MyStruct obj2(42, 3.14f, "Hello");

    return 0;
}
