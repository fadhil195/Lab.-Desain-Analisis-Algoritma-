#include <iostream>
#include <algorithm>
#include <conio.h>
#include <string.h>
using namespace std;

struct buku{
	string judul_buku;
	int rak;
};

int binarysearch(const buku perpus[], string x, int r){
	int l = 0;
	int R = r-1;
	while(l <= R){
		int mid = (l + R) /2;
		if(x == perpus[mid].judul_buku){
			return mid;
		}
		if(x >= perpus[mid].judul_buku){
			l = mid + 1;
		}
		else{
			R = mid - 1;
		}
	}
	return -1;
}

int main(){
	int a, z;
	string buk, c;
	buku perpus[] = {
		{"B.Indo", 1 }, {"C++", 3 }, {"Garis Biru", 5 }, {"CSS", 3 }, {"JavaScript", 8 },
		{"Fashion", 6 }, {"Psikologi", 3 }, {"Statistik", 8 }, {"ONE PIECE", 1 }, {"IPA",6 },
		{"Design", 5}, {"Diskret", 8}, {"Naruto", 5}, {"Mathematic", 6}
	};
	z = sizeof(perpus)/sizeof(perpus[0]);
	
	
	for(int i = 0; i < z; i++){
		cout<<"Judul Buku : "<<perpus[i].judul_buku
			<<"\t\tRak ke-"<<perpus[i].rak<<endl;
	}
	
	cout<<"Masukan Judul Buku yang ingin di cari = ";
	cin>>buk;
	
	a = binarysearch(perpus, buk, z);
	
	cout<<"Buku dengan Judul "<<buk<<" berada pada Rak ke-"<<perpus[a].rak<<endl;
	
	return 0;
}
