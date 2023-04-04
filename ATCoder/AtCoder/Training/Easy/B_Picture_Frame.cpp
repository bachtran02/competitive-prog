#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int h, w; cin >> h >> w;
    vector<string> arr(h);
    for (int i = 0; i < h; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < h + 2; i++){
        if (i == 0 || i == h + 1){
            string estr(w + 2, '#');
            cout << estr << endl; 
        }
        else
            cout << '#' << arr[i - 1] << '#' << endl;
    }
    return 0;
}