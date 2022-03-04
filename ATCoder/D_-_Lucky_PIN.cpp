#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    
    int n; cin >> n;
    string str; cin >> str;

    unordered_set<char> set_i;
    for (int i = 0; i < n - 2; i++){
        if (set_i.count(str[i]))
            continue;
        else
            set_i.insert(str[i]);
        unordered_set<char> set_j;
        for (int j = i + 1; j < n - 1; j++){
            if (set_j.count(str[j]))
                continue;
            else 
                set_j.insert(str[j]);
            for (int k = j + 1; k < n; k++){
                string temp = "";
                temp += str[i];
                temp += str[j];
                temp += str[k];
                s.insert(temp);
            }
        }
    }

    cout << s.size() << endl;

    return 0;
}