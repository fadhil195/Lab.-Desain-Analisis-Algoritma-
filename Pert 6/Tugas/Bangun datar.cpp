#include <iostream>
using namespace std;

class PersegiPanjang {
protected:
    float panjang;
    float lebar;

public:
    
    PersegiPanjang(float p, float l) {
        panjang = p;
        lebar = l;
    }

    float hitungLuas() {
        return panjang * lebar;
    }
};

class Segitiga {
protected:
    float alas;
    float tinggi;

public:
	
    Segitiga(float a, float t) {
        alas = a;
        tinggi = t;
    }

    float hitungLuas() {
        return 0.5 * alas * tinggi;
    }
};

int main() {

    float panjangPersegiPanjang, lebarPersegiPanjang;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjangPersegiPanjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebarPersegiPanjang;

    float alasSegitiga, tinggiSegitiga;
    cout << "\nMasukkan alas segitiga: ";
    cin >> alasSegitiga;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    PersegiPanjang pp(panjangPersegiPanjang, lebarPersegiPanjang);
    Segitiga segitiga(alasSegitiga, tinggiSegitiga);

    float luasPersegiPanjang = pp.hitungLuas();
    float luasSegitiga = segitiga.hitungLuas();

    cout << "\nLuas bangun datar:" << endl;
    cout << "Luas persegi panjang: " << luasPersegiPanjang << endl;
    cout << "Luas segitiga: " << luasSegitiga << endl;

    return 0;
}

