#include<iostream>
using namespace std;

int updateBit(int num, int val, int i){

    int bitmask = ~(1 << i);

    num = (num & bitmask);

    num = num | (val << i);

    return num;
}

int main(){
    int num = 7;
    int val = 1;
    int i = 3;
    cout<<"ans: "<<updateBit(num,val,i)<<endl;
    return 0;
}