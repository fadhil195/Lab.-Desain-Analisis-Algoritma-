#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika mereka tidak berada dalam urutan yang benar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                // Tampilkan proses sorting
                cout << "Proses sorting: ";
                for (int k = 0; k < n; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan banyak array: ";
    cin >> n;

    int arr[n];

    // Input elemen array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka ke " << i << ": ";
        cin >> arr[i];
    }

    // Proses sorting dengan Bubble Sort
    bubbleSort(arr, n);

    // Output hasil akhir setelah sorting
    cout << "Hasil akhir setelah sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

