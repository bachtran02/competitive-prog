#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> arr(m + 1);

    for (int i = 1; i <= m; i++)
        cin >> arr[i];

    vector<int> b(n + 1);
    iota(b.begin(), b.end(), 0);

    for (int i = 1; i <= m; i++){
        swap(b[arr[i]], b[arr[i] + 1]);
    }

    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++){
        pos[b[i]] = i;
    }

    iota(b.begin(), b.end(), 0);

    for (int i = 1; i <= m; i++){
        if (b[arr[i]] == 1)
            cout << pos[b[arr[i] + 1]] << endl;
        else if (b[arr[i] + 1] == 1)
            cout << pos[b[arr[i]]] << endl;
        else
            cout << pos[1] << endl;

        swap(b[arr[i]], b[arr[i] + 1]);
    }

    return 0;
}