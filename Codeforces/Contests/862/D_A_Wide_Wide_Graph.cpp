#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }

    return 0;
}