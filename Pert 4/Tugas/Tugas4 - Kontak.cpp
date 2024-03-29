#include <iostream>
using namespace std;

class Kontak {
private:
    string nama[10];
    string no[10];
    int jumlahKontak;

public:
    Kontak(string namaKontak[], string nomorTelepon[], int jumlah) {
        for (int i = 0; i < jumlah; i++) {
            nama[i] = namaKontak[i];
            no[i] = nomorTelepon[i];
        }
        jumlahKontak = jumlah;
    }
	
    ~Kontak() {
        for (int i = 0; i < jumlahKontak; i++) {
            cout << "Kontak ke-" << i + 1 << ": \n"
                 << "Nama: " << nama[i] << "\nNomor telepon: " << no[i] << endl;
        }
    }
};

int main() {
    string jawaban;
    string namaKontak[10];
    string nomorTelepon[10];
    int jumlahKontak = 0;

    cout << "Masukkan kontak (Maksimal 10 kontak):\n";
    do {
        cout << "\nKontak " << jumlahKontak + 1 << ":\n";
        cout << "Nama: ";
        cin.ignore();
        getline(cin, namaKontak[jumlahKontak]);
        cout << "Nomor telepon: ";
        cin >> nomorTelepon[jumlahKontak];
        cout << "Kontak berhasil ditambahkan." << endl;
        cout << "\nTambahkan kontak lagi? (y/n): ";
        cin >> jawaban;
        jumlahKontak++;
    } while ((jawaban == "y" || jawaban == "Y") && jumlahKontak < 10);

    Kontak daftarKontak(namaKontak, nomorTelepon, jumlahKontak);

    return 0;
}
