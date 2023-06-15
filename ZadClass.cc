#include <iostream>

class ZadClass {
public:
    // Zmienne publiczne
    int publicVariable;

    // Metody deklarowane i definiowane w klasie
    void publicMethod();

    // Metody deklarowane w klasie, a definiowane poza klasą
    void methodDeclaredInClass();

protected:
    // Zmienne chronione
    int protectedVariable;

private:
    // Zmienne prywatne
    int privateVariable;

public:
    // Metody inline
    inline void inlineMethod();
};

// Definicje metod

void ZadClass::publicMethod() {
    std::cout << "Metoda publiczna\n";
    std::cout << "Dostęp do zmiennej protectedVariable: " << protectedVariable << "\n";
    std::cout << "Dostęp do zmiennej privateVariable: " << privateVariable << "\n";
}

void ZadClass::methodDeclaredInClass() {
    std::cout << "Metoda zadeklarowana w klasie, a zdefiniowana poza nią\n";
    std::cout << "Dostęp do zmiennej protectedVariable: " << protectedVariable << "\n";
    std::cout << "Dostęp do zmiennej privateVariable: " << privateVariable << "\n";
}

inline void ZadClass::inlineMethod() {
    std::cout << "Metoda inline\n";
}

int main() {
    ZadClass obj;
    obj.publicVariable = 5;
    obj.publicMethod();
    obj.methodDeclaredInClass();
    obj.inlineMethod();

    return 0;
}