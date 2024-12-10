#include <iostream>
#include <queue>
using namespace std;

virtual void Graph::BFS(int v)
{
    visited = new bool[n];
    fill(visited, visited + n, false);
    visited[v] = true;
    queue<int> q;
    q.Push(v) while (!q.IsEmpty())
    {
        v = q.Front();
        q.Pop();
        for (all vertices w adjacent to v)
            if (!visited[w])
            {
                q.Push(w);
                visited[w] = true;
            }
    }
    delete[] visited;
}

int main()
{

    return 0;
}