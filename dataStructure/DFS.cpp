#include <iostream>
using namespace std;

virtual void Graph::DFS()
{
    visited = new bool[n];
    fill(visited, visited + n, false);
    DFS(0);
    delete[] visited;
}

virtual void Graph::DFS(const int v)
{
    visited[v] = true;
    for (each vertex w adjacent to v)
        if (!visited[w])
            DFS(w);
}

int main()
{

    return 0;
}