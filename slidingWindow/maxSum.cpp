#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int> arr, int w){
    int currSum = 0;

    int n = arr.size();
    for(int i=0; i<w; i++){
        currSum += arr[i];
    }

    int maximum = currSum;

   
    for(int i=1; i<=n-w; i++){

        currSum = (currSum - arr[i-1]) + arr[i+w-1];
       
        if(currSum > maximum){
            maximum = currSum;
        }
    }

    return maximum;
}

int main(){
    vector<int>arr = {3,8,2,5,7,6,12};
    int w = 3;
    cout<<"maximum sum is: "<<maxSum(arr,w)<<endl;
    return 0;
}