#include<iostream>
using namespace std;

//Program ini mendemonstrasikan penggunaan konstruktor

class Contoh {
private: //Data yang hanya dapat diakses dalam kelas
    int nilai; //Variabel untuk menyimpan nilai
    
public: //Data yang dapat diakses dari luar kelas
    //Konstruktor
    Contoh(int n) {
        nilai = n; //Inisialisasi nilai dengan n
    }
    
    //Fungsi untuk mendapatkan nilai
    int dapatNilai() {
        return nilai; //Mengembalikan nilai
    }
};

int main() {
    Contoh objek(10); //Membuat objek dengan nilai 10
    cout << "Nilai yang diinput: " << objek.dapatNilai() << endl; //Menampilkan nilai
    return 0;
}
