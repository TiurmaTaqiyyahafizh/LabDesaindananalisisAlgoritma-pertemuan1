#include <iostream>
#include <cstring>
using namespace std;

const int n=100;
int dist[n] [n];
void floydWarshall(int n){
	for (int k=0; k<n;k++){
		for (int i = 0; i<n;i++){
			for (int j=0;j<n;j++){
				if (dist[i][k] + dist[k][j]<dist[i][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
}

int  main(){
	int N;
	cout << "masukan jumlah node pada graph: ";
	cin>>N;
	
	memset(dist, 0x3f, sizeof dist);
	for  (int i=0; i<n; i++){
		dist[i][i] =0;
	}
	
	cout << "masukan jarak antar node: ";
	cin >>n;
	
	for (int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			int w;
			cin >> w;
			dist[i][j]=w;
		}
	}
	
	floydWarshall(n);
	cout << "hasil jalur terpendek antar node: "<< endl;
	for (int i=0; i<n;i++){
		for(int j =0;j<n;j++){
			cout << dist[i][j]<< " ";
		}
		cout <<endl;
	}
	return 0;
}
