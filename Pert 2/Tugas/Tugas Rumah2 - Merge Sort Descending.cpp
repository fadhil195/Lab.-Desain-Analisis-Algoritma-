#include <iostream>

using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void merge(int arr[], int low, int mid, int high, int& comparisons, int& movements) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int left[leftSize];
    int right[rightSize];

    for (int i = 0; i < leftSize; i++) {
        left[i] = arr[low + i];
        movements++;
    }
    for (int j = 0; j < rightSize; j++) {
        right[j] = arr[mid + 1 + j];
        movements++;
    }

    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize) {
        comparisons++;
        if (left[i] >= right[j]) { 
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
        movements++;
    }

    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
        movements++;
    }

    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
        movements++;
    }
}

void mergeSort(int arr[], int low, int high, int& comparisons, int& movements) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        cout << "Memecah List [";
        print(arr + low, mid - low + 1);

        mergeSort(arr, low, mid, comparisons, movements);

        cout << "Memecah List [";
        print(arr + mid + 1, high - mid);
        mergeSort(arr, mid + 1, high, comparisons, movements);

        cout << "Menggabungkan List [";
        print(arr + low, high - low + 1);
        merge(arr, low, mid, high, comparisons, movements);
    }
}

int main() {
    int size;
    cout << "Tentukan panjang array : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        cout << "Masukan Data array ke " << i << " :";
        cin >> arr[i];
    }

    cout << "Data awal: [";
    print(arr, size);

    int comparisons = 0, movements = 0;
    mergeSort(arr, 0, size - 1, comparisons, movements);

    cout << "\nData terurut secara descending: [";
    print(arr, size);

}
