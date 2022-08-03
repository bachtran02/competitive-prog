#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str; // size 4 - 10 (inclusive)
    int res = 1e5;

    for (int i = 0; i < str.size() - 2; i++){
        res = min(res, abs(stoi(str.substr(i, 3)) - 754 + 1));
    }

    cout << res << endl;
}