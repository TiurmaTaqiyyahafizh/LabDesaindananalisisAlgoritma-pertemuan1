#include <iostream>
#include <string>

using namespace std;

struct barang{
	string barang;
	int harga;
};

int search(const barang db[], string brng){
	for (int i=0; i<5;i++){
		if(db[i].barang==brng){
			return i;
		}
	}
	return -1;
}

int main(){
string brng;
bool ketemu=false;
barang db[5] = {
	{"Buku",5000},
	{"Pensil",5000},
	{"Pulpen",5000},
	{"Penghapus",5000},
	{"Penggaris",5000}	
};
	
cout << "Masukan barang yang akan di cari = ";
cin >> brng;

int a=search(db,brng);
	if (a!=-1){
		cout << "barang "<< db[a].barang<< " ditemukan dengan harga barang Rp."<< db[a].harga;
	}else{
		cout << "maaf barang "<< db[a].barang << " tidak di temukan";
	}
  
}

