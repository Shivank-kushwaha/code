#include<iostream>
using namespace std;

int stairCase(int arr[][4], int n, int m, int key){

    int start = 0;
    int end = m-1;

    while(start < n && end >= 0){

        if(arr[start][end] == key){
            cout<<"["<<start<<","<<end<<"]"<<endl;
            return start;
        } else if(key < arr[start][end]){
            end--;
        }else {
            start ++;
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

    int result = stairCase(arr,4,4,33);
    if(result == -1){
        cout<<"Element Not found"<<endl;
    }
    return 0;
}