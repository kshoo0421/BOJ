// 아직 안돌림
#include <bits/stdc++.h>
using namespace std;

vector<int> parent, rankV;

int find(int u) {
    if (parent[u] != u) parent[u] = find(parent[u]);
    return parent[u];
}

void unionSets(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);

    if (rootU != rootV) {
        if (rankV[rootU] > rankV[rootV]) parent[rootV] = rootU;
        else if (rankV[rootU] < rankV[rootV]) parent[rootU] = rootV;
        else {
            parent[rootV] = rootU;
            rankV[rootU]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int V, E, A, B, C;
    cin >> V >> E;
    
    vector<int> vi(3);
    vector<vector<int>> edges;
    for (int i = 0; i < E; i++) {
        cin >> vi[0] >> vi[1] >> vi[2];
        edges.push_back(vi);
    }

    // 간선을 가중치 순으로 정렬
    sort(edges.begin(), edges.end());

    parent.resize(V + 1);
    rankV.resize(V + 1, 0);
    for (int i = 1; i <= V; i++) {
        parent[i] = i;
    }

    int mst_weight = 0;
    for (auto ti : edges) {
        if (find(ti[0]) != find(ti[2])) {
            unionSets(ti[1], ti[2]);
            mst_weight += ti[0];
        }
    }

    cout << mst_weight;

    return 0;
}
