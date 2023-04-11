#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<ll> arr(n);
        vector<ll> diff;
        
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (i != 0){
                diff.push_back(arr[i] - arr[i - 1]);
            }
        }

        if (diff.size() == 1 && diff[0] < 0){
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < diff.size() - 1; i++){
            if (diff[i] != 0){
                if (i != diff.size() - 2)
                    diff[i + 2] += diff[i];
                diff[i] = 0;
            }
        }

        if (diff[diff.size() - 1] < 0 && diff.size() % 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}