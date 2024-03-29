#include <iostream>
using namespace std;

class info{
	private: 
		string a, b;
		int c;
		
	public:
		info() {
			cout << "Masukan nama anda : ";
			getline(cin, a);
			cout << "Masukan usia anda : ";
			cin >> c;
			cout << "Masukan alamat anda : ";
			cin.ignore();
			getline(cin, b);
			cout << "Constructor dipanggil";
			}
			~info(){
				cout << "\nInformasi biodata : " << "\nNama : " << a << "\nAge : " << c << "\n Alamat : " << b << "\nDestruction dipanggil";
		}
};

int main (){
	info obj;
}
