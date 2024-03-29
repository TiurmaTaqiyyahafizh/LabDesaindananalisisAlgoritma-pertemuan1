#include <iostream>  //library
using namespace std; //buat ngilangin ::std

class contoh { // class name
	private :  // menunjukan bahwa semua elemnt di bagian ini janya bisa di akses di dalam kelas itu sendiri
		int nilai; // variabel nilai yang hanya bisa di akses di kelas itu sendiri
	public : //menunjikan bahwa semua elemen di bawahny dapat di akses dari luar kelas
		contoh (int n){ // construktoruntuk kelas contoh menerima argumen bertipe integer (n) 
			nilai =n;
		}
		
	int getNum (){ // sebuah fungsi memeber yange mengembalikan nilai variabel nilai fungsi ini bisa di akses dari luar kelas 
		return nilai;
	}
};

int main (){ //fungsi utama prgram
	contoh obj (10); // membuat objek dari kelas "contoh" dengan memberikan nilai 10 ke konstruktor
	cout << "nilai yang di input :"<< obj.getNum()<<endl; // mencetak nilai yang di input
	return 0; // mengembalikan 0 menunjukan bahwa program selesai di jalankan dan keluar.
}
