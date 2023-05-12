#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Tablica przed zmianą: ";
    printArray(arr, size);

    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    cout << "Tablica po zmianie: ";
    printArray(arr, size);

    return 0;
}