#include <iostream>
//Adresowanie pamięci odnosi się do przydzielania unikalnych adresów dla zmiennych i obiektów w pamięci komputera. Każda zmienna ma swój adres w pamięci, który można uzyskać za pomocą operatora &.
//Przydzielanie adresów pamięci odbywa się na poziomie systemu operacyjnego i zarządzania pamięcią. Proces ten zależy od architektury komputera i używanego systemu operacyjnego. 
int main() {
    int x = 5;
    double y = 3.14;
    char z = 'A';

    std::cout << "Adres zmiennej x: " << &x << std::endl;
    std::cout << "Adres zmiennej y: " << &y << std::endl;
    std::cout << "Adres zmiennej z: " << static_cast<void*>(&z) << std::endl;
}
