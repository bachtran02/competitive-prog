#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        string str; cin >> str;
        ll res = 1;

        if (str[0] == '0'){
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '?'){
                if (i == 0)
                    res *= 9;
                else
                    res *= 10;
            }   
        }

        cout << res << endl;
    }

    return 0;
}