#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjacencyList;

    Graph(int v) : vertices(v), adjacencyList(v) {}

    void addEdge(int from, int to) {
        adjacencyList[from].push_back(to);
        adjacencyList[to].push_back(from);
    }

    void bfs(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> bfsQueue;

        visited[startVertex] = true;
        bfsQueue.push(startVertex);

        while (!bfsQueue.empty()) {
            int currentVertex = bfsQueue.front();
            cout << currentVertex << " ";
            bfsQueue.pop();

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    bfsQueue.push(neighbor);
                }
            }
        }
    }
};

int main() {
    Graph graph(6);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    cout << "BFS starting from vertex 0: ";
    graph.bfs(0);

    return 0;
}