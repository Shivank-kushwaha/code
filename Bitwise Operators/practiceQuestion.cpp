#include<iostream>
using namespace std;

int updateBit(int num ,int i){

    int bitmask = ~(1 << i);

    int ans = (num & bitmask);

    return ans;
}

int main(){
    int num = 7;
    int i = 2;
    cout<<"after updating: "<<updateBit(num,i)<<endl;
    return 0;
}