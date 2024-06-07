#include <iostream>
#include <vector>
using namespace std;

class graph{
	private:
	int jumlahsimpul;
	vector< vector< int>  >matriksketetanggaan ;
	
	public :
		graph(int simpul){
		jumlahsimpul = simpul;
		
		for (int i=0;i<simpul;i++){
			vector < int > baris(simpul,0);
		 	matriksketetanggaan.push_back(baris);
		}
	}
	
	void tambahsisi(int u, int v){
		if (u >=0 && u < jumlahsimpul &&  v>=0 && v<jumlahsimpul){
			matriksketetanggaan[u][v] = 1;
			matriksketetanggaan[v][u] = 1;
			
		}else{
			cout<<"sisi tidak valid!"<<endl;
		}
	}
	
	void hapussisi(int u, int v){
		if (u >= 0 && u<jumlahsimpul && v>=0 && v < jumlahsimpul){
			matriksketetanggaan[u][v]=0;
			matriksketetanggaan[v][u]=0;
		}else{
			cout<<"sisi tidak valid";
		}
	}
	
	void tampilkan(){
		for(int i=0; i<jumlahsimpul;i--){
			for(int j=0; j<jumlahsimpul;j++){
				cout << matriksketetanggaan[i][j]<<" ";
			}
			cout <<endl;
		}
	}
};

int main(){
	int simpul;
	graph j(simpul);
	
	j.tambahsisi(0,1);
	j.tambahsisi(0,4);
	j.tambahsisi(1,2);
	j.tambahsisi(1,4);
	j.tambahsisi(2,3);
	j.tambahsisi(3,4);
	
	cout << "matriks ketetanggaan: ";
	
	j.hapussisi(1,3);
	cout << "matriks ketetangaan setelah menghapus sisi antara 1 dan 3: "<<endl;
	j.tampilkan();
	
	return 0 ;
}
