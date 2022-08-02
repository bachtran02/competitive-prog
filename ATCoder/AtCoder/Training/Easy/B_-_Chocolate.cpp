#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, x, res = 0;
    cin >> n >> d >> x;

    multiset<int> s;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        int k, j = 0;

        while (true){
            k = (j++ * a) + 1;
            if (k > d)
                break;
            s.insert(k);
        }
    }
    cout << s.size() + x << endl;
}