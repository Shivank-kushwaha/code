#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    cout<<"array before reverse: ";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i = 0;
    int j = n-1;

    while(i <= j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    cout<<"reverse array: ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    reverseArray(arr,n);
    return 0;
}