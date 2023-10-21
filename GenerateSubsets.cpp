#include <bits/stdc++.h>
using namespace std;

void gen(string str, string curr, int idx, vector<string>& res){
    if(idx==str.length()){
        cout << curr << " ";
        res.push_back(curr);
        return;
    }

    gen(str,curr,idx+1,res);
    gen(str,curr+str[idx],idx+1,res);
}
int main(){
    string str = "Harsh";
    string curr = "";
    vector<string> ress;
    gen(str,curr,0,ress);
    for(string& i : ress){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}