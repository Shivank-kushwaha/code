#include<iostream>
#include<vector>
using namespace std;

int countWays(int n,vector<int> &st){
    if(n == 0 || n == 1){
        return 1;
    }

    if(st[n] != -1){
        return st[n];
    }

    st[n] = countWays(n-1, st) + countWays(n-2, st);
}

int main(){
    int n = 5;
    vector<int>st(n+1, -1);

    cout<<"Total ways of climbing stairs: "<<countWays(n,st);
    
    return 0;
}