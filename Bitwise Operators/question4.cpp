#include<iostream>
using namespace std;

void clearBit(int num, int i){

    int bitmask = (~0) << i;

    num = num & bitmask;

    cout<<num<<endl;
}

int main(){
    int num = 15;
    int i= 2;
    clearBit(num,i);
    return 0;
}