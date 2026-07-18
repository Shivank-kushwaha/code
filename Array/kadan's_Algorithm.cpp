#include<iostream>
using namespace std;

int maxSubArraySum(int arr[],int n){

    int maxSum = 0;
    
    for(int i=0; i<n; i++){
        maxSum += arr[i];
        if(maxSum < 0){
            maxSum = 0;
        }
    }

    return maxSum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    cout<<n<<endl;
    return 0;
}