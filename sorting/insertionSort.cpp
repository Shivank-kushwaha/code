#include<iostream>
using namespace std; 

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        
            
    }
}

int main(){
    int arr[] = {9,3,1,9,8,2,7};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr,n);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}