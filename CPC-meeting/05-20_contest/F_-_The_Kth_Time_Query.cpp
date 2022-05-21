#include <bits/stdc++.h>
using namespace std;

int main(){
    map<long int, vector<int>> m;
    int n, q; cin >> n >> q;
    
    for (int i = 1; i <= n; i++){
        long int temp; cin >> temp;
        m[temp].push_back(i);
    }   

    for (int i = 0; i < q; i++){
        long int x; cin >> x;
        int k; cin >> k;

        if (k > m[x].size()){
            cout << "-1" <<  endl;
        }
        else {
            cout << m[x][k - 1] << endl;
        }
    }
}