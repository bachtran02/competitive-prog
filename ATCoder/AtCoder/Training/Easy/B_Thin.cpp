#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int h, w; cin >> h >> w;
    char m[105][105];

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> m[i][j];
        }
    }

    for (int i = 1; i <= h; i++){
        for (int k = 0 ; k < 2; k++){
            for (int j = 1; j <= w; j++)
                cout << m[i][j];
            cout << endl;
        }
    }
}