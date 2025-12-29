#include <bits/stdc++.h>
using namespace std;

void dfs(int start, vector<vector<int>>graph, int n, vector<int>& vis) {
    vis[start] = true;
    cout << start << " ";

    for (int neigh : graph[start]) {
        if (!vis[neigh])dfs(neigh, graph, n, vis);
    }
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n , m;
    cin >> n >> m;

    vector<vector<int>>graph;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> vis(n, false);


}