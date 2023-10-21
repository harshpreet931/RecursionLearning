#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size){
    if(size==0) return 0;
    return arr[size-1] + sumArray(arr,size-1);
}

int sumArray(int arr[], int size, int i){
    if(i==size) return 0;
    return arr[i] + sumArray(arr,size,i+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout << sumArray(arr,5) << endl;
    cout << sumArray(arr,5,0) << endl;
    return 0;
}