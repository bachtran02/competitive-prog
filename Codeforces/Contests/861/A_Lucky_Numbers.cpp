#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int l, r; cin >> l >> r;
        string res = "";
        int val = -1;
        for (int i = l; i <= r; i++){
            string str = to_string(i);
            char minn = '9' + 1, maxx = '0' - 1; 
            for (char j : str){
                if (j < minn)
                    minn = j;
                if (j > maxx)
                    maxx = j;
            }
            if (val < maxx - minn){
                val = maxx - minn;
                res = str;
            }
            if (val == 9)
                break;
        }
        cout << res << endl;
    }
    return 0;
}