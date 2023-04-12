#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> moves;

int solve(int n, int from, int use, int to){
    if (n == 1){
        moves.push_back({from, to});
        return 1;
    }
    if (n == 2){
        moves.push_back({from, use});
        moves.push_back({from , to});
        moves.push_back({use, to});
        return 3;
    }
    return solve(n - 1, from, to, use) + solve(1, from, use, to) + solve(n - 1, use, from, to);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    solve(n, 1, 2, 3);
    cout << moves.size() << endl;
    for (auto i : moves)
        cout << i.first << " " << i.second << endl;

    return 0;
}