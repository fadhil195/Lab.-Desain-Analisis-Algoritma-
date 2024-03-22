#include <iostream>
#include <string>
using namespace std;

class hewan {
	private:
		string nama;
		string spesies;
		
	public:
		void setnama(string n){
			nama = n;
		}
		
		void setspesies(string s){
			spesies = s;
		}
		
		string getnama(){
			return nama;
		}
		
		string getspesies(){
			return spesies;
		}
};

int main(){
	hewan hewan;
	hewan.setnama("kucing");
	hewan.setspesies("felis catus");
	
	cout << "nama: " << hewan.getnama() << endl;
	cout << "spesies: " << hewan.getspesies() << endl;
	return 0;
}
