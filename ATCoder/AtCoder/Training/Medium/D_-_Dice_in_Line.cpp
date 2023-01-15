#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<ll> arr(n);

    for (auto &i : arr)
        cin >> i;
    
    ll max_sum = -1, summ = 0;
    // find sum of first k elements in array
    for (int i = 0; i < k; i++){
        summ += arr[i];
    }

    max_sum = summ;
    // find largest subarray with k elements: for each subrray, substract first element
    // of prev subarray from sum and add the last element of current subarray -> O(n)
    for (int i = k; i < n; i++){
        summ += arr[i] - arr[i - k];
        max_sum = max(max_sum, summ);
    }

    cout << fixed << setprecision(12) << (max_sum + k) / 2.0 << endl;
    return 0;
}
