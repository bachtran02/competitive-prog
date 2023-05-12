#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    string str; cin >> str;

    if (str.size() == 2){
        cout << "NO" << endl;
        return;
    }

    int arr[26] = {0};
    for (char c : str)
        arr[c - 'a']++;
    
    int min = 55, cnt = 0;
    for (int i = 0; i < 26; i++){
        if (!arr[i])
            continue;
        cnt++;
        if (arr[i] < min)
            min = arr[i];
    }
    if  (cnt >= 3 || cnt == 2 && min >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}