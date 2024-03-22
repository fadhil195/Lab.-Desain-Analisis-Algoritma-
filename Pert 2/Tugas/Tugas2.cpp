#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int data[n];
    cout << "Masukkan elemen-elemen: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "Data yang akan di sort: [";
    for (int i = 0; i < n; i++) {
        if (i != 0) cout << ", ";
        cout << data[i];
    }
    cout << "]" << endl;

    quickSort(data, 0, n - 1);

    cout << "Hasil setelah diurutkan: [";
    for (int i = 0; i < n; i++) {
        if (i != 0) cout << ", ";
        cout << data[i];
    }
    cout << "]" << endl;

    return 0;
}

