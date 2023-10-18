#include <bits/stdc++.h>
using namespace std;

void toPrint(string s, int start , int end){
    if(start == end){
        cout << s << endl;
        return;
    }

    for(int i=start;i<=end;i++){
        swap(s[start],s[i]);
        toPrint(s,start+1,end);
        swap(s[start],s[i]);
    }
}

int main(){
    string s; cin >> s;
    toPrint(s,0,s.length()-1);
    return 0;
}