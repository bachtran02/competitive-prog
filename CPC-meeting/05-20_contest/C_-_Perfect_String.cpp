#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;
    set<char> s;
    bool have_upper = false;
    bool have_lower = false;

    for (int i = 0; i < str.size(); i++){
        if (s.count(str[i])){
            cout << "No" << endl;
            return 0;
        }
        s.insert(str[i]);

        if (islower(str[i])){
            have_lower = true;
        }
        if (isupper(str[i])){
            have_upper = true;
        }

    }

    if (have_lower && have_upper)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}