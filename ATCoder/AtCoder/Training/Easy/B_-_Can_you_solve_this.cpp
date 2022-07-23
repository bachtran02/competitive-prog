#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c, res = 0;
    cin >> n >> m >> c;

    vector<int> arr(m);
    for (auto &i : arr){
        cin >> i;
    }

    for (int i = 0; i < n; i++){
        int temp = 0;
        for (int j = 0; j < m; j++){
            int k; cin >> k;
            temp += k * arr[j];
        }

        if (temp + c > 0)
            res++;
    }

    cout << res << endl;
}