#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int h, w; cin >> h >> w;
    char m[60][60];
    bool valid = true;

    for (int i = 5; i < h + 5; i++){
        for (int j = 5; j < w + 5; j++){
            cin >> m[i][j];
        }
    }

    for (int i = 5; i < h + 5; i++){
        for (int j = 5; j < w + 5; j++){
            if (m[i][j] != '#') 
                continue;

            int dx[4] = {-1,  0, 0, 1};
            int dy[4] = { 0, -1, 1, 0};
            bool found = false;
            for (int k = 0; k < 4; k++){
                if (m[i + dy[k]][j + dx[k]] == '#')
                    found = true;
            }

            if (!found){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}