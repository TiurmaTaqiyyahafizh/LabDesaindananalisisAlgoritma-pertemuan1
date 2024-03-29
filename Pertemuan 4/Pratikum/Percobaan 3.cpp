#include <iostream>
#include <string>

using namespace std;

class mahasiswa {
	private :
    	string nama_;
    	int umur_;
	
	public :
		mahasiswa (string nama, int umur)
		:nama_(nama), umur_(umur) {
			cout << "constructor mahasiswa"<< endl;
		}
	~mahasiswa(){
		//cout << "==contoh destructor mahasiswa=="<<endl;
	}
	
	void tampilkanbiodata(){
		cout << "nama :"<< nama_ <<endl;
		cout << "umur :"<< umur_ <<endl;
	}
    
};


int main (){
	{
		mahasiswa mhs("katarina ",20);
		mhs.tampilkanbiodata();
	}
	
	return 0;
}

