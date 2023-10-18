#include <bits/stdc++.h>
using namespace std;

void toPrint(int arr[], int n){
    //base case
    if(n==0) return;

    //recursive case
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        temp[i] = arr[i] + arr[i+1];
    }

    toPrint(temp,n-1);

    for(int i=0;i<n;i++){
        if(i == n-1) cout << arr[i] << " ";
        else cout << arr[i] << ",";
    }
    cout << endl;
}

int main(){
    int n; cin >> n; int arr[n]; for(int& i : arr) cin >> i;
    toPrint(arr,n);
    return 0;
}

//Sum triangle from array
//Given an array of integers, print a sum triangle from it such that the first level has all array elements. From then, at each level number of elements is one less than the previous level and elements at the level is be the Sum of consecutive two elements in the previous level.
//Example :
//
//Input : A = {1, 2, 3, 4, 5}
//Output :
//[48]
//[20, 28]
//[8, 12, 16]
//[3, 5, 7, 9]
//[1, 2, 3, 4, 5]
//
//Explanation :
//Here,
//[48]
//[20, 28] -->(20 + 28 = 48)
//[8, 12, 16] -->(8 + 12 = 20, 12 + 16 = 28)
//[3, 5, 7, 9] -->(3 + 5 = 8, 5 + 7 = 12, 7 + 9 = 16)
//[1, 2, 3, 4, 5] -->(1 + 2 = 3, 2 + 3 = 5, 3 + 4 = 7, 4 + 5 = 9)
//
//
//Approach :
//
//
//Recursion is the key. At each iteration create a new array which contains the Sum of consecutive elements in the array passes as parameter.
//Make a recursive call and pass the newly created array in the previous step.
//While back tracking print the array (for printing in reverse order).