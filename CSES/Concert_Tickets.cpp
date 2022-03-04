#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mapp;
    int n, m, x;

    cin >> n >> m;
    
    for (int temp, i = 0; i < n; i++){
        cin >> temp;
        mapp[temp]++;
    }

    for (int i = 0; i < m; i++){
        cin >> x;
        auto it = mapp.lower_bound(x);

        if (it == mapp.begin() && it->first != x){
            cout << "-1" << endl;
            continue;
        }

        while(it->first > x){
            it--;
        }
        
        cout << it->first << endl;

        if (mapp[it->first] != 0){
            mapp[it->first]--;
            if (mapp[it->first] == 0)
                mapp.erase(it->first);
        }
    }

    return 0;
}