#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int res = 0;
    for (int i = 1; i <= n; i++){
        if (i == arr[arr[i]])
            res++;
    }
    cout << res/2 << endl;
}