
#include <bits/stdc++.h>
using namespace std;

bool validPath(int n, vector<vector<int>>& edges,
               int source, int destination) {
    vector<vector<int>> adj(n);

    for (auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);
    queue<int> q;

    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == destination)
            return true;

        for (int next : adj[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }

    return false;
}

int main() {
    vector<vector<int>> edges = {
        {0,1}, {1,2}, {2,0}
    };

    cout << boolalpha
         << validPath(3, edges, 0, 2);

    return 0;
}
