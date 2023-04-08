#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        string str; cin >> str;

        char charmin = str[0];
        int index = -1;
    
        for (int i = 0; i < str.size(); i++){
            if (str[i] <= charmin){
                charmin = str[i];
                index = i;
            }
        }

        if (index == -1){
            cout << str << endl;
            continue;
        }

        cout << charmin;
        for (int i = 0; i < str.size(); i++){
            if (i == index)
                continue;
            cout << str[i];
        }
        cout << endl;
    }


    return 0;
}