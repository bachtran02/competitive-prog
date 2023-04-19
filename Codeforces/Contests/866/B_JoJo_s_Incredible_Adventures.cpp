#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int TC; cin >> TC;
    while (TC--){
        string str; cin >> str;
        int n = str.size();
        ll maxx = 0, cnt = 0;
        bool done = false;
 
        for (int i = 0; i < 2*n; i++){
            if (cnt == n){
                cout << cnt * cnt << endl;
                done = true;
                break;
            }
            if (str[i % n] == '0'){
                maxx = max(cnt, maxx);
                if (i >= n)
                    break;
                cnt = 0;
            }
            else
                cnt++;
        }

        if (done)
            continue;
        ll res = 0;
        for (int i = 1; i <= maxx; i++){
            res = max(i * (maxx - i + 1) , res);
        }
        cout << res << endl;
    }
    return 0;
}