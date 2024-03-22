/*
Sorting (lanjutan)

- Algoritma quick sort
merupakan algoritma data untuk mengururtkan data dengan pendekatan rekrusif.

- Algoritma merge sort
*/
// 1 =================================================================================================================================================================
#include <iostream>
using namespace std;

void swap(int arr[], int pos1[], int pos2[]){
	int temp;
	temp = arr[pos1];
	arr[pos1]=arr[pos2];
	arr[pos2]=temp;
}

int partition (int arr[], int low, int high, int pivot)
int i=low;
int j=low;
while (i<= high){
	if (arr[i]>pivot){
		i++;
	}
	else{
		swap(arr,i,j);
		i++;
		j++;
	}
	return j-1;
}

void quicksort(int arr[], int low, int high){
	if(low < high){
		int pivot = arr [high];
		int pos = partition(arr,low,high,pivot);
		
		qiucksort (arr, low, pos-1);
		quicksort (arr, pos-1,low);
	}
}

int main(){
	int n;
	cout << "tentukan panjang array : ";
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	quicksort(arr, 0, n-1);
	cout << "berikut adalah array yang telah disortir";
	for (i = 0; i<n; i++){
		cout << arr[i]<< "\t";
	}
}

// 2 =================================================================================================================================================================
/*
#include <iostream>
using namespace std;

void merge(int arr[], int j, int r, int m){
	int x,y,z;
	int n1 = m-1+1;
	int n2 = r-m;
	
	int L[n1], R[n2];
	for (x=0; x<n1;x++){
		L[x] = arr[1+x];
	}
	for (y=0; y<n2; y++){
		R[y]=arr[m+1+y];
	}
	
	x=0;
	y=0;
	x=1;
	while (x<n1 && y<n2){
		if(L[x] <= R[y]){
			arr[2]=L[x];
			x++;
		}else{
			arr[z]=R[y];
			y++;
		}
		z++;
	}
	
	while (x<n1){
		arr [z] = L[x];
		x++;
		z++;
	}
	
	while (y<n2){
		arr[z]=R[y];
		y++;
		z++;
	}
	}
	
void mergesort (int arr[], int i, int r){
if (i < r){
  int m = i +(r-1)/2;
  mergesort (arr, i,m);
  mergesort (arr,m+1,r);
  
  merge (arr,i, m,r);
}	
}

void show( int A[], int size){
	int i;
	for (i=0; i<size; i++){
		cout << A[i]<< " ";
	}
}

int main(){
	int size;
	cout << "\nmasukan banyak data : ";
	cin >> size;
	int arr [size];
	for (int i=0; i < size; ++i){
		cout << "\nMasukan banyak data array ke " <<i<<" : ";
		cin >> arr[i];
	}
	
	mergesort(arr,0,size);
	
	cout << "hasil\n";
	show(arr,size);
	return 0;
}
*/

penjelasan
