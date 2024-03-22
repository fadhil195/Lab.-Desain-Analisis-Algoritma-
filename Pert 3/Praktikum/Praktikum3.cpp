#include <iostream>
#include <string>
using namespace std;

class Silsilah{
	protected : 
		string orangtua = "Albert Wijaya dan Jenny Lim";
		string anakanak = " Agatha Wijaya dan Jonathan Wijaya";
		
	public : 
		string ceksilsilah(){
			return "Ayah Bernama : " + orangtua.substr(0, orangtua.find(" ")) +
				" Dan Ibu Bernama : " + orangtua.substr(orangtua.find(" ") + 4);
		}
		
};

class Cucu : public Silsilah {
	protected : 
		string cucu = "Wlbert Tan dan Rayanza Wijaya";
		
	public : 
		string cekAnak(){
			return "Anak Pertama Keluarga Wijaya adalah " + anakanak.substr(0, anakanak.find(" ")) + 
				" dan Anak Kedua Keluarga Wijaya adalah " + anakanak.substr(anakanak.find(" ") + 4);
		}
};

class Anak : public Cucu {
	public :
		string lihatSilsilah(){
			return "Silsilah Keluarga Wijaya";
		}
		
		
		string cekCucu(){
			return "Cucu Pertama Bernama " + cucu.substr(0, cucu.find(" ")) + 
			" dan Cucu Kedua Bernama " + cucu.substr(0, cucu.find(" ") + 4);
		}
};


int main(){
	Anak silsilahWijaya;
	
	cout<<silsilahWijaya.lihatSilsilah() << endl;
	cout<<silsilahWijaya.ceksilsilah() << endl;
	cout<<silsilahWijaya.cekAnak() << endl;
	cout<<silsilahWijaya.cekCucu() << endl;
}
