#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int TC; cin >> TC;
    while (TC--){
        int n; cin >> n;
        ll aw = 0, ab = 0, bw = 0, bb = 0;

        int i = 1;
        while(n > 0){
            if (i % 4 == 0 || i % 4 == 1){
                i = min(i, n);
                aw += (i % 2) ? ceil(i/2.0) : i/2;
                ab += (i % 2) ? floor(i/2.0) : i/2;
            }
            else{
                i = min(i, n);
                bb += (i % 2) ? ceil(i/2.0) : i/2;
                bw += (i % 2) ? floor(i/2.0) : i/2;
            }
            n -= i++;
        }
        cout << aw << " " << ab << " " << bw << " " << bb << endl;
    }
    return 0;
}