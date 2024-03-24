#include <iostream>
#include <string>

using namespace std;
class Library{
	private:
		string nama;
		string buku;
		int Tanggal;
		int Bulan;
		int Tahun;
		
	public:
		
	void setnama(string a){
		nama = a;
	}
		
	void setbuku(string b){
		buku = b;
	}
	
	void setTanggal(int c){
		Tanggal = c;
	}
	
	void setBulan(int d){
		Bulan = d;
	}
	
	void setTahun(int e){
		Tahun = e;
	}
	
	string getnama(){
		return nama;
	}
	
	string getbuku(){
		return buku;
	}
	
	int getTanggal(){
		return Tanggal;
	}
	
	int getBulan(){
		return Bulan;
	}
	
	int getTahun(){
		return Tahun;
	}
};

int main(){

string a,b;
int x,y,z,d;

cout << "Masukan Nama :";
getline (cin >> ws, a);;
cout << "Buku yang di pinjam :";
getline (cin >> ws, b);
cout << "Tanggal :";
cin >> x;
cout << "Bulan :";
cin >> y;
cout << "Tahun :";
cin >> z;

Library Library;
Library.setnama(a);
Library.setbuku(b);
Library.setTanggal(x);
Library.setBulan(y);
Library.setTahun(z);


cout << endl;
cout << "Data Yang di masukan"<<endl;
cout << "Nama :"<<Library.getnama()<< endl;
cout << "Buku yang di pinjam :"<<Library.getbuku()<< endl;
cout << "Tanggal peminjaman :"<<Library.getTanggal()<<"/"<<Library.getBulan()<<"/"<<Library.getTahun()<< endl;

d = Library.getTanggal() + 7;

if (d < 30){
		cout << "Tanggal pengembalian :"<< d << "/"<< Library.getBulan() << "/"<< Library.getTahun();
}else{
	cout << "Tanggal pengembalian :"<< d - 29 << "/"<< Library.getBulan() + 1 << "/"<< Library.getTahun();
}
  
    return 0;
}

