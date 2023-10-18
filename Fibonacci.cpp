#include <iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1 || n == 2) return 1;

    else return fib(n-1) + fib(n-2);

    // basically this function will give you the fibonacci nth number of that exact input number..
}

int main() {
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cout << fib(i) << " ";
    }
    return 0;
}

