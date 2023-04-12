#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<multiset<int>> adj(n);
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[--a].insert(--b);
        adj[b].insert(a);
    }

    for (auto i : adj){
        cout << i.size() << endl;
    }

    return 0;
}