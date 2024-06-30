#include <iostream>
using namespace std;

int dt[1024], mod, y = 0;
bool ketemu = false;

void prim(int j){
	for(int i = 1; i <= j; i++){
		int jf = 0;
		for (int h = 1; h <= i ; h++){
			if(i % h == 0){
				jf++;
			}
		}
		if(jf == 2){
			mod = i;
		}
	}
	
	for(int i = 0; i < j; i++){
		dt[i] = -1;
	}
}

void doub_hash(int d, int jmlh){
	bool cek = false;
	int i = 0, h1, h2;
	h1 = d % mod;
	h2 = mod - (d % mod);
	int hs = h1;
	
	while(dt[hs] != -1){
		if(dt[hs] == -1){
			break;
		}else{
			hs = (h1 + i * h2) % jmlh;
			i++;
		}
	}
	dt[hs] = d;
}

void find(int k, int jmlh){
	for(int j = 0; j < jmlh; j++){
		if(dt[j] == k){
			ketemu = true;
		}
	}
}

int main(){
	int t = 32, d[] = {19, 48, 32, 44, 5}, x;
	prim(10);
	
	cout<<"Data Table Semula: "<<endl;
	for(int i = 0; i < 5; ++i){
		x = d[i];
		doub_hash(x, 10);
		cout<<x<<" , ";
	}

	cout<<endl<<"Isi Hash Table: "<<endl;
	for(int i = 0; i < 10; i++){
		if(dt[i] == -1){
			cout<<i<<" --> kosong"<<endl;
		}else{
			cout<<i<<" --> "<<dt[i]<<endl;
		}
	}
	
	cout<<"Masukan Elemen yang ingin dicari: "<<t<<endl;
	find(t, 10);
	
	if(!ketemu){
		cout<<t<<" tidak ditemukan didalam tabel hash."<<endl;
	}else{
		cout<<t<<" ditemukan didalam tabel hash."<<endl;
	}
}
