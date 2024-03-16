/*
#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
	int i,j,tmp;
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
			if (arr[j]>arr [j+1]) {
				tmp = arr [j];
				arr[j] = arr [j+1];
				arr [j+1] = tmp;
			}
		}
	}
}

int main (){
	int array[100], n,i,j;
	cout << "masukan banyak elemen : ";
	cin >> n;
	cout << "masukan niali: \n";
	for (i=0; i<n;i++){
		cin >> array[i];
	}
	bubblesort(array, n);
	cout << "hasil pengurutan dengan algoritma bubble sort:\n";
	for (i=0; i<n;i++){
		cout << array[i]<<" ";
	}
	cout << "\n";
	return 0;
}

*/
/*
#include <iostream>
#include <conio.h>
using namespace std;
    int data[10], data2[10];
    int n;
    
int tukar (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
}

int input(){
    	cout << "masukan banyak elemen : ";
	cin >> n;
	cout << "masukan nilai: \n";
cout<<endl;
    
    for (int i=0;i<n;i++){
    	cout<<"Masukan Data = ";
    	cin>>n;
    	
	}
	cout<<endl;	
}

int tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<n<<"] ";
	}
	cout<<endl;
}

int bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}


int main()
  {
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	input();
	cout<<"Proses Bubble Sort"<<endl;
	tampil();
	bubble_sort();
  getch();
  }



/*
#include <iostream>
#include <conio.h>
int input(){
		int array[100], n,i,j;
	cout << "masukan banyak elemen : ";
	cin >> n;
	cout << "masukan nilai: \n";
	for (i=0; i<n;i++){
		cin >> array[i];
	}
}

int tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<n<<"] ";
	}
	cout<<endl;
}

int bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}
	
int main()
  {
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	input();
	cout<<"Proses Bubble Sort"<<endl;
	tampil();
	bubble_sort();
  getch();
  }
  */
/*#include <iostream>
using namespace std;
int data[10];
int n;
 
void tampil()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << data[i] << "] ";
    }
    cout << endl;
}
 
int main()
{
    cout << "ALGORITMA BUBBLE SORT" << endl;
    cout << "----------------------" << endl;
 

	cout << "Masukan Jumlah Data = ";
	cin >> n;
 
    cout << std::endl;
 
    // Input data
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Data Ke-" << i + 1 << " = ";
        cin >> data[i];
    }
 
    cout << endl;
    cout << "Proses Bubble Sort" << endl;
 
    tampil();
 
    for (int i = 1; i < n; i++)
    {
        
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
            {
                int t;
                t = data[j - 1];
                data[j - 1] = data[j];
                data[j] = t;
            }
        }
        tampil();
    }
    cout << std::endl;
    return 0;
}
*/

//HELENA

#include<iostream>
using namespace std;
int main()
{
    int i, arr[3], j, temp;
    cout<<"x : ";
    for(i=0; i<4; i++) {
        cin>>arr[i];
}
    for(i=0; i<4; i++)
    {
        for(j=0; j<(4-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"Tahap "<<i+1<<": ";
        for(j=0; j<4; j++) {
		
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
    cout << "\n Result : "; 
    for(j=0; j<4; j++) {
    	 cout<<arr[j]<<" ";
	}
	
    cout<<endl;
    return 0;
}

 

	
