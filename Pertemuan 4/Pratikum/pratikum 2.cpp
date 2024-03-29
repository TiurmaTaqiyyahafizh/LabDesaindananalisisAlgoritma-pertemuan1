#include <iostream>
#include <string>

using namespace std;

class perpustakaan{
	private :
		string judul;
		string penulis;
		int tahun;
		
	public :
		perpustakaan(){
			judul = "Unknown";
			penulis = "Unknown";
			tahun = 0;
		}
		
		void setjudul (string title, string author, int year) {
			judul = title;
			penulis = author;
			tahun = year;
		}
//		void setjudul (string title ){
//			judul = title;
//		}
//		void setpenulis (string author){
//			penulis=author;
//		}
//		void settahun (int year){
//			tahun = year;
//		}
		
			//perpustakaan(string judul, string penulis, int tahun)
	//	:judul_(judul),penulis_(penulis),tahun_(tahun) {
			//cout << "constructor perpustakaan"<< endl;
	//	}
	~perpustakaan(){
		//cout << "==contoh destructor mahasiswa=="<<endl;
	}
	
		void tampilkandata(){
		cout << "judul buku :"<< judul<<endl;
		cout << "penulis :"<< penulis<<endl;
		cout << "Tahun terbit :"<< tahun<<endl;
}
};

int main (){
	
perpustakaan buku1;
perpustakaan buku2;
	
	buku1.setjudul("Harry Potter and the Philosopher's stone", "J.K. Rowling", 1997);
	buku2.setjudul("To Kill a Mockingbird", "Harper Lee", 1960);
	
	cout <<"Informasi buku 1 :" << endl;
	buku1.tampilkandata();
	cout << "------------------------------------";
	
	cout << "Informasi buku 2 : " << endl;
	buku2.tampilkandata();
	cout << "-------------------------------------";

	
	
}
 

