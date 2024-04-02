#include <iostream>
using namespace std;

int tambah (int angka1, int angka2){
	return angka1 + angka2;
}

int kurang (int angka1, int angka2){
	return angka1 - angka2;
}

int kali (int angka1, int angka2){
	return angka1 * angka2;
}

int bagi (int angka1, int angka2){
	return angka1 / angka2;
}


int main() {
    char milih;
    float angka1, angka2, hasil;

    do {
        cout << "Masukkan dua angka: ";
        cin >> angka1 >> angka2;

        cout << "Pilih operasi (+ untuk tambah, - untuk kurang, * untuk kali, / untuk bagi): ";
        cin >> milih;

        switch (milih) {
            case '+':
                hasil = angka1 + angka2;
                cout << "Hasil pertambahan: " << hasil << endl;
                break;
            case '-':
                hasil = angka1 - angka2;
                cout << "Hasil pengurangan: " << hasil << endl;
                break;
            case '*':
                hasil = angka1 * angka2;
                cout << "Hasil perkalian: " << hasil << endl;
                break;
            case '/':
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil pembagian: " << hasil << endl;
                } else {
                    cout << "ERROR!\n" << "Hasil pembagian Error: pembagian dengan nol tidak dapat dilakukan." << endl;
                }
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
                break;
        }

        cout << "Apakah Anda ingin melanjutkan (y/n)? ";
        cin >> milih;
    } while (milih == 'y' || milih == 'Y');

    return 0;
}
