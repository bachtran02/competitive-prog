#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        set<char> s({'T', 'i', 'm', 'u', 'r'});
        bool done = false;
        int n; cin >> n;
        string str; cin >> str;
        for (auto i : str){
            if (s.count(i))
                s.erase(i);
            else{
                done = true;
                break;
            }
        }

        if (done || s.size() != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}