#include <bits/stdc++.h>
using namespace std;


void bfs(int start, vector<vector<int>>& graph, int n) {
    vector<int> vis(n,0);
    queue<int> qu;

    qu.push(start);
    vis[start] = 1;

    while (!qu.empty()) {
        int node = qu.front();
        qu.pop();

        cout << node << " ";

        for (auto& neigh : graph[node]) {
            if (!vis[neigh]) {
                vis[neigh] = 1;
                qu.push(neigh);
            }
        }
    }

}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
}