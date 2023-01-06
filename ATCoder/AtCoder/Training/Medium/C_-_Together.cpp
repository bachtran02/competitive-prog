#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int res = 0;
    int n; cin >> n;
    map<int, int> m;
    
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }

    for (auto i : m){
        int cnt = i.second, cur_k = i.first;
        cnt += (m.count(cur_k - 1))? m[cur_k - 1] : 0;
        cnt += (m.count(cur_k + 1))? m[cur_k + 1] : 0;
        
        res = max(res, cnt);
    }

    cout << res << endl;
    return 0;
}