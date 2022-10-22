#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;
    bool found= false;
    set<char> s;

    for (char c : str){
        if (s.count(c)){
            cout << "no" << endl;
            return 0;
        }
        s.insert(c);
    }
    cout << "yes" << endl;
}