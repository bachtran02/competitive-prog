#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    string str; cin >> str;

    int res = -1, cnt = 0;
    for (int i = 0; i < n; i++){
        while (i < n && str[i] == 'o'){
            cnt++;
            i++;
            res = max(cnt, res);
        }
        cnt = 0;
    }

    if (res == -1 || res == n)
        cout << -1 << endl;
    else
        cout << res << endl;
}