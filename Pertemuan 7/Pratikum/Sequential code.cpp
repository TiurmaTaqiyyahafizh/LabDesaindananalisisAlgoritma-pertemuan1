#include <iostream>

using namespace std;
int main (){
	//Deklarasi array untuk menyi,pam bilangan di posisinya
	int nilai [20];
	int posisi [20];
	
	int i,n,bil,jmlh=0;
	bool ketemu;
	
	cout << "masukan jumlah deret bilangan = ";
	cin >> n;
	cout << endl;
	
	for (i=0;i<n;i++){
		cout << "nilai bilangan ke -"<<i<< " = ";
		cin >> nilai[i];
	}
	
	cout << "\n\deret Bilangan = ";
	
	for (i=0; i<n;i++){
		cout << nilai [i] << " ";
	}
	
	cout << "Masukan nilai yang akan di cari = ";
	cin >> bil;
	
	for ( i=0; i<n; i++){
		if (nilai[i] == bil){
			ketemu = true;
			posisi [jmlh] = i;
			jmlh++;
		}
	}
	if (ketemu){
		cout << "bilangan "<< bil<< " ditemukan sebanyak "<<jmlh;
		
		cout << "\npada posisi ke = ";
		
		for (i=0; i<jmlh; i++){
			cout << posisi[i]<<" ";
			
		}
	}else{
		cout << "maaf, blangan "<<bil<<" tidak di temukan";
		getchar();
	}
}
