#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {8,3,2,5,3,7,1,9,44,6};
    int n = sizeof(arr) / sizeof(n);

    
    //asscending order
    sort(arr, arr+n);

    cout<<"Ascending order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //decending order

    sort(arr, arr + n, greater<int>());

    cout<<"Decending order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}