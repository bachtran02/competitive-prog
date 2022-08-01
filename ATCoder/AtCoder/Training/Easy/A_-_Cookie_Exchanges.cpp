#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a, b, c, res = 0;
    cin >> a >> b >> c;

    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        if (a == b && b == c){
            res = -1;
            break;
        }

        long int temp1 = b/2 + c/2;
        long int temp2 = a/2 + c/2;
        long int temp3 = a/2 + b/2;

        a = temp1;
        b = temp2;
        c = temp3;

        res++;
    }
    
    cout << res << endl;
}