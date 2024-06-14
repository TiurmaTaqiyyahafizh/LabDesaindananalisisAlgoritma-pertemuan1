#include <iostream>
#include <vector>
#include <queue>
#include <limits> //untuk mendefinisikan nilai maksimum

using namespace std;

#define INF numeric_limits<int>::max() //didefinisikan sebagai nilai tak terhingga (nilai maksimum tipe int)

// Struktur untuk merepresentasikan edge
struct Edge { // merepresentasikan sisi dalam graf dengan menyimpan tujuan dan bobotnya.
    int to;
    int weight;
    Edge(int _to, int _weight) : to(_to), weight(_weight) {}
};

// Struktur untuk merepresentasikan node
struct Node { //merepresentasikan simpul dalam graf dengan menyimpan ID simpul dan jaraknya dari simpul awal dan memungkinkan penggunaan node dalam priority queue
    int id;
    int distance;
    Node(int _id, int _distance) : id(_id), distance(_distance) {}

    // Fungsi untuk membandingkan jarak dua node
    bool operator<(const Node& other) const {
        return distance > other.distance;
    }
};

// Algoritma Dijkstra
vector<int> dijkstra(const vector<vector<Edge> >& graph, int source) { //mengambil graf sebagai input dan mengembalikan vektor
//                                                                      yang berisi jarak terpendek dari simpul awal ke setiap simpul lain dalam graf.
    // Inisialisasi variabel dan struktur data
	int n = graph.size();
    vector<int> distance(n, INF);
    priority_queue<Node> pq;

// Mulai dari simpul awal, jaraknya adalah 0
    distance[source] = 0;
    pq.push(Node(source, 0));
// pengulangan sampai tidak ada simpul yang tersisa dalam priority queue
    while (!pq.empty()) {
        Node node = pq.top();
        pq.pop();

        int u = node.id;
        int dist = node.distance;

        if (dist > distance[u]) continue; // Skip jika node sudah diperiksa sebelumnya

//      pengulangan melalui semua sisi terhubung dari simpul u
        for (const Edge & edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;

            // Perbarui jarak jika ditemukan jarak yang lebih pendek
            if (distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push(Node(v, distance[v]));
            }
        }
    }

    return distance;
}

int main() {
    // Jumlah node dalam graph
    int numNodes = 6; // Inisialisasi graf dan jumlah simpul

    // Graph menggunakan adjacency list
    vector<vector<Edge>> graph(numNodes);

    // Menambahkan edge ke graph
    graph[0].push_back(Edge(1, 5));
    graph[0].push_back(Edge(2, 3));
    graph[1].push_back(Edge(3, 6));
    graph[1].push_back(Edge(4, 4));
    graph[2].push_back(Edge(3, 2));
    graph[2].push_back(Edge(4, 7));
    graph[3].push_back(Edge(5, 1));
    graph[4].push_back(Edge(5, 2));

    int source = 0; // Node awal

    // Memanggil Dijkstra untuk mencari jarak terpendek dari node awal ke setiap node lainnya
    vector<int> shortestDistances = dijkstra(graph, source);

    // Menampilkan jarak terpendek dari node awal ke setiap node lainnya
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < numNodes; ++i) {
        cout << "To node " << i << ": " << shortestDistances[i] << endl;
    }

    return 0;
}

