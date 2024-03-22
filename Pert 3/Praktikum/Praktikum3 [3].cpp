#include <iostream>
#include <string>
using namespace std;

class Orang {
	private:
		string Nama;
		int Npm;
		
		public:
			void setNama (string n ){
				Nama = n;
			}
			
			void setNpm (int m) {
				Npm = m;
			}
			
			string getNama(){
				return Nama;
			}
			
			int getNpm(){
				return Npm;
			}		
};

int main(){
		
	Orang orang;
	
	string Nama;
	int Npm;
	
	cout << "Masukan nama mahasiswa: " << endl;
	getline(cin,Nama);
	cout << "NPM: " << endl;
	cin >> Npm;
	
	orang.setNama(Nama);
	orang.setNpm(Npm);
	
	cout << "Nama : " << orang.getNama() << endl;
	cout << "NPM : " << orang.getNpm() << endl;
}
