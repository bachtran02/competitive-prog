#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string str; cin >> str;
    while(true){
        str.pop_back();
        if (str.length() % 2 != 0)
            continue;
        int len = str.length();
        if (str.substr(0, len/2) == str.substr(len/2, len/2)){
            cout << len << endl;
            return 0;
        }
    }
}