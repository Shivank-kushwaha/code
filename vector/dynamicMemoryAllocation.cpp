#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[10];

    int x = 1;

    for(int i=0; i<10; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }

    
    return 0;
}