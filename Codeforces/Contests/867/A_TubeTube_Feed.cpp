#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int TC; cin >> TC;
    while (TC--){
        int n, t; cin >> n >> t;
        vector<int> a1(n), a2(n);

        for (int i = 0; i < n; i++){
            cin >> a1[i];
            a1[i] += i;
        }
            
        for (auto &i : a2)
            cin >> i;

        int max_e = -1, res = -1;
        for (int i = 0; i < n; i++){
            if (max_e < a2[i] && t >= a1[i]){
                max_e = a2[i];
                res = i + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}