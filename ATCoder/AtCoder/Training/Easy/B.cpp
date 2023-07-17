#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string o, e; cin >> o >> e;
    for (int i = 0; i < e.size(); i++){
        cout << o[i] << e[i];
    }
    if (o.size() > e.size())
        cout << o[o.size()-1];
}