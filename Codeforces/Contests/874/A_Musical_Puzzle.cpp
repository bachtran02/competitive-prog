#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    set<string> st;

    for (int i = 0; i < n - 1; i++){
        string t;
        t += s[i];
        t += s[i + 1];
        st.insert(t);
    }

    cout << st.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}