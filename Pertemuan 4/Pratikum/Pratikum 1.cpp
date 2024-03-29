#include <iostream>
#include <string>

using namespace std;
class biodata{
	private :
		int umur_;
		string nama_;
		string alamat_;
	
	public :
		biodata (string nama, int umur, string alamat)
		:nama_(nama), umur_(umur), alamat_(alamat)  {
			cout << "constructor mahasiswa"<< endl;
			cout << endl;
		}
	
	~biodata(){
	}
	
	void tampilkanbiodata(){
		cout << "nama :"<< nama_ <<endl;
		cout << "umur :"<< umur_ <<endl;
		cout << "alamat :"<< alamat_<<endl;
	}
	
};

int main (){
string a,c;
int b;

cout << "Masukan nama anda :";
getline (cin >> ws, a);
cout << "Masukan umur anda :";
cin >>b;
cout << "Masukan alamat anda :";
getline (cin >> ws, c);

cout << endl;

	{
		biodata bdt(a,b,c);
		bdt.tampilkanbiodata();
	}
	
	return 0;
}
