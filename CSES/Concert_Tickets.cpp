#include <bits/stdc++.h>
using namespace std;
 
int main(){
    map<int, int> mp;
    int n, m, x;
 
    cin >> n >> m;
    
    for (int temp, i = 0; i < n; i++){
        cin >> temp;
        mp[temp]++;
    }
 
    for (int i = 0; i < m; i++){
        cin >> x;
        auto it = mp.upper_bound(x);
        if (it == mp.begin()){
            cout << -1 << endl;
            continue;
        }
        it--;
        if (mp[it->first]){
            cout << it->first << endl;
            it->second--;
            if (it->second == 0)
                mp.erase(it->first);
        }
    }
    return 0;
}