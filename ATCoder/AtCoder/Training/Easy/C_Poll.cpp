#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    map<string, int> m;
    int max = -1;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        m[s]++;
        if (m[s] > max)
            max = m[s];
    }

    for (auto i : m){
        if (i.second == max)
            cout << i.first << endl;
    }
}