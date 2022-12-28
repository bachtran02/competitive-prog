#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int arr[100005] = {0};
    bool visited[100005] = {false};

    for (int i = 1; i <= n; i++){
        int t; cin >> t;
        arr[i] = t;
    }

    int curr = 1, cnt = 0;
    while (!visited[curr]){
        if (curr == 2){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
        visited[curr] = true;
        curr = arr[curr];
    }

    cout << -1 << endl;
    return 0;
}