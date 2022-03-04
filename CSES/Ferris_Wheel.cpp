#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// each gondola may contain one or two children

int main(){
    vector<ll> arr;
    ll temp;
    int n, x, res = 0;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;
    while (i <= j){
        if (arr[i] + arr[j] <= x){
            i++;
        }
        j--;
        res++;
    }
    
    cout << res << endl;
    return 0;
}

/*

SOLUTION: add first and last element of array after sort
          -> if work i increase, j decrease
          -> else j decrease (max value of array cannot be added with any other element)

sort(a , a + n) ;
int cnt = 0 ;
for (int i = 0 , j = n - 1 ; i <= j ; j--) {
    if (a[i] + a[j] <= m) {
        i++ ;
    }
    cnt++ ;
}

*/

/*
// Not optimized working solution:

    int n, res = 0;
    ll x, temp;
    vector<ll> arr;
    vector<ll> a1, a2;

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }

    // have to sort to make sure that if possible there is 
    // a pair of weight < capacity
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i += 2){
        if (arr[i] + arr[i + 1] <= x){
            res++;
        }
        else res += 2;

        temp = x - (arr[i] + arr[i + 1]);
        if (temp > 0)
            a1.push_back(temp);
        else if (temp < 0)
            a2.push_back(-temp);
    }

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int i = 0, j = 0;
    while (i < int(a1.size()) && j < int(a2.size())){
        if (a1[i] >= a2[j]){
            res--;
            j++;
        }
        i++;
    }

    cout << res << endl;

*/