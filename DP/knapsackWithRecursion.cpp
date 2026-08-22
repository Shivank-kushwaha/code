#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> val, vector<int> wt, int w, int n){

    if(n == 0 ||  w == 0){
        return 0;
    }

    int itemVal = val[n-1];
    int itemWt = wt[n-1];

    if(itemWt <= w){
        //include
        int ans1 = maxProfit(val,wt,w-itemWt,n-1) + itemVal;

        //exclude
        int ans2 = maxProfit(val,wt,w,n-1);

        return max(ans1,ans2);

    }else {  //exclude
       return maxProfit(val,wt,w,n-1);
    }
}

int main(){
    vector<int>itemVal = {15,14,10,45,30};
    vector<int>itemWt = {2,5,1,3,4};
    int n = 5;
    int w = 7;
    cout<<"maximum profit: "<<maxProfit(itemVal,itemWt,w,n)<<endl;
    return 0;
}