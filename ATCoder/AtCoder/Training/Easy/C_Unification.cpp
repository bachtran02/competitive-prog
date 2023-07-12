#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    int cnt_0 = 0;
    for (auto i : str)
        cnt_0 += (i == '0');
    cout << min(cnt_0, int(str.size()) - cnt_0) * 2 << endl;
}