#include <iostream>
using namespace std;

class data{
	private:
		int usia[100];
		double ipk[100];
		string nama[100];
		
	public:
		data(int a[], string b[], double c[], int j){
			for (int m = 0; m < j; m++){
				usia [m]= a[m];
				nama [m]= b[m];
				ipk [m]= c[m];
			}
		}
		
		void setnama(string b[], int j){
			for (int m = 0; m < j; m++){
				nama [m]= b[m];
			};
		}
		
		void setusia(int a[], int j){
			for (int m = 0; m < j; m++){
				usia [m]= a[m];
			};
		}
		
		void setipk(double c[], int j){
			for (int m = 0; m < j; m++){
				ipk [m]= c[m];
			};
		}
		
		
		string getnama(int i){
			return nama[i];
		}
		
		double getipk(int i){
			return ipk[i];
		}
		
		int getusia(int i){
			return usia[i];
		}
		
};



int main(){
	int usia[100],a;
	double ipk[100],c;
	string nama[100],b;

	cout<<"Masukan jumlah mahasiswa :";
	cin>>a;
	
	for(int i=0;i<a;i++){
		cout<<"Mahasiswa ke "<<i+1<<endl
			<<"Nama: ";
		getline(cin>>ws, b);
		cout<<"Usia: ";
		cin>>usia [i];
		cout<<"IPK: ";
		cin>>ipk[i];
		nama [i]=b;
	}
		
	
	data mahasiswa(usia, nama, ipk, a);
	
	for(int j = 0; j < a; j++){
		cout <<"\nData Mahasiswa ke-"<<j+1<<" : "<<endl
			 << "Nama: " << mahasiswa.getnama(j)<<endl
			 << "Usia: " << mahasiswa.getusia(j)<<endl
			 << "IPK:  " << mahasiswa.getipk(j)<<endl;
	}
	
	
	

}
