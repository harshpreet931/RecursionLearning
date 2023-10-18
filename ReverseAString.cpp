#include <bits/stdc++.h>
using namespace std;

string toRev(string s, int start, int end){
    // base case
    if(start >= end) return s;

    // recursive case
    swap(s[start],s[end]);
    return toRev(s,start+1,end-1);
}

int main(){
    string s; getline(cin,s); cout << toRev(s,0,s.length()-1); return 0;
}