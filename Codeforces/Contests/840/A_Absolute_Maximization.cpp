#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<int> arr(n);

        for (auto &i : arr)
            cin >> i;

        int minn = 1e5, maxx = -1; 
        for (int i = 0; i < n; i++){
            int kmax = arr[i], kmin = arr[i];
            for (int j = 0; j < n; j++){
                if (i == j)
                    continue;
                kmax = kmax | arr[j];
                kmin = kmin & arr[j];
            }
            maxx = max(kmax, maxx);
            minn = min(kmin, minn);
        }
        cout << maxx - minn << endl;
    }
    return 0;
}