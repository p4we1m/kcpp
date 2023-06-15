#include <iostream>
#include <vector>
using namespace std;

vector<int> decimalToBinary(int decimal) {
    vector<int> binary;
    while (decimal > 0) {
        binary.insert(binary.begin(), decimal % 2);
        decimal /= 2;
    }
    return binary;
}

void printBinary(vector<int> binary) {
    for (int i = 0; i < binary.size(); i++) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> decimal;

    vector<int> binary = decimalToBinary(decimal);
    cout << "Wartość binarna: ";
    printBinary(binary);

    return 0;
}
