#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll findComb(ll n){
    return (n) * (n - 1) / 2;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<ll> arr;
    unordered_map<ll, ll> m;

    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        m[x]++;
        arr.push_back(x);
    }

    ll t = 0;
    for (auto i : m)
        t += findComb(i.second);
    
    for (auto i : arr){
        cout << t - (m[i] - 1) << endl;
    }

    return 0;
}