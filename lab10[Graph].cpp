#include <fstream>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class DirectedUnweightedGraph
{
private:
    int numberOfVertices;
    vector<vector<int>> adjacencyList;
    void DFSRec(int vertex, vector<bool>& visited);

public:
    DirectedUnweightedGraph(int count);
    void addEdge(int source, int destination);
    void BFS();
    void DFS();
};

DirectedUnweightedGraph::DirectedUnweightedGraph(int count)
{
    numberOfVertices = count;
    adjacencyList.resize(count);
}

void DirectedUnweightedGraph::addEdge(int source, int destination)
{
    if (source >= 0 && source < numberOfVertices && destination >= 0 && destination < numberOfVertices)
    {
        adjacencyList[source].push_back(destination);
    }
}

void DirectedUnweightedGraph::BFS()
{
    vector<bool> visited(numberOfVertices, false);
    queue<int> queue;

    visited[0] = true;  // Mark the starting vertex as visited
    queue.push(0);  // Enqueue the starting vertex

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        queue.pop();
        cout << currentVertex << " ";

        // Visit all adjacent vertices of the current vertex
        for (int adjacentVertex : adjacencyList[currentVertex])
        {
            if (!visited[adjacentVertex])
            {
                visited[adjacentVertex] = true;
                queue.push(adjacentVertex);
            }
        }
    }
}

void DirectedUnweightedGraph::DFSRec(int vertex, vector<bool>& visited)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int adjacentVertex : adjacencyList[vertex])
    {
        if (!visited[adjacentVertex])
        {
            DFSRec(adjacentVertex, visited);
        }
    }
}

void DirectedUnweightedGraph::DFS()
{
    vector<bool> visited(numberOfVertices, false);

    for (int i = 0; i < numberOfVertices; ++i)
    {
        if (!visited[i])
        {
            DFSRec(i, visited);
        }
    }
}

int main() {
    cout << "Graph 1:" << endl;
    DirectedUnweightedGraph graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 3);
    graph.addEdge(4, 5);
    cout << "BFS: ";
    graph.BFS();
    cout << endl;
    cout << "DFS: ";
    graph.DFS();
    cout << endl;

    cout << "Graph 2:" << endl;
    DirectedUnweightedGraph graph2(7);
    graph2.addEdge(0, 1);
    graph2.addEdge(0, 2);
    graph2.addEdge(1, 2);
    graph2.addEdge(1, 3);
    graph2.addEdge(1, 4);
    graph2.addEdge(2, 4);
    graph2.addEdge(3, 5);
    graph2.addEdge(4, 3);
    graph2.addEdge(4, 5);
    graph2.addEdge(6, 0);
    cout << "BFS: ";
    graph2.BFS();
    cout << endl;
    cout << "DFS: ";
    graph2.DFS();
    cout << endl;

    cout << "Graph 3 (Pacman Map):" << endl;
    DirectedUnweightedGraph graph3(8);
    ifstream inputFile("pacman_map.txt");

    if (inputFile.is_open())
    {
        int source, destination;
        while (inputFile >> source >> destination)
        {
            graph3.addEdge(source, destination);
        }
        inputFile.close();

        cout << "BFS: ";
        graph3.BFS();
        cout << endl;
        cout << "DFS: ";
        graph3.DFS();
        cout << endl;
    }
    else
    {
        cout << "Failed to open the input file." << endl;
    }

    return 0;
}
