#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n, m, k, res = 0, t = 0;
    vector<ll> a, b;
    ll temp;
    
    cin >> n >> m >> k;
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < m; i++){
        cin >> temp;
        b.push_back(temp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++){
        for (int j = t; j < m; j++){
            if (a[i] - k <= b[j] && b[j] <= a[i] + k){
                res++;
                t++;
                break;
            }
            if (b[j] < a[i]){
                t++;
                continue;
            }

            break;
        }
    }

    cout << res << endl;
    return 0;
}