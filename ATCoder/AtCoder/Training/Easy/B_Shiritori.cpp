#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    set<string> s;
    string last = "";
    bool valid = true;
    for (int i = 0; i < n; i++){
        string tmp; cin >> tmp;
        if (s.count(tmp) || (last != "" && last[last.size() - 1] != tmp[0])){
            valid = false;
        }
        s.insert(tmp);
        last = tmp;
    }

    if (valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}