#include <bits/stdc++.h>
using namespace std;

void perm(string str, int left, int right){
    if(left == right) cout << str << endl;

    for(int i=left; i<=right; i++){
        swap(str[left],str[i]);
        perm(str,left+1,right);
        swap(str[left],str[i]);
    }
}

int main(){
    perm("ABCD",0,3);
    return 0;
}