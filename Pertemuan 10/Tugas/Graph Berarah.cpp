#include <iostream>
#include <vector>
using namespace std;

class Graph {
    private:
        int numNodes;
        vector<vector<int> > adjMatrix;

    public:
        Graph(int nodes) {
            numNodes = nodes;
            adjMatrix.resize(nodes, vector<int>(nodes, 0));
        }

        void addEdge(int from, int to) {
            if (from >= 0 && from < numNodes && to >= 0 && to < numNodes) {
                adjMatrix[from][to] = 1;
            } else {
                cout << "Invalid edge" << endl;
            }
        }

        void removeEdge(int from, int to) {
            if (from >= 0 && from < numNodes && to >= 0 && to < numNodes) {
                adjMatrix[from][to] = 0;
            } else {
                cout << "Invalid edge" << endl;
            }
        }

        void display() {
            for (int i = 0; i < numNodes; i++) {
                cout << "Node " << i << " :";
                for (int j = 0; j < numNodes; j++) {
                    if (adjMatrix[i][j] == 1) {
                        cout << " -> " << j;
                    }
                }
                cout << endl;
            }
        }
};

int main() {
    int numNodes = 5;
    Graph g(numNodes);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List: " << endl;
    g.display();

    return 0;
}

