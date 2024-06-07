#include <iostream>
#include <vector>
using namespace std;

class Graph {
    private:
        int vertices;
        vector<vector<int> > adjMatrix;

    public:
        Graph(int v) {
            vertices = v;
            adjMatrix.resize(vertices, vector<int>(vertices, 0));
        }
        
        void addEdge(int u, int v, int weight) {
            if (u >= 0 && u < vertices && v >= 0 && v < vertices) {
                adjMatrix[u][v] = weight;
            } else {
                cout << "Invalid edge" << endl;
            }
        }
        
        void removeEdge(int u, int v) {
            if (u >= 0 && u < vertices && v >= 0 && v < vertices) {
                adjMatrix[u][v] = 0;
                adjMatrix[v][u] = 0;
            } else {
                cout << "Invalid edge" << endl;
            }
        }
        
        void display() {
            for (int i = 0; i < vertices; i++) {
                cout << "Vertex " << i << ":";
                for (int j = 0; j < vertices; j++) {
                    if (adjMatrix[i][j] != 0) {
                        cout << " -> (" << j << ", " << adjMatrix[i][j] << ")";
                    }
                }
                cout << endl;
            }
        }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 4, 20);
    graph.addEdge(1, 2, 30);
    graph.addEdge(1, 3, 40);
    graph.addEdge(1, 4, 50);
    graph.addEdge(2, 3, 60);
    graph.addEdge(3, 4, 70);
    
    cout << "Adjacency List:" << endl;
    graph.display();
    
    return 0;
}

