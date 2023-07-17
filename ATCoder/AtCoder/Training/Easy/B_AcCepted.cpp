#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s; cin >> s;
    bool invalid = false;

    if (s[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }
    bool found = false;
    for (int i = 1; i < s.size(); i++){
        if (i >= 2 && i <= s.size() - 2 && s[i] == 'C'){
            if (!found){
                found = true;
                continue;
            }
            else
                invalid = true;
        }
        if (!islower(s[i]))
            invalid = true;
    }
    if (found && !invalid)
        cout << "AC" << endl;
    else
        cout << "WA" << endl;
}