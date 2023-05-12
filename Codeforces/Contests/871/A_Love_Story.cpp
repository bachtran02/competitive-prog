#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

string str = "codeforces";

void solve(){
    int res = 0;
    string t; cin >> t;
    
    for (int i = 0; i < t.size(); i++)
        res += (str[i] != t[i]);
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}