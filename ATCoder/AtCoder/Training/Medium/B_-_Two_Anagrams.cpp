#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s, t; cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    if (t > s)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}