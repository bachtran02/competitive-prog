#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e9 + 5;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int res = -1, cnt = 0, n; cin >> n;    
    ll cur, prev = MAX;
    for (int i = 0; i < n; i++){
        ll cur; cin >> cur;
        if (cur > prev){
            res = max(res, cnt);
            cnt = 0;
        }
        prev = cur;
        cnt++;
    }

    res = max(res, cnt);
    cout << --res << endl;
    return 0;
}