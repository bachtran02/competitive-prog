#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    string str; cin >> str;
    int n = str.size();
    char x = '0';

    for (char &c : str){
        if (c == '?')
            c = x;
        x = c;
    }
    cout << str << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}