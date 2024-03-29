#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public:
		Mahasiswa (string nama, int umur)
		 : nama_(nama), umur_(umur) {
			cout << "constructors mahasiswa" << endl;
		}
		~Mahasiswa () {
			cout << "== contoh destructor mahasiswa ==" << endl;
		}
	void TampilkanBiodata () {
		cout << "nama : " << nama_ << endl;
		cout << "umur : " << umur_ << endl;
	}
	private:
		string nama_;
		int umur_;
};

int main () {
	{
		Mahasiswa mhs("Fadhil Luki Pratama", 20);
		mhs.TampilkanBiodata();	
	}
	
	return 0;
}
