#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int m[3][3] = {0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> m[i][j];
        }
    }

    int summ = m[0][0] + m[1][1] + m[2][2];
    if (m[0][1] + m[1][0] + m[2][2] == summ &&
        m[0][2] + m[2][0] + m[1][1] == summ && 
        m[1][2] + m[2][1] + m[0][0] == summ)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}