#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        string str; cin >> str;

        if (str.size() == 1 && str[0] == '^'){
            cout << 1 << endl;
            continue;
        }
        int res = 0;
        if (str[0] == '_')
            res++;
        if (str[str.size()-1] == '_')
            res++;
        for (int i = 0; i < str.size(); i++){
            int cnt = 0;
            while (str[i] == '_' && str[i + 1] == '_'){
                i++;
                cnt++;
            }
            res += cnt;
        }
        cout << res << endl;
    }
    return 0;
}