#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Wypisanie na ekran
    std::cout << "Wypisanie na ekran." << std::endl;

    // Zapis do strumienia błędów
    std::cerr << "Zapis do strumienia błędów." << std::endl;

    // Zapis do pliku
    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "Zapis do pliku." << std::endl;
        outputFile.close();
        std::cout << "Zapisano do pliku 'output.txt'." << std::endl;
    } else {
        std::cerr << "Nie można otworzyć pliku do zapisu." << std::endl;
    }

    // Odczyt z pliku
    std::ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        std::string line;
        std::cout << "Odczyt z pliku 'input.txt':" << std::endl;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Nie można otworzyć pliku do odczytu." << std::endl;
    }

    return 0;
}
