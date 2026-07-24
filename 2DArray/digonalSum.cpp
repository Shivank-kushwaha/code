#include<iostream>
using namespace std;

// Time complexity: O(n^2)
void digonalSum(int arr[][4], int n, int m){
    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += arr[i][j];
            } else if(j == m-i-1){
                sum += arr[i][j];
            }
        }
    }

    cout<<"Total sum: "<<sum<<endl;
}


// Time complexity: O(n)
void digonalSumOptimize(int arr[][4], int n, int m){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i][i];

        if(i != n-i-1){
            sum += arr[i][i];
        }
    }

    cout<<"digona sum: "<<sum<<endl;
}

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    digonalSum(arr,4,4);
    digonalSumOptimize(arr,4,4);

    return 0;
}