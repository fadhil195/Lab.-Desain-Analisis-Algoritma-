#include <iostream>

using namespace std;

class Ngitung {
private:
    float angka1,angka2;
 

public:
    void setAngka1(int a) {
        angka1 = a;
    }

    void setAngka2(int b) {
        angka2 = b;
    }

    int getAngka1() {
        return angka1;
    }

    int getAngka2() {
        return angka2;
    }

    int tambah() {
        return angka1 + angka2;
    }

    int kurang() {
        return angka1 - angka2;
    }

    int kali() {
        return angka1 * angka2;
    }
    float bagi() {
        if (angka2 == 0) {
            cout << "ERROR!\n" << "Hasil pembagian Error: pembagian dengan nol tidak dapat dilakukan." << endl;
            return -1; 
        } else {
            return (angka1) / angka2;
        }
    }
};

int main() {
    Ngitung hitung;
    float angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    hitung.setAngka1(angka1);

    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    hitung.setAngka2(angka2);

    cout << "Hasil penambahan: " << hitung.tambah() << endl;
    cout << "Hasil pengurangan: " << hitung.kurang() << endl;
    cout << "Hasil perkalian: " << hitung.kali() << endl;
    cout << "Hasil pembagian: " << hitung.bagi() << endl;

    return 0;
}
