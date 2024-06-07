#include <iostream>
#include <vector>
using namespace std;

class Graph{
    private:
        int numVertices;
        vector<vector<int> > adjacencyMatrix;
    public:
        Graph(int vertices){
            numVertices = vertices;
            for(int i = 0; i < vertices; ++i){
                vector<int> row(vertices, 0);
                adjacencyMatrix.push_back(row);
            }
        }
        
    // Menambahkan sisi antara dua simpul u dan v
    void addEdge(int u, int v){
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices){
            adjacencyMatrix[u][v] = 1;
            adjacencyMatrix[v][u] = 1;
        } else {
            cout << "Invalid edge" << endl;
        }
    }
    
    // Menghapus sisi antara dua simpul u dan v
    void removeEdge(int u, int v){
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices){
            adjacencyMatrix[u][v] = 0;
            adjacencyMatrix[v][u] = 0;
        } else {
            cout << "Invalid edge" << endl;
        }
    }
    
    // Menampilkan daftar ketetanggaan dari graf
    void display(){
        for(int i = 0; i < numVertices; i++){
            cout << "Vertex " << i << " : ";
            for(int j = 0; j < numVertices; j++){
                if(adjacencyMatrix[i][j] == 1){
                    cout << " -> " << j;
                }
            } 
            cout << endl;
        }
    }
};

int main(){
    int vertices = 5;
    Graph graph(vertices);
    
    
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    
    cout << "Adjacency List: " << endl;
    graph.display();
    
    return 0;
}

