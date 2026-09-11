#include<iostream>
using namespace std;

int clearIthBit(int num, int i){
    int bitmask = ~(1 << i);

    int ans = (num & bitmask);

    return ans;
}


int main(){
    int num = 6;
    int i = 1;
    cout<<clearIthBit(num,i)<<endl;
    return 0;
}