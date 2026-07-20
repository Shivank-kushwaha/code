#include<iostream>
using namespace std;

//question no.1
void printArray(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<endl;

    cout<<"Final array: ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sumOfElements(int arr[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int averageOfElement(int arr[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int avg = sum / n;
    return avg;
}
int main(){
    int arr[] = {2,7,3,5};
    int n = sizeof(arr) / sizeof(int);
    cout<<averageOfElement(arr,n);
    return 0;
}