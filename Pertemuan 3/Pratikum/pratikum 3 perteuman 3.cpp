#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
	private:
		string nama;
		int npm;
		
		public:
			void setnama(string n){
				nama =n;
			}
			
			void setnpm (int s) {
				npm = s;
			}
			
			string getnama(){
				return nama;
			}
			
			int getsnpm(){
				return npm;
			}
	
};

int main (){
	int b;
	string a;
	
	cout << "masukan nama anda :";
	getline(cin,a);
	cout << endl;
	
	cout << "masukan NPM anda :";
	cin >> b;
Mahasiswa Mahasiswa;
Mahasiswa.setnama(a);
Mahasiswa.setnpm(b); 

	
cout << endl;
cout << "data mahasiswa"<<endl;
cout << "nama : " << Mahasiswa.getnama() << endl;
cout << "npm : " << Mahasiswa.getsnpm() << endl;

return 0;  
}
