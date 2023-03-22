#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    int res = 105;
    set<char> s;
    for (char i : str){
        s.insert(i);
    }

    for (char i : s){
        string temps = str;
        while(true){
            string tempstr = "";
            string cmp(temps.size(), temps[0]);

            if (temps == cmp || temps.size() == 1)
                break;
            
            for (int j = 0; j < temps.size() - 1;  j++){
                tempstr += (temps[j] == i || temps[j + 1] == i)? i : temps[j];
            }
            temps = tempstr;
        }
        res = min(res, int(str.size() - temps.size()));
    }
    cout << res << endl;
    return 0;
}