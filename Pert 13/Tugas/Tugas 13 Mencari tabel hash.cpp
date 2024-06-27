#include <iostream>
using namespace std;

class HashTable {
private:
    int* tabelHash;
    int ukuranTabel;

public:
    HashTable(int ukuran) {
        ukuranTabel = ukuran;
        tabelHash = new int[ukuranTabel];
        for (int i = 0; i < ukuranTabel; i++) {
            tabelHash[i] = -1;
        }
    }

    void insert(int elemen) {
        int index = elemen % ukuranTabel;
        while (tabelHash[index] != -1) {
            index = (index + 1) % ukuranTabel;
        }
        tabelHash[index] = elemen;
    }

    bool search(int elemen) {
        int index = elemen % ukuranTabel;
        for (int j = 0; j < ukuranTabel; j++) {
            if (tabelHash[index] == elemen) {
                return true;
            }
            index = (index + 1) % ukuranTabel;
        }
        return false;
    }

    void display() const {
        cout << "Hash Table:" << endl;
        for (int i = 0; i < ukuranTabel; i++) {
            if (tabelHash[i] == -1) {
                cout << i << " --> Kosong" << endl;
            } else {
                cout << i << " --> " << tabelHash[i] << endl;
            }
        }
    }
};

int main() {
    int ukuranTabel;
    cout << "Masukkan ukuran tabel hash: ";
    cin >> ukuranTabel;

    HashTable tabelHash(ukuranTabel);

    int angkaElemen;
    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> angkaElemen;

    cout << "Masukkan elemen:" << endl;
    for (int i = 0; i < angkaElemen; i++) {
        int elemen;
        cin >> elemen;
        tabelHash.insert(elemen);
    }

    tabelHash.display();

    int cariElemen;
    cout << "Masukkan elemen yang ingin dicari dalam tabel hash: ";
    cin >> cariElemen;

    if (tabelHash.search(cariElemen)) {
        cout << cariElemen << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << "Elemen " << cariElemen << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}

