#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        printArray(arr, high + 1); // Output intermediate steps

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int data[] = {67, 91, 87, 33, 49, 10, 16, 43, 65, 3};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Data yang akan di sort: ";
    printArray(data, size);
    cout << endl;

    cout << "Quick Sort: " << endl;
    quickSort(data, 0, size - 1);

    return 0;
}
