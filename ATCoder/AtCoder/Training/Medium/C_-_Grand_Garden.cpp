#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a1(n), a2(n, 0); 

    for (auto &i : a1)
        cin >> i;

    int res = 0;
    for (int i = 0; i < n; i++){
        while (a1[i] != a2[i]){
            for (int j = i; j < n; j++){
                if (a1[j] == a2[j])
                    break;
                a2[j]++;
            }
            res++;
        }
    }

    cout << res << endl;
    return 0;
}

// 0 ≤ h(i) ≤ 100 -> hint that loop through all values of h(i) is possible