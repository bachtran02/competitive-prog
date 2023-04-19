#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        vector<int> arr(n), count(n + 2);

        for (auto &i : arr){
            cin >> i;
            if (i < n)
                count[i]++;
        }

        int m = -1;
        for (int a = 0; a <= n; a++){
            if (!count[a]){
                m = a;
                break;
            }
        }

        int cnt = 0;
        if (count[m + 1]){
            for (int i = 0; i < n; i++){
                if (arr[i] == m + 1){
                    while(count[m + 1]){
                        cnt++;
                        if (arr[i] < n)
                            count[arr[i]]--;
                        i++;
                    }
                    break;
                }
            }
        }

        int cnt_0 = 0, summ = 0;
        for (int a = 0; a <= m; a++){
            if (count[a] == 0)
                cnt_0++;
            summ += count[a];
        }

        if (m + 1 <= n)
            cnt = max(cnt, 1);

        if (summ + cnt < m + 1 || cnt_0 > 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}