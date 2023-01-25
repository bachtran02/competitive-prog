#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < str.size(); i++){
        if (i % 2 && str[i] - '1' || !(i % 2) && str[i] - '0')
            cnt1++;
        else
            cnt2++;
    }

    cout << min(cnt1, cnt2) << endl;
    return 0;
}