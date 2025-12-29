#include <bits/stdc++.h>
using namespace std;


struct Edge {
    int u, v, w;
};


int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (auto &e : edges) cin >> e.u >> e.v, e.w;

    int src;
    cin >> src;

    const long long INF = 1e18;
    vector<long long> dist(n, INF);
    dist[src] = 0;


    // Relax edges n-1 times
    for (int i = 0; i < n - 1; i++) {
        for (auto &e : edges) {
            if (dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]) {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    // Check negative cycle
    bool negCycle = false;
    for (auto &e : edges) {
        if (dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]) {
            negCycle = true;
            break;
        }
    }

    if (negCycle) cout << "Negative Weight Cycle Detected\n";
    else {
        for (int i = 0; i < n; i++)
            cout << "Distance to " << i << " = " << dist[i] << "\n";
    }
}
