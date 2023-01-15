#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;

    int k = 0, l = 0, cnt = 0;
    while (k < n && l < n){
        if (s1[k++] == s2[l]){
            l++;
            cnt++;
        }
    }

    cout << 2 * n - cnt << endl;
    return 0;
}