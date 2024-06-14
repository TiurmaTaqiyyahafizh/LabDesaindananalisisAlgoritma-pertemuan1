#include <iostream>
#include <vector>
#include <queue>

#define M 1000

using namespace std;

const int N=5;

void dijkstra(int graph[N][N],int source, int destnation){
	vector<pair<int,int> >adj[N];
	for (int i = 0; i<N;i++){
		for (int j; j<N; j++){
			if (graph[i][j] !=M){
				adj[i].push_back(make_pair(graph[i][j]));
			}
		}
	}
	
}
