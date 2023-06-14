#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    int res = -1, cnt = 1;
    
    for (int i = 1; i < n; i++){
        if (str[i - 1] == str[i])
            cnt++;
        else{
            res = max(res, cnt);
            cnt = 1;
        }
    }
    cout << max(res, cnt) + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}