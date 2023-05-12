#include <iostream>

using namespace std;

// Funkcja zwracająca wartość przez wartość
int zwroc_wartosc(int liczba) {
    return liczba + 1;
}

// Funkcja zwracająca wartość przez referencję
void zwroc_przez_referencje(int &liczba) {
    liczba += 1;
}

// Funkcja zwracająca wartość przez wskaźnik
void zwroc_przez_wskaznik(int *liczba) {
    *liczba += 1;
}

// Funkcja zwracająca wartość przez tablicę
void zwroc_tablice(int tab[], int rozmiar) {
    for(int i = 0; i < rozmiar; i++) {
        tab[i] += 1;
    }
}

int main() {
    int liczba = 1;
    cout << "Liczba przed funkcjami: " << liczba << endl;

    liczba = zwroc_wartosc(liczba);
    cout << "Liczba po funkcji zwracającej wartość: " << liczba << endl;

    zwroc_przez_referencje(liczba);
    cout << "Liczba po funkcji zwracającej przez referencję: " << liczba << endl;

    zwroc_przez_wskaznik(&liczba);
    cout << "Liczba po funkcji zwracającej przez wskaźnik: " << liczba << endl;

    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica)/sizeof(tablica[0]);
    zwroc_tablice(tablica, rozmiar);

    cout << "Tablica po funkcji zwracającej przez tablicę: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}