#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str, res = "";
    map<char, int> mapp;
    int n = 0;
    char c;
 
    cin >> str;
 
    for (int i = 0; i < str.size(); i++){
        mapp[str[i]]++;
    }
 
    bool first = true;
    for (auto i : mapp){
        if (i.second % 2 == 1){
            if (first && str.size() % 2 == 1){
                first = false;
                n = i.second;
                c = i.first;  
            }
            else {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
 
    for (auto i : mapp){
        if (i.second % 2 == 0)
            res += string(i.second / 2, i.first);
    }

    cout << res;
    for (int i = 0; i < n; i++){
        cout << c;
    }

    reverse(res.begin(), res.end());
    cout << res;
 
    return 0;
}