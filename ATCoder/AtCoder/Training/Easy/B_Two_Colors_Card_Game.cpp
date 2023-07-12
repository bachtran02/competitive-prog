#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    map<string, int> mp;

    cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        string s; cin >> s;
        if (mp[s])
            mp[s]--;
    }

    int res = 0;
    for (auto i : mp){
        res += i.second;
    }
    cout << res << endl;
}