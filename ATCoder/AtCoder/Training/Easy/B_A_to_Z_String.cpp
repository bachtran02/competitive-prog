#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();
    int x = -1, y = -1;
    for (int i = 0; i < n; i++){
        if (x == -1 && s[i] == 'A')
            x = i;
        if (y == -1 && s[n - 1 - i] == 'Z')
            y = n - 1 - i;
    }
    cout << y - x + 1 << endl;
}