#include <bits/stdc++.h>
using namespace std;

int printMax(int arr[], int n){
    // base case
    if(n==1) return arr[0];

    // recursive case
    return max(arr[n-1], printMax(arr,n-1));
}

int printMin(int arr[], int n){
    // base case
    if(n==1) return arr[0];

    // recursive case
    return min(arr[n-1], printMin(arr,n-1));
}

int main(){
    int n; cin >> n; int arr[n]; for(int& i : arr) cin >> i;
    cout << printMax(arr,n) << endl;
    cout << printMin(arr,n) << endl;
}