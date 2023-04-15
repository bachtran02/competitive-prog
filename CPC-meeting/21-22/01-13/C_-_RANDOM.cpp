#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int h, w; cin >> h >> w;
    vector<string> s(h), t(h);
    multiset<string> set1, set2;

    for (auto &i : s)
        cin >> i;

    for (auto &i : t)
        cin >> i;

    for (int i = 0; i < w; i++){
        string str = "";
        for (int j = 0; j < h; j++){
            str.push_back(t[j][i]);
        }
        set1.insert(str);
    }
    
    for (int i = 0; i < w; i++){
        string str = "";
        for (int j = 0; j < h; j++){
            str.push_back(s[j][i]);
        }
        set2.insert(str);
    }

    if (set1 == set2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}