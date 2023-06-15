#include <iostream>

// Deklaracja struktury
struct MyStruct {
    int x;
    float y;
    char z;

    // Konstruktor z inicjalizacją wartości początkowych
    MyStruct() : x(0), y(0.0), z('\0') {}
};

// Funkcja do zmiany wartości obiektu
void changeValue(MyStruct& obj, int newX, float newY, char newZ);

// Funkcja do odczytu wartości obiektu
void readValue(const MyStruct& obj);

int main() {
    // Definicja obiektu struktury
    MyStruct obj;

    // Wywołanie funkcji do zmiany wartości obiektu
    changeValue(obj, 20, 2.71, 'B');

    // Wywołanie funkcji do odczytu wartości obiektu
    readValue(obj);

    return 0;
}

// Definicja funkcji do zmiany wartości obiektu
void changeValue(MyStruct& obj, int newX, float newY, char newZ) {
    obj.x = newX;
    obj.y = newY;
    obj.z = newZ;
}

// Definicja funkcji do odczytu wartości obiektu
void readValue(const MyStruct& obj) {
    std::cout << "x: " << obj.x << std::endl;
    std::cout << "y: " << obj.y << std::endl;
    std::cout << "z: " << obj.z << std::endl;
}
