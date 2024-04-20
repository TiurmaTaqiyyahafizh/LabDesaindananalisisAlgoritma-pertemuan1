// CODE Inheritance

#include <iostream>
#include <string>

using namespace std;

//CLASS INDUK
class bangundatar{
	protected:
		int lebar, tinggi;
		
	public:
		void setvalue (int a, int b){
			lebar = a;
			tinggi = b;
		}
};

//CLASS TURUNAN
class persegipanjang: public bangundatar{
	public:
		int getvalue(){
			return (lebar * tinggi);
		}
};

//CLASS TURUNAN
class segitiga: public bangundatar {
	public :
		int getvalue (){
			return (lebar * tinggi);
		}
};

//PROGRAM UTAMA

int main(){
	
	//inisialisasi
	persegipanjang pp;
	segitiga sg;
	
	//inisaialisasi nilai
	pp.setvalue(4,5);
	sg.setvalue(10,5);
	
	//mendapatkan nilai kembali
	cout << pp.getvalue() << endl;
	cout << sg.getvalue();
	
	return 0;
}
