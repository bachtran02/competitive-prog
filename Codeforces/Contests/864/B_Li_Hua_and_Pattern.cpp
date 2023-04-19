#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n, k; cin >> n >> k;
        vector<vector<int>> m(n);
        
        for (auto &i : m)
            for (int j = 0; j < n; j++){
                int temp; cin >> temp;
                i.push_back(temp);
            }

        if (n == 1){
            cout << "YES" << endl;
            continue;
        }

        int cnt = 0;
        for (int i = 0; i < n/2; i++){
            for (int j = 0; j < n; j++){
                if (m[i][j] != m[n - i - 1][n - j - 1])
                    cnt++;
            }
        }

        if (n % 2){
            int i = n/2;
            for (int j = 0; j < n/2; j++){
                if (m[i][j] != m[n - i - 1][n - j - 1])
                    cnt++;
            }
        }

        // if n is odd any spare moves can be used to paint the point at the center
        if (cnt <= k && (n % 2 || (k - cnt) % 2 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}