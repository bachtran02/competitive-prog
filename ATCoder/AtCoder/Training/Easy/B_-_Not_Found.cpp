#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    bool done = false;
    int arr[26] = {0};
    string str; cin >> str;
    for (char c : str){
        arr[c - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (arr[i] == 0){
            done = true;
            cout << char('a' + i) << endl;
            break;
        }
    }
    if (!done)
        cout << "None" << endl;
    return 0;
}