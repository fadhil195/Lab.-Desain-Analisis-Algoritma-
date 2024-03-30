#include <iostream>
using namespace std;

class Kontak {
private:
    string nama[100];
    string nomor[100];
    int jumlahKontak;

public:
    Kontak() {
        jumlahKontak = 0;
    }

    void tambahKontak(string namaBaru, string nomorBaru) {
        nama[jumlahKontak] = namaBaru;
        nomor[jumlahKontak] = nomorBaru;
        jumlahKontak++;
        cout << "Kontak berhasil ditambahkan.\n";
    }

    void tampilkanSemuaKontak() {
        cout << "Daftar Kontak:\n";
        for (int i = 0; i < jumlahKontak; i++) {
            cout << "Kontak ke-" << i + 1 << ":\n"
                 << "Nama: " << nama[i] << "\nNomor Telpon: " << nomor[i] << endl
                 << "--------------------------------\n";
        }
    }
};

int main() {
    int jumlahKontak = 0;
    string nama;
    string nomor;
    char jawaban;
    Kontak daftarKontak;

    do {
        cout << "Masukan Nama Kontak ke-" << jumlahKontak + 1 << ": ";
        getline(cin >> ws, nama);
        cout << "Masukan Nomor: ";
        getline(cin, nomor);

        daftarKontak.tambahKontak(nama, nomor);
        jumlahKontak++;

        cout << "Tambahkan Kontak Lagi? (y/n)";
        cin >> jawaban;
        cin.ignore();
    } while ((jawaban == 'y' || jawaban == 'Y') && jumlahKontak < 100);

    daftarKontak.tampilkanSemuaKontak();

    return 0;
}
