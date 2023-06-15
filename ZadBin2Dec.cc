#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        decimal += lastDigit * base;
        base *= 2;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Podaj liczbę binarną: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Wartość dziesiętna: " << decimal << endl;

    return 0;
}
