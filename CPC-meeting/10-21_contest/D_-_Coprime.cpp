#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;
        int maxx = -1;
        vector<int> arr(1005, -1);
        for (int i = 1; i <= n; i++){
            int temp; cin >> temp;
            arr[temp] = i;
        }

        for (int i = 1; i <= 1000; i++){
            for (int j = 1; j <= 1000; j++){
                if (arr[i] != -1 && arr[j] != -1 && __gcd(i, j) == 1){
                    maxx = max(maxx, arr[i] + arr[j]);
                }
            }
        }

        if (maxx == -1)
            cout << -1;
        else 
            cout << maxx;
        cout << endl;
    }
}