#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    for (char i : str){
        char t = toupper(i);
        cout << t;
    }
    cout << endl;
    return 0;
}