#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the row no: ";
    cin>>n;

    int m;
    cout<<"Enter the colum no: ";
    cin>>m;

    // int arr[n][m] = {
    //     {45,67,43},
    //     {98,76,56},
    //     {87,78,90},
    // };

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        cout<<i+1<<" row: ";
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}