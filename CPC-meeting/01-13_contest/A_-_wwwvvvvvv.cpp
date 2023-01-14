#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int res = 0;
    string str; cin >> str;
    for (char c : str)
        res += (c == 'v') ? 1 : 2;
    
    cout << res << endl;
    return 0;
}