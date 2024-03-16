#include <iostream>
using namespace std;
int x[10];
//int j =sizeof(x)/sizeof(*x) // untuk menegtahui jumlah array apabila sudah terdapat data di dalamnya (otomatis)
int n,b;
int temp, pos;
// temp = untuk menyimpan data yang mau di rolling

int main (){
	cout << "ALGORITMA SELECTION SORT" << endl;
    cout << "----------------------" <<  endl;
    
     cout << "Masukan Jumlah Element = ";
    cin >> n;
 
    cout << endl;
 
    // Input data
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Element Ke-" << i + 1 << " = ";
        cin >> x[i];
    }
    
    cout << endl;
    
    cout << "data sebelum sorting :";
    for (int i=0; i<n; i++){
    	cout << x[i] << " ";
	}
    cout << endl;
    cout << endl;
    //pengurutan data
    for(int i = 0;i < n-1; i++){
		int s = i;
		int q = x[i];
		for(int j = i+1; j < n; j++){
			if(x[j] > x[s]){
				s = j;
				q = x[j];
			}
		}
		if (s != i){
			q = x[i];
			x[i] = x[s];
			x[s] = q;
		}
		
		cout<<"Selection sort ke-"<<i<<" : ";
		for(int k = 0; k < n; k++){
			cout<<x[k]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nHasil sorting : ";
	for(int i = 0; i <n; i ++){
		cout<<x[i]<<" ";
	}
	
}




















