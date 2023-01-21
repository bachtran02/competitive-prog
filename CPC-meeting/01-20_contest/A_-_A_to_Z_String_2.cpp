#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, x; cin >> n >> x;
    cout << char('A' + (x - 1)/n) << endl;
    return 0;
}