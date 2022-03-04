#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    vector<string> arr;
    int cnt = 0;
    cin >> str;

    sort(str.begin(), str.end());

    do {
        cnt++;
        arr.push_back(str);
    } while (next_permutation(str.begin(), str.end()));

    cout << cnt << endl;
    for (string s : arr){
        cout << s << endl;
    }

    return 0;
}