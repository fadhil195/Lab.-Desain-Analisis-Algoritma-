#include <iostream>
#include <string>
using namespace std;

class infobuku {
	private :
		string judul;
		string penulis;
		int tahun;
		
		public :
			infobuku () {
				judul = "Unknown";
				penulis = "Unknown";
				tahun = 0;
			}
			void setjudul (string title, string author, int year) {
				judul = title;
				penulis = author;
				tahun = year;
			}
			
	void displayinfo () {
		cout << "Informasi buku ";
		cout << "Judul : " << judul << endl;
		cout << "Penulis : " << penulis << endl;
		cout << "Tahun terbit : " << tahun << endl;
	}
	
};

int main () {
	infobuku buku1;
	infobuku buku2;
	
	buku1.setjudul("ONE PIECE", "Hisashimoto", 1997);
	buku2.setjudul("Naruto", "Masashi", 2004);
	
	cout << "Informasi buku 1 " << endl;
	buku1.displayinfo();
	cout << "--------------------------------" << endl;
	
	cout << "Informasi buku 2 " << endl;
	buku2.displayinfo();
	cout << "--------------------------------" << endl;
	
	return 0;
}
