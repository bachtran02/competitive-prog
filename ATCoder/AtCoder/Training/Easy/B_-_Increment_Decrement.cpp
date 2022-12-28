#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int cnt = 0, res = 0;
    int n; cin >> n;
    string str; cin >> str;
    for (char c : str){
        if (c == 'I')
            cnt++;
        else
            cnt--;
        if (cnt > res)
            res = cnt;
    }
    cout << res << endl;
    return 0;
}