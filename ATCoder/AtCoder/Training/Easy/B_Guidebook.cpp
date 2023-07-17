#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<pair<string, int>, int>> a(n);

    for (int i = 0; i < n; i++){
        string s; int t; cin >> s >> t;
        a[i].first.first = s;
        a[i].first.second = -t;  // add (-) to sort in descending order
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    for (auto i : a)
        cout << i.second + 1 << endl; 
}