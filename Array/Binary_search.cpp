#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int i = 0;
    int j = n-1;

    while(i <= j){
        int mid = (i+j) / 2;

        if(key == arr[mid]){
            return mid;
        }else if(key < arr[mid]){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    
    cout<<"index no. "<<binarySearch(arr,n,14);
    return 0;
}