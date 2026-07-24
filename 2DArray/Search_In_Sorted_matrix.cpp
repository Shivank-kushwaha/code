#include<iostream>
using namespace std;

int search(int arr[][4], int n, int m,int key){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
            cout<<"index no. ["<<i<<", "<<j<<"]"<<endl;
            return i;
            break;
            }
        }
    }

    return -1;
}

int main(){
    int arr[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int result = search(arr,4,4,33);
    if(result == -1){
        cout<<"key Not found"<<endl;
    }
    return 0;
}