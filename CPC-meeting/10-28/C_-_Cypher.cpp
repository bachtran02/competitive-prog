#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test; cin >> test;
    for (int z = 1; z <= test; z++){
        int n; cin >> n;  // num wheels
        vector<int> arr(n);
        for (int &i : arr)
            cin >> i;
        
        for (int i = 0; i < n; i++){
            int k; cin >> k;
            for (int l = 0; l < k; l++){
                char c; cin >> c;
                if (c == 'U'){
                    if (arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i]--;
                }   
                if (c == 'D'){
                    if (arr[i] == 9)
                        arr[i] = 0;
                    else
                        arr[i]++;
                }
            }
        }

        for (int i : arr){
            cout << i << " ";
        }
        cout << endl;

    }

    return 0;
}