#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout << "tahap " << i+1 << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int x[] = {5, 3, 8, 1, 2}; 
    int n = sizeof(x) / sizeof(x[0]);

    cout << "x sebelum diurutkan: " << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    bubbleSort(x, n);

    cout << "\nhasil setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
