#include<iostream>
using namespace std;

bool ifExists(int arr[], int n){
    int x;
    cout<<"Input the number: ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}

int countAppearnce(int arr[], int n){
    int x;
    cout<<"input the number: ";
    cin>>x;

    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            count++;
        }
    }

    return count;
}

int findFirstOccurance(int arr[], int n){
    int x;
    cout<<"input the number: ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i] == x){
           return i;
        }
    }

    return -1;
}

int findLastOccurance(int arr[], int n){
    int x;
    cout<<"input the number: ";
    cin>>x;

  

    for(int i=n-1; i>=0; i--){
        if(arr[i] == x){
           return i;
        }
    }

    return -1;
}

bool unique(int arr[], int n){
}

bool isUnique(int arr[], int n){

}

int main(){
    int arr[] = {34,23,90,87,66,23,2,1,34,23,44};
    int n = sizeof(arr) / sizeof(int);
    cout<<findLastOccurance(arr,n);
    return 0;
}