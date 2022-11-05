#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        vector<int> res(3, 0);
        multiset<string> s;
        vector<vector<string>> m;
        for (int i = 0; i < 3; i++){
            vector<string> temp;
            for (int j = 0; j < n; j++){
                string str; cin >> str;
                s.insert(str);
                temp.push_back(str);
            }
            m.push_back(temp);
        }

        for (int i = 0; i < 3; i++){
            for (auto j : m[i]){
                if (s.count(j) == 1)
                    res[i] += 3;
                else
                    res[i] += (3 - s.count(j));
            }
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
