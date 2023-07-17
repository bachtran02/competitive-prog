#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s, t; cin >> s >> t;
    t += t;

    for (int i = 0; i < t.size(); i++){
        bool found = true;
        for (int j = 0; j < s.size(); j++){
            if (s[j] != t[i + j]){
                found = false;
                break;
            }
        }
        if (found){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}