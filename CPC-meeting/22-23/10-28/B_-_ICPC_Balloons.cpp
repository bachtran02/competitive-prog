#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        int res = 0;
        string str; cin >> str;
        set<char> s;

        for (int i = 0; i < n; i++){
            char t = str[i];
            if (s.count(t))
                res++;
            else{
                res += 2;
                s.insert(t);
            }
        }

        cout << res << endl;
    }

    return 0;
}