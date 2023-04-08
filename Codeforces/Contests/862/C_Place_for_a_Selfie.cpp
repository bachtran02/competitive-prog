#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int TC; cin >> TC;
    while (TC--){
        int n, m; cin >> n >> m;
        vector<ll> lines(n);
 
        for (auto &i : lines)
            cin >> i;
        
        sort(lines.begin(), lines.end());
 
        for (int i = 0; i < m; i++){
            ll a, b, c; cin >> a >> b >> c;
 
            if (a*c < 0){
                cout << "NO" << endl;
                continue;
            }
 
            double maxx = (2*sqrt(a*c) + b);
            double minn = (-2*sqrt(a*c) + b);

            int lower = upper_bound(lines.begin(), lines.end(), minn) - lines.begin();
 
            if (lower == lines.size()){
                cout << "NO" << endl;
                continue;
            }
            
            if (lines[lower] < maxx){
                cout << "YES" << endl;
                cout << lines[lower] << endl;
            }
            else
                cout << "NO" << endl;
        }
        cout << endl;
    }
 
    return 0;
}