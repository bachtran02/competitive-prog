#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    bool f1 = false, f2 = false;
    string str; cin >> str;

    for (char i : str){
        if (i == '|'){
            if (!f1)
                f1 = true;
            else
                f2 = true;
        }
        if (i == '*'){
            if (f1 == true && f2 == false)
            cout << "in" << endl;
        else
            cout << "out" << endl;
            return 0;
        }
    }
}