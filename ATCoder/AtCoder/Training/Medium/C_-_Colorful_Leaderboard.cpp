#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int add_max = 0;
    int arr[8] = {399, 799, 1199, 1599, 1999, 2399, 2799, 3199 };
    unordered_set<int> s;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        bool added = false;
        for (int i = 0; i < 8; i++){
            if (num <= arr[i]){
                s.insert(i);
                added = true;
                break;
            }
        }
        if (!added)
            add_max++;
    }
    
    cout << max(1, int(s.size())) << " " << s.size() + add_max << endl;
    return 0;
}