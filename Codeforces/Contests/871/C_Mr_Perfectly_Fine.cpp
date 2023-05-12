#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<pair<int, string>> arr(n);

    for (auto &i : arr)
        cin >> i.first >> i.second;

    sort(arr.begin(), arr.end());

    int res = 0;
    bool f1 = false, f2 = false, f3 = false;
    
    for (auto i : arr){
        if (!f1 && i.second == "10"){
            f1 = true;
            res += i.first;
        }
        if (!f2 && i.second == "01"){
            f2 = true;
            res += i.first;
        }
        if (i.second == "11"){
            f3 = true;
            res = (f1 && f2) ? min(res, i.first) : i.first;
            break;
        }        
    }

    if ((f1 && f2) || f3)
        cout << res << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}