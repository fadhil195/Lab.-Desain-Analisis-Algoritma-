#include <iostream>
#include <algorithm>

using namespace std;

void printArray(string arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int jumlah_kata;
    cout << "Masukkan jumlah kata: ";
    cin >> jumlah_kata;

    string kata[jumlah_kata];

    cout << "Masukkan kata-kata:\n";
    for (int i = 0; i < jumlah_kata; ++i) {
        cin >> kata[i];
    }

    selectionSort(kata, jumlah_kata);

    cout << "\nKata-kata setelah diurutkan:\n";
    printArray(kata, jumlah_kata);

    return 0;
}

