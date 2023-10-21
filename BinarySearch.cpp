#include <bits/stdc++.h>
using namespace std;

int bs(int arr[], int target, int start, int end){
    if(end>=start) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return bs(arr, target, start, mid - 1);
        }

        return bs(arr, target, mid + 1, end);
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int target = 4;
    cout << bs(arr,target,0,5);
    return 0;

}