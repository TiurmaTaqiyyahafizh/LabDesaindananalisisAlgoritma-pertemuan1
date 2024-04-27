#include <iostream>
#include <algorithm>

using namespace std;

const int n=100;
int nim[n];

//fungsi untuk melakukan binary serach
int binarysearch (int x, int l, int r){
	if (r>=l){
		int mid = l + (r+l)/2;
		if (nim[mid] == x)
		return mid;
		if (nim[mid]>x)
		return binarysearch (x,l,mid - 1);
		return binarysearch (x,mid + 1,r);
	}
	
	return -1;
}


int main(){
	int n;
	cout << "masukan jumlah mahasiswa =";
    cin >> n;
    
    cout << "masukan NIM mahasiswa = "<<endl;
    
    for (int i=0; i<n; i++){
    	cin >> nim[i];
	}
	
	//mengurutkan nim mahasiswa
	sort(nim,nim+n);
	
	int x;
	cout << "masukan nim yang di cari = ";
	cin >>x;
	
	int hasil = binarysearch (x,0,n-1);
	if (hasil == -1){
		cout << "nim tidak di temukan"<<endl;;
	}else{
		cout << "nim di temukan pada indeks "<<hasil<<endl;
	}
	
	return 0;
	
}
