#include <iostream>
#include <string>//menambah library
using namespace std;

class Silsilah {
	protected:
	string orangtua = "Albert Wijaya dan Jenny Lim";
	string anakanak = "Agatha wijaya dan Jonathan Wijaya";
	
	public:
		string cekSilsilah() {
			// mengubah teks statis menjadi teks yang mengekstrak nama orang tua dari variabel yang sudah ada
			return "ayah bernama" + orangtua.substr(0,orangtua.find(" ") )+
			"dan ibu bernama " + orangtua.substr(orangtua.find(" ")+4 );  
		}
};

class Cucu : public Silsilah{
	protected:
		string Cucu = " Wilbert Tan dan Rayanza Wijaya";
		
		public :
			string cekAnak(){
				// Mengubah teks statis menjadi teks yang mengekstrak nama anakanak dari variabel yang sudah ada
				return "anak pertama keluarga wijaya adalah " + anakanak.substr(0, anakanak.find(" ") )+
				"dan cucu kedua bernama "+ anakanak.substr(Cucu.find(" ")+4); 
			}
};

int main() {
	Anak SilsilahWijaya;
	
	//output hasil dari metode metode dalam kelas anak
	cout << SilsilahWijaya.lihatSilsilahnya() << endl;
	cout << SilsilahWijaya.cekSilsilah() << endl;
	cout << SilsilahWijaya.cekAnak() << endl;
	cout << SilsilahWijaya.cekCucu() << endl;
	
	return 0;
}
