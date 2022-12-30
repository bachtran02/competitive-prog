#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string str; cin >> str;
    vector<string> li;
    int cur_i = 0;

    for (int i = 0; i < str.length() - 1; i++){
        if (str[i] == '>' && str[i + 1] == '<'){
            li.push_back(str.substr(cur_i, i - cur_i + 1));
            cur_i = i + 1;
        }
    }
    li.push_back(str.substr(cur_i, str.size() - cur_i + 1));

    ll res = 0;
    for (string s : li){
        ll cnt1 = 0, cnt2 = 0;
        for (char c : s){
            if (c == '<')
                cnt1++;
            else
                cnt2++;
        }

        if (cnt1 < cnt2)
            swap(cnt1, cnt2);

        for (ll i = 1; i <= cnt1; i++){
            res += i;
        }
        for (ll i = 1; i <= cnt2 - 1; i++){
            res += i;
        }
    }

    cout << res << endl;
    return 0;
}