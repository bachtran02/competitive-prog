#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<pi> arr(n);

    for (auto &i : arr)
        cin >> i.first >> i.second;
    
    double res = 0;
    for (int i = 0; i < n; i++){
        double summ = 0;
        for (int j = 0; j < n; j++){
            summ += sqrt(pow(fabs(arr[i].first - arr[j].first), 2) +
                pow(fabs(arr[i].second - arr[j].second), 2));
        }
        res += summ/double(n);
    }
    cout << fixed << setprecision(10) << res << endl;
}