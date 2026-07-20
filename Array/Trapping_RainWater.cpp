#include<iostream>
using namespace std;

int maxWaterTrapped(int height[], int n){

    // calulate left maximum bar

    int leftMax[n];
    leftMax[0] = height[0];

    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    cout<<"left maximum Bar: ";

    for(int i=0; i<n; i++){
        cout<<leftMax[i]<<" ";
    }
    cout<<endl;

    //calutate right maximum Bar

    int rightMax[n];
    rightMax[n-1] = height[n-1];

    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }

    cout<<"Right maximum Bar: ";
    for(int i=0; i<n; i++){
        cout<<rightMax[i]<<" ";
    }

    cout<<endl;

    //find minimum Bar

    int minimum[n];
    
    cout<<"first minimum bar: ";
    for(int i=0; i<n; i++){
        minimum[i] = min(leftMax[i],rightMax[i]);
        cout<<minimum[i]<<" ";
    }
    cout<<endl;

    

    int max = 0;
    for(int i=0; i<n; i++){
      int water= minimum[i] - height[i];
        if(water > 0){
            max += water;
        }
    }
    return max;
}

int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n = 7;
    cout<<"total water trapped: "<<maxWaterTrapped(height,n)<<endl;
    return 0;
}