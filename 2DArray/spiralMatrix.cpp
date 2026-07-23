#include<iostream>
using namespace std;

void sprialMatrix(int mat[][4],int n, int m){
    int srow = 0;
    int scol = 0;
    
    int erow = n-1;
    int ecol = m-1;

    while(srow <= erow && scol <= ecol){
        //Top 
        for(int j=scol; j<=ecol; j++){
            cout<<mat[srow][j]<<" ";
        }

        //Right
        for(int i=srow+1; i<=erow; i++){
           cout<<mat[i][ecol]<<" ";
        }

        //Bottom
         for(int j=ecol-1; j>=scol; j--){
            cout<<mat[erow][j]<<" ";
        }

        //Left
        for(int i=erow-1; i > srow; i--){
            cout<<mat[i][scol]<<" ";
        }

        srow++;
        scol++;

        erow--;
        ecol--;
    }
}

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n = 4;
    int m = 4;

    sprialMatrix(arr,n,m);
    return 0;
}