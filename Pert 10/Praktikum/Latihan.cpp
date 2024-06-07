#include <iostream>
#include <vector>
using namespace std;

class Graf {
private:
	
	int jumlahSimpul;
	vector<vector<int> >matriksKetetanggaan;
	 
public:
	Graf (int simpul) {
	jumlahSimpul = simpul;
	for (int i = 0; i < simpul; i++){
		vector <int> baris(simpul, 0);
		matriksKetetanggaan.push_back(baris);
	}
}

void tambahSisi(int u, int v) {
	if (u >= 0 && u < jumlahSimpul &&  v >= 0 && v < jumlahSimpul) {	
	matriksKetetanggaan[u][v] = 1;
	matriksKetetanggaan[v][u] = 1;
	}else{
		cout << "Sisi tidak valid!" << endl;
	}	
}

void hapusSisi(int u, int v) {
	if (u >= 0 && u < jumlahSimpul && v >= 0 && v < jumlahSimpul) {
		matriksKetetanggaan[u][v] = 0;
		matriksKetetanggaan[v][u] = 0;
	}else {
		cout << "Sisi tidak valid!";
	}
}

void tampilkan() {
	for (int i = 0; i < jumlahSimpul; i++) {
		for (int j = 0; j < jumlahSimpul; j++) {
			cout << matriksKetetanggaan[i][j] << " ";
		}
		cout << endl;
	}
}

};

int main() {
	int simpul = 5;
	Graf j(simpul);
	cout << "Matriks ketetanggaan" << endl;
	j.tambahSisi(0, 1);
	j.tambahSisi(0, 4);
	j.tambahSisi(1, 2);
	j.tambahSisi(1, 3);
	j.tambahSisi(1, 4);
	j.tambahSisi(2, 3);
	j.tambahSisi(3, 4);
	j.tampilkan();
	
	
	j.hapusSisi(1, 3);
	cout << "Matriks ketetanggaan setelah menghapus sisi antara 1 dan 3: " << endl;
	j.tampilkan();
	
	return 0;
}

