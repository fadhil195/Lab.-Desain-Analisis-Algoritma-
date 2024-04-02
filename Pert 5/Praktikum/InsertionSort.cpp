#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void tampilkanArray(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++)
        cout << arr[i] << " ";
   cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array sebelum diurutkan: \n";
    tampilkanArray(arr, n);

    insertionSort(arr, n);

   cout << "Array setelah diurutkan: \n";
   tampilkanArray(arr, n);

    return 0;
}
