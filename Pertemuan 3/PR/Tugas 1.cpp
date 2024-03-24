#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
	private:
		string nama;
		int npm;
		
	public:
		
	void setNama(string a){
		nama = a;
	}
		
	void setNpm(int b){
		npm = b;
	}
	
	string getNama(){
		return nama;
	}
	
	int getNpm(){
		return npm;
	}
};

int main(){
	Mahasiswa data[5];
	int i;
	
	for (i = 0; i < 5; i++){
	string Nama;
	int Npm;
	
	cout << "Masukan nama mahasiswa " << i + 1 << ": ";
	getline (cin >> ws, Nama);
	cout << "Masukan NPM mahasiswa " << i + 1 << ": ";
	cin >> Npm;
	
	data[i].setNama(Nama);
	data[i].setNpm(Npm);
	}

	for (i = 0; i < 5; i++){
	cout << "Data Mahasiswa " << i + 1 << ":" << endl;
	cout << "Nama: " << data[i].getNama() << endl;
	cout << "NPM: " << data[i].getNpm() << endl;
	}
	return 0;
}
