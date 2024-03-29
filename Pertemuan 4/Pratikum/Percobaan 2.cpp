#include <iostream>

using namespace std;
class laptop{
	private :
		string pemilik;
		string merk;
		
	public:
		laptop (string var1,string var2){
			pemilik = var1;
			merk = var2;
			
			cout << "paket laptop"<< merk << " milik " << pemilik<< "sudah di kirim" << endl;
		}
};

int main () {
	laptop laptopfadlan("fadlan","asus");
	laptop laptopRisma("Risma","Acer");
	laptop laptopCarlos("carlos","lenovo");
	
	return 0;
}
