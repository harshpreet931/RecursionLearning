#include <bits/stdc++.h>
using namespace std;

bool isPalin(string str, int start, int end){
    if(start>=end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }

    return isPalin(str,start+1,end-1);
}

int main(){
    string str = "LEVEL";
    if(isPalin(str,0,str.length()-1)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
    return 0;
}