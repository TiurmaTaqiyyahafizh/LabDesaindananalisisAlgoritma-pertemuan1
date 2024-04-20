#include <iostream>
using namespace std;
//Kerjasma Jonathan + Tiur 

class bangundatar{
	protected:
		int lebar, tinggi;
		
	public:
		void setvalue (int a, int b){
			lebar = a;
			tinggi = b;
		}
};

class persegipanjang: public bangundatar{
	public:
		int getvalue(){
			return (lebar * tinggi);
		}
};

class segitiga: public bangundatar {
	public :
		int getvalue (){
			return (lebar * tinggi / 2);
		}
};

class persegi: public bangundatar{
	public :
		int getvalue (){
			return (lebar * lebar); 
		}
};

int main(){
	persegipanjang pp;
	int a,b;
	
	segitiga sg;
	int c,d;
	
	persegi ps;
	int e,f;
	
	
	cout << "Masukan Panjang Persegi Panjang : ";
	cin >> a;
	cout << "Masukan Lebar Persegi Panjang : ";
	cin >> b;
	cout << "Masukan Alas Segitiga : ";
	cin >> c;
	cout << "Masukan Tinggi Segitiga : ";
	cin >> d;
	cout << "Masukan sisi Persegi : ";
	cin >> e;
	
	
	pp.setvalue(a,b);
	sg.setvalue(c,d);
	ps.setvalue(e,NULL);
	
	cout << endl;
	cout << endl;
	
	//mendapatkan nilai kembali
	cout << "Luas Bangun datar :" << endl;
	cout << "Luas Persegi Panjang : " << pp.getvalue() << endl;
	cout << "Luas Segitiga :  "<< sg.getvalue() << endl;
	cout << "Luas Persegi : "<< ps.getvalue();
	
	return 0;
}
