#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    for (auto i : str)
        if (i == '0')
            cout << '1';
        else
            cout << '0';
    cout << endl;
    return 0;
}