#include <iostream>
#include <string.h>
using namespace std;

class kendaraan {
protected:
    string merk;
    int tahunprod;
public:
    kendaraan(string brand, int tahun) 
        : merk(brand), tahunprod(tahun) {
    }
    
    void info(){
    	cout<<"Merek Mobil: "<<merk<<",\t";
    	cout<<"Tahun Produkasi: "<<tahunprod<<",\t";
	}

};

class track : public kendaraan {
protected:
    int pintu;
public:
    track(string merk, int tahunprod, int pintu_)
        : kendaraan(merk, tahunprod), pintu(pintu_) {
    }

    void info (){
    	kendaraan::info();
        cout << "Jumlah Pintu: " << pintu << endl;
    }
};

int main(){
	string merk;
	int pin, tater;
	
	cout<<"Input Data Mobil: "<<endl
		<<"Brand Mobil: ";
	cin>>merk;
	cout<<"Tahun Produksi: ";
	cin>>tater;
	cout<<"Jumlah Pintu: ";
	cin>>pin;
	
	cout<<endl<<endl;
	
	track mobil(merk, tater, pin);
	
	cout<<"\nInformasi Mobil: "<<endl;
	mobil.info();
	
}
