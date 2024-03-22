#include <iostream>
using namespace std;

// Fungsi swap untuk mengganti elemen array
void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr [pos1];
	arr[pos1] = arr[pos2];
	arr[pos2]= temp;
}

// Fungsi partition untuk mengurutkan array secara ascending
int partition (int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while (i <= high){
		if (arr[i] < pivot){
			i++;
		}
		else {
			swap (arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

// Fungsi quickSort untuk mengurutkan array secara ascending
void quickSort(int arr[], int low, int high){
	if (low < high){
		int pivot = arr[high];
		int pos = partition(arr,low,high,pivot);

		quickSort(arr, low, pos-1);
		quickSort(arr, pos+1, high);
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
    cout << "Tentukan panjang array : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        cout << "Masukan Data array ke " << i << " :";
        cin >> arr[i];
    }

    // Mengurutkan array secara ascending
    quickSort(arr, 0, size - 1);
    cout << "Hasil\n";
    show(arr, size);
    return 0;
}
