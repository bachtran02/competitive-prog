#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[3] = {-1, -1, -1};
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        int s, c; cin >> s >> c;
        if (arr[--s] != -1 && arr[s] != c 
        || s + c == 0 && n != 1){
            cout << -1 << endl;
            return 0;
        }
        arr[s] = c;
    }

    for (int i = 0; i < n; i++){
        if (arr[i] == -1)
            if (i == 0 && n != 1)
                cout << 1;
            else
                cout << 0;
        else
            cout << arr[i];
    }

    return 0;
}