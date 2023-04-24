#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        string str; cin >> str;
        int n = str.size();
        int res = 1e6;
        set<char> s;

        for (char i : str)
            s.insert(i);

        for (char i : s){
            int max_a = -1, cnt = 0;
            for (char j : str){
                if (j != i){
                    cnt++;
                    max_a = max(max_a, cnt);
                }
                else
                    cnt = 0;
            }
            int tmp = 0;
            while (max_a > 0){
                tmp++;
                max_a /= 2;
            }
            res = min(res, tmp);
        }
        cout << res << endl;
    }
    return 0;
}