#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string str; cin >> str;
    ll res = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == 'U')
            res += (i * 2) + (str.size() - 1 - i);
        else
            res += i + 2 * (str.size() - 1 - i);
    }
    cout << res << endl;
}
