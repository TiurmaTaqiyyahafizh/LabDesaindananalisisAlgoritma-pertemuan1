#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

void dijkstra(int src, vector<vector<pii>>& adj, int V) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dist(V, INT_MAX);
    
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Node\tDistance from Source" << endl;
    for (int i = 0; i < V; ++i)
        cout << i << "\t\t" << dist[i] << endl;
}

int main() {
    int V = 7;  // Jumlah node dalam graf
    vector<vector<pii>> adj(V);

    // Menambahkan edge ke dalam graf dengan bobot yang benar
    adj[1].push_back({2, 7});
    adj[1].push_back({3, 9});
    adj[1].push_back({6, 14});
    adj[2].push_back({3, 10});
    adj[2].push_back({4, 15});
    adj[3].push_back({4, 11});
    adj[3].push_back({6, 2});
    adj[4].push_back({5, 6});
    adj[6].push_back({5, 9});

    int src = 1;  // Node sumber
    dijkstra(src, adj, V);

    return 0;
}

