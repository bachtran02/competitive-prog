#include <bits/stdc++.h>
using namespace std;

int main(){
    int price_a, price_b, price_ab; cin >> price_a >> price_b >> price_ab;
    int num_a, num_b; cin >> num_a >> num_b; // x: number of A-pizza, y : number of B-pizza
    int res = 0;

    price_a = (price_a < 2 * price_ab) ? price_a : 2 * price_ab;
    price_b = (price_b < 2 * price_ab) ? price_b : 2 * price_ab;

    if (price_a + price_b > 2 * price_ab){
        int m = min(num_a, num_b);
        res += m * price_ab * 2;
        num_a -= m ;
        num_b -= m ;
    }
    
    res += num_a * price_a;
    res += num_b * price_b;

    cout << res << endl;
    return 0;
}
