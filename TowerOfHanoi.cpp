#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char help, char target){
    if(n==1){
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    towerOfHanoi(n-1,source,target,help);
    cout << "Move Disk " << n << " from " << source << " to " << target << endl;
    towerOfHanoi(n-1,help,source,target);
}

int main(){
    towerOfHanoi(5,'A','B','C');
    return 0;
}
