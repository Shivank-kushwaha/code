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

int binarySearch(int arr[][4], int n, int m, int key){

    for(int i=0; i<n; i++){

        int start = 0;
        int end = m-1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(arr[i][mid] == key){
                cout<<"["<<i<<","<<mid<<"]"<<endl;
                return i;
            }

            if(key < arr[i][mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
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

    int result = binarySearch(arr,4,4,78);
    if(result == -1){
        cout<<"key Not found"<<endl;
    }
    return 0;
}