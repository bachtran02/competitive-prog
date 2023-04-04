#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() > str2.length())
        cout << "GREATER" << endl;
    else if (str1.length() < str2.length())
        cout << "LESS" << endl;
    else {
        for (int i = 0; i < str1.length(); i++){
            if (str1[i] > str2[i]){
                cout << "GREATER" << endl;
                return 0;
            }
            else if (str1[i] < str2[i]){
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
    }
    return 0;
}
