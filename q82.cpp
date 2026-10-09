
#include <bits/stdc++.h>
using namespace std;

void dfs(int city, vector<vector<int>>& graph,
         vector<bool>& visited) {
    visited[city] = true;

    for (int next = 0; next < graph.size(); next++) {
        if (graph[city][next] == 1 && !visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    vector<bool> visited(n, false);
    int provinces = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            provinces++;
            dfs(i, isConnected, visited);
        }
    }

    return provinces;
}

int main() {
    vector<vector<int>> graph = {
        {1,1,0},
        {1,1,0},
        {0,0,1}
    };

    cout << findCircleNum(graph);
    return 0;
}
