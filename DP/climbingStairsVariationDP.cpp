#include<iostream>
#include<vector>
using namespace std;


//Tabulation DP
int countWays(int n){
    vector<int>dp(n+1, 0);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    return dp[n];
}

// Memoizaton DP

int countWaysWithMemoization(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return 1;
    }

    if(n == 2){
        return 2;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = countWaysWithMemoization(n-1,dp) + countWaysWithMemoization(n-2,dp) + countWaysWithMemoization(n-3,dp);

    return dp[n];
}

int main(){
    int n = 3;
    vector<int>dp(n+1,-1);
    cout<<"Total Ways: "<<countWaysWithMemoization(n,dp)<<endl;
    return 0;
}