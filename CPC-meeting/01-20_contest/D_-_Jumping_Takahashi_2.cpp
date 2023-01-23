#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pi;

int n;
vector<ll> dist;
vector<ll> path;
vector<vector<pi>> adj;  // first is node, second is cost

const ll INF = INT64_MAX;

void dijkstra(int s){
    dist.assign(n, INF);
    path.assign(n, -1);

    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, s});
    dist[s] = 0;
    
    while (!pq.empty()){
        pi tmp = pq.top(); pq.pop();
        ll u = tmp.second;

        if (tmp.first != dist[u]) continue;
        for (int i = 0; i < adj[u].size(); i++){
            ll v = adj[u][i].first;
            ll w = adj[u][i].second;

            if (dist[v] > max(dist[u], w)){
                dist[v] = max(dist[u], w);
                path[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin >> n;
    vector<pair<pi, ll>> arr(n);
    adj.resize(n);

    for (auto &i : arr){
        cin >> i.first.first >> i.first.second;
        cin >> i.second;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j)
                continue;
            ll s = ceil((abs(arr[i].first.first - arr[j].first.first) 
                + abs(arr[i].first.second - arr[j].first.second))
                / double(arr[i].second));
            adj[i].push_back({j, s});
        }
    }

    ll res = INF;
    for (int i = 0; i < n; i++){
        ll t = 0;
        dijkstra(i);
        for (int i = 0; i < n; i++){
            t = max(t, dist[i]);
        }
        res = min(res, t);
    }

    cout << res << endl;
    return 0;
}