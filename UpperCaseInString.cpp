#include <bits/stdc++.h>
using namespace std;

char toFind(string s, int i){
    // base case
    if(s[i] == '\0'){
        return s[i];
    }
    if(isupper(s[i])){
        return s[i];
    }
    // recursive case
    return toFind(s,i+1);
}

int main(){
    string s; cin >> s; cout << toFind(s,0); return 0;
}