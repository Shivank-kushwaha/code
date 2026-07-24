#include<iostream>
using namespace std;

//stair case search from top to bottom
int stairCase(int arr[][4], int n, int m, int key){

    int row = 0;
    int col = m-1;

    while(row < n && col >= 0){

        if(arr[row][col] == key){
            cout<<"["<<row<<","<<col<<"]"<<col<<endl;
            return row;
        } else if(key < arr[row][col]){
            col--;
        }else {
            row ++;
        }
    }

    return -1;
}

// stairt case search from bottom to top
int stairCaseSearch(int arr[][4], int n, int m, int key){
    int row = n-1;
    int col = 0;

    while(row >= 0 && col < m){
        if(arr[row][col] == key){
            cout<<"["<<row<<", "<<col<<"]"<<endl;
            return row;
        }else if(key < arr[row][col]){
            row--;
        } else {
            col++;
        }
    }
}

int main(){
    int arr[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int result = stairCaseSearch(arr,4,4,30);
    if(result == -1){
        cout<<"Element Not found"<<endl;
    }
    return 0;
}