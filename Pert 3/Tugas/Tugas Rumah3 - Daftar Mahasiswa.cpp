#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
    string nama;
    string npm;
};

int main() {
    const int jumlah_mahasiswa = 5;
    Mahasiswa daftar_mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Masukkan nama Mahasiswa " << i + 1 << ": ";
        getline(cin, daftar_mahasiswa[i].nama);
        cout << "Masukkan NPM Mahasiswa " << i + 1 << ": ";
        getline(cin, daftar_mahasiswa[i].npm);
    }

    cout << endl;

    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama: " << daftar_mahasiswa[i].nama << endl;
        cout << "NPM: " << daftar_mahasiswa[i].npm << endl << endl;
    }

    return 0;
}

