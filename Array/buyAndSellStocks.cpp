#include<iostream>
using namespace std;

int maxProfit(int price[], int n){
    int bestBuy[100000];
    bestBuy[0] = INT16_MAX;

    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);
    }

    int maxProfit = 0;

    for(int i=0; i<n; i++){
        int currProfit = price[i] - bestBuy[i];
        maxProfit = max(currProfit,maxProfit);
    }

    return maxProfit;

}

int main(){
    int price[] = {7,1,5,3,6,4};
    int n = 6;

    cout<<"maximum profit: "<<maxProfit(price,n)<<endl;
    return 0;
}