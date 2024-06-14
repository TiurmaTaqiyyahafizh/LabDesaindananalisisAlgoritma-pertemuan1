#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Definisi pasangan (pair) untuk menyimpan (simpul, berat)
typedef pair<int, int> pii;

// Fungsi untuk menambahkan edge ke graf
void addEdge(vector<vector<pii> >& adj, int u, int v, int weight) {
    adj[u].push_back(make_pair(v, weight));
    adj[v].push_back(make_pair(u, weight)); // Jika graf tidak berarah
}

// Fungsi untuk menjalankan algoritma Dijkstra
void dijkstra(const vector<vector<pii> >& adj, int source) {
    int V = adj.size();
    vector<int> dist(V, INT_MAX); // Jarak terpendek dari sumber ke simpul lain
    priority_queue<pii, vector<pii>, greater<pii> > pq; // Min-heap priority queue

    // Inisialisasi sumber
    pq.push(make_pair(0, source));
    dist[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        // Iterasi melalui semua tetangga dari simpul u
        for (const auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // Jika ada jalur yang lebih pendek ke v melalui u
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Output jarak terpendek dari sumber ke semua simpul lain
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; ++i) {
        cout << i << " \t\t " << dist[i] << endl;
    }
}

int main() {
    int V = 9; // Jumlah simpul dalam graf
    vector<vector<pii>> adj(V);

    // Menambahkan edge ke graf (u, v, berat)
    addEdge(adj, 0, 1, 4);
    addEdge(adj, 0, 7, 8);
    addEdge(adj, 1, 2, 8);
    addEdge(adj, 1, 7, 11);
    addEdge(adj, 2, 3, 7);
    addEdge(adj, 2, 8, 2);
    addEdge(adj, 2, 5, 4);
    addEdge(adj, 3, 4, 9);
    addEdge(adj, 3, 5, 14);
    addEdge(adj, 4, 5, 10);
    addEdge(adj, 5, 6, 2);
    addEdge(adj, 6, 7, 1);
    addEdge(adj, 6, 8, 6);
    addEdge(adj, 7, 8, 7);

    int source = 0;
    dijkstra(adj, source);

    return 0;
}
