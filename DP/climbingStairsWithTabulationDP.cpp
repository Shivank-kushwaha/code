#include<iostream>
#include<vector>
using namespace std;

int countWays(int n){
    vector<int>DP(n+1,0);

    DP[0] = 1;
    DP[1] = 1;

    for(int i=2; i<=n; i++){
        DP[i] = DP[i-1] + DP[i-2];
    }

    return DP[n];
}

int main(){
    int n = 6;
    cout<<"Total ways: "<<countWays(n)<<endl;
    return 0;
}