#include <bits/stdc++.h>
using namespace std;
int INF = 1e19;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int source;
    cin >> source;

    vector<long long> dist(n + 1, INF);
    dist[source] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();

        if (d > dist[node]) continue;

        for (auto &it : graph[node]) {
            int next = it.first;
            long long wt = it.second;
            if (dist[node] + wt < dist[next]) {
                dist[next] = dist[node] + wt;
                pq.push({dist[next], next});
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(dist[i] == INF) cout << "INF ";
        else cout << dist[i] << " ";
    }

}
