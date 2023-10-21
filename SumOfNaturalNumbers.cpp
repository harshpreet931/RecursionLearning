#include <bits/stdc++.h>
using namespace std;

int sn(int n){
    if (n==0) return 0;
    return n+sn(n-1);
}

int main(){
    cout << sn(5) << endl;
}
