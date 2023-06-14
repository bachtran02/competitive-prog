#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

void solve(){
    int n; cin >> n;
    vector<int> a(n);

    for (auto &i : a)
        cin >> i;
    
    int maxx = n;
    if (a[0] == maxx)
        maxx--;

    bool found_max = false;
    for (int i = 1; i < n; i++){
        if (found_max == true)
            cout << a[i] << " ";
        if (a[i] == maxx){
            found_max = true;
            cout << a[i] << " ";
        }
    }

    


}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int TC; cin >> TC;
    while (TC--){
        solve();
    }
}