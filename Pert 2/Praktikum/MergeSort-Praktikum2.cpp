#include <iostream>
using namespace std;

// Fungsi merge untuk menggabungkan dua bagian array
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    // Mengisi array L dengan elemen dari array arr
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    // Mengisi array R dengan elemen dari array arr
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mengurutkan array L dan R secara ascending
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (L[j] > L[j + 1]) {
                int temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n2 - i - 1; j++) {
            if (R[j] > R[j + 1]) {
                int temp = R[j];
                R[j] = R[j + 1];
                R[j + 1] = temp;
            }
        }
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi mergeSort untuk mengurutkan array secara ascending
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Fungsi show untuk menampilkan array
void show(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Masukan Banyak Data : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        cout << "Masukan Data array ke " << i << " :";
        cin >> arr[i];
    }

    // Mengurutkan array secara ascending
    mergeSort(arr, 0, size - 1);
    cout << "Hasil\n";
    show(arr, size);
    return 0;
}
