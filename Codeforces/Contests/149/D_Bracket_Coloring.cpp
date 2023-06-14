#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    stack<char> st;

    int cnt = 0;
    for (char c : str)
        cnt += (c == '(');
    if (n % 2 || cnt != n - cnt){
        cout << -1 << endl;
        return;
    }

    // assume num'(' == num')'
    for (int i = 0; i < n; i++){
        
    }


}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}