#include <bits/stdc++.h>
using namespace std;

double power(double base, int exp){
    if(exp == 0) return 1;
    if(exp<0) return 1/ power(base,-exp);
    return base * power(base,exp-1);
}

int main(){
    double base = 15; int exp = -4;
    cout << power(base,exp);
    return 0;
}
