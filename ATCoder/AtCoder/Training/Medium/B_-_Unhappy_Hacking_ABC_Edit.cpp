#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    string res = "";

    for (char c : str)
        if (c != 'B')
            res.push_back(c);
        else
            if (res.length())
                res.pop_back();

    cout << res << endl;
    return 0;
}