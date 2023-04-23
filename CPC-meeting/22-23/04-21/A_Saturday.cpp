#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str; cin >> str;
    string arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  
    for (int i = 0; i < 7; i++){
        if (str == arr[i]){
            cout << 7 - i - 2 << endl;
            break;
        }
    }
    return 0;
}