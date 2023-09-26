#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Przykładowa tablica liczb całkowitych
    int i = 2;  // Indeks

    int* q = arr;  // Wskaźnik na tablicę (adres pierwszego elementu)

    std::cout << "i[q]: " << i[q] << std::endl;
    // i[q] jest równoważne z *(i + q), co oznacza "wartość pod adresem (i + q)"
    // W przypadku wskaźnika q na tablicę, q jest traktowane jako przesunięcie (offset) od adresu i
    // W ten sposób otrzymujemy wartość elementu tablicy, który znajduje się na indeksie i + q
    
    return 0;
}

// Przykładem może być implementacja algorytmu sortowania, który korzysta z techniki indeksowania tablicy przy użyciu wskaźników


