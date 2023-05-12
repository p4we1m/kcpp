#include <iostream>
#include <algorithm>

void copyArray(int arr[], int n)
{
    int arrCopy[n];
    std::copy(arr, arr + n, arrCopy);
    for (int i = 0; i < n; i++)
    {
        std::cout << arrCopy[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    copyArray(arr, n);

    return 0;
}