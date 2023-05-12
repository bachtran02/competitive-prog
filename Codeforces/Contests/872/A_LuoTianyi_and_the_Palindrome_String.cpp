#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    string str; cin >> str;

    for (int i = 1; i < str.size(); i++){
        if (str[i] != str[i-1]){
            cout << str.size() - 1 << endl;
            return;
        }
    }
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