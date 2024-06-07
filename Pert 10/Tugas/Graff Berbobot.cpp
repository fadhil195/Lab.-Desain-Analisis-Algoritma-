#include <iostream>
#include <vector>
using namespace std;

class GR{
	private:
		int js;
		vector<vector<int> >mt;
	public:
		GR(int simp){
			js = simp;
			for(int i = 0; i < simp; ++i){
				vector<int> brs(simp, 0);
				mt.push_back(brs);
			}
		}
		
	void Ts(int u, int v, int m){
		if (u >= 0 && u < js && v >= 0 && v < js){
			mt[u][v] = m;
		} else {
			cout << "Sisi tidak valid" << endl;
		}
	}
	
	void hs(int u, int v){
		if (u >= 0 && u < js && v >= 0 && v < js){
			mt[u][v] = 0;
			mt[v][u] = 0;
		} else {
			cout << "Sisi tidak valid" << endl;
		}
	}
	
	void dsp(){
		for(int i = 0; i < js; i++){
			cout << "Simpul " << i << " : ";
			for(int j = 0; j < js; j++){
				if(mt[i][j] != 0){
					cout << " -> (" << j << " , " << mt[i][j] << ")";
				}
			} 
			cout << endl;
		}
	}
};

int main(){
	int s = 5;
	GR g(s);
	
	g.Ts(0, 1, 10);
	g.Ts(0, 4, 20);
	g.Ts(1, 2, 30);
	g.Ts(1, 3, 40);
	g.Ts(1, 4, 50);
	g.Ts(2, 3, 60);
	g.Ts(3, 4, 70);
	
	cout << "Daftar Ketetanggaan: " << endl;
	g.dsp();
	
	return 0;
}

