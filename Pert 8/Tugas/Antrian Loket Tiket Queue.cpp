#include <iostream>
using namespace std;

struct Pelanggan {
    int nomorTiket;
    string nama;
    Pelanggan* berikutnya;
} *kepala, *nodeBaru, *nodeSementara, *nodeSekarang, *ekor;

void buatPelangganBaru(int);
void tambahKeAntrian(Pelanggan*);
void layaniPelanggan();
void cetakAntrian();
bool antrianKosong();
void bersihkanAntrian();

int main() {
    kepala = ekor = NULL;
    char pilihan;
    bool berjalan = true;
    int nomorTiket = 1;

    while (berjalan) {
        cout << endl;

        cout << "SISTEM ANTRIAN LOKET TIKET" << endl;
        cout << "1. Tambah Pelanggan ke Antrian" << endl;
        cout << "2. Layani Pelanggan Berikutnya" << endl;
        cout << "3. Tampilkan Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        switch (pilihan) {
            case '1':
                buatPelangganBaru(nomorTiket);
                nomorTiket++;
                break;
            case '2':
                layaniPelanggan();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                cout << "Program selesai." << endl;
                berjalan = false;
                break;
            default:
                cout << "Input Salah." << endl;
                break;
        }
    }

    return 0;
}

void buatPelangganBaru(int nomorTiket) {
    string inputNama;

    cout << "Masukkan Nama Pelanggan: ";
    cin >> inputNama;

    nodeBaru = new Pelanggan();
    nodeBaru->nomorTiket = nomorTiket;
    nodeBaru->nama = inputNama;
    nodeBaru->berikutnya = NULL;

    tambahKeAntrian(nodeBaru);
}

bool antrianKosong() {
    return kepala == NULL;
}

void tambahKeAntrian(Pelanggan* nodeBaru) {
    if (antrianKosong()) {
        kepala = ekor = nodeBaru;
    } else {
        ekor->berikutnya = nodeBaru;
        ekor = nodeBaru;
    }

    cout << "Pelanggan " << nodeBaru->nama << " dengan nomor tiket " << nodeBaru->nomorTiket << " telah ditambahkan ke antrian." << endl;
}

void layaniPelanggan() {
    if (antrianKosong()) {
        cout << "Antrian kosong. Tidak ada pelanggan yang harus dilayani." << endl;
    } else {
        nodeSekarang = kepala;
        cout << "Melayani pelanggan " << nodeSekarang->nama << " dengan nomor tiket " << nodeSekarang->nomorTiket << "." << endl;
        kepala = kepala->berikutnya;
        delete nodeSekarang;
        if (kepala == NULL) {
            ekor = NULL;
        }
    }
}

void cetakAntrian() {
    cout << "ANTRIAN LOKET TIKET" << endl;

    if (antrianKosong()) {
        cout << "Antrian kosong." << endl;
    } else {
        nodeSekarang = kepala;
        cout << "NO  Nama" << endl;
        while (nodeSekarang != NULL) {
            cout << nodeSekarang->nomorTiket << ".  " << nodeSekarang->nama << endl;
            nodeSekarang = nodeSekarang->berikutnya;
        }
        cout << "=================" << endl;
    }
}

void bersihkanAntrian() {
    nodeSekarang = kepala;
    while (nodeSekarang != NULL) {
        nodeSementara = nodeSekarang;
        nodeSekarang = nodeSekarang->berikutnya;
        delete nodeSementara;
    }
    kepala = ekor = NULL;
    cout << "Semua pelanggan telah dilayani." << endl;
}

