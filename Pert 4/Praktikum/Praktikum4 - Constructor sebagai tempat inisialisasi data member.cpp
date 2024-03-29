#include <iostream>
using namespace std;

class laptop {
	private:
		string pemilik;
		string merk;
		
	public:
		laptop (string varl, string var2) {
			pemilik = varl;
			merk = var2;
			
			cout << "paket laptop " << merk << " milik " << pemilik << " sudah dikirim" << endl;
		}
};

int main() {
	laptop laptopFadlan ("Fadlan","Asus");
	laptop laptopRisma ("Risma","Acer");
	laptop laptopCarlos ("Carlos","Lenovo");
	
	return 0;
}
