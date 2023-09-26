#include <iostream>

class MyClass {
public:
    // Domyślny konstruktor
    MyClass() {
        std::cout << "Wywołano domyślny konstruktor" << std::endl;
        // Inicjalizacja zmiennych standardowa
        intValue = 0;
        floatValue = 0.0f;
        stringValue = "default";
    }

    // Konstruktor z niepustą liczbą zmiennych argumentów
    MyClass(int intValue, float floatValue, std::string stringValue) {
        std::cout << "Wywołano konstruktor z argumentami" << std::endl;
        // Inicjalizacja zmiennych za pomocą argumentów
        this->intValue = intValue;
        this->floatValue = floatValue;
        this->stringValue = stringValue;
    }

    // Domyślny destruktor
    ~MyClass() {
        std::cout << "Wywołano destruktor" << std::endl;
    }

private:
    int intValue;
    float floatValue;
    std::string stringValue;
};

int main() {
    // Użycie domyślnego konstruktora
    MyClass obj1;

    // Użycie konstruktora z argumentami
    MyClass obj2(42, 3.14f, "Hello");

    return 0;
}
